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

// AudioCaller
struct AudioCaller_t1775945674;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip>
struct Dictionary_2_t3925917911;
// System.Collections.Generic.Dictionary`2<Sounds,System.Object>
struct Dictionary_2_t3325134410;
// BackgroundCaller
struct BackgroundCaller_t1077918380;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite>
struct Dictionary_2_t1240555205;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Collections.Generic.Dictionary`2<Scenes,System.Object>
struct Dictionary_2_t4040004277;
// Cam
struct Cam_t2348450784;
// UnityEngine.Transform
struct Transform_t3600365921;
// Obstacle
struct Obstacle_t162511623;
// System.Collections.Generic.List`1<Obstacle>
struct List_1_t1634586365;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>
struct List_1_t1484257051;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_t12182309;
// GameHUD
struct GameHUD_t3716131516;
// GameStart
struct GameStart_t4096828885;
// HitObstacle
struct HitObstacle_t2463768999;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t309005672;
// MenuHUD
struct MenuHUD_t3185551065;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// ObstacleSpawner
struct ObstacleSpawner_t854983466;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// Player
struct Player_t3266647312;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// SceneCaller
struct SceneCaller_t2373517278;
// System.Collections.Generic.Dictionary`2<Scenes,System.String>
struct Dictionary_2_t2807348802;
// TextTyper
struct TextTyper_t680081595;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Scenes[]
struct ScenesU5BU5D_t2456431154;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// System.Collections.Generic.IEqualityComparer`1<Scenes>
struct IEqualityComparer_1_t1520254101;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<Scenes,UnityEngine.Sprite,System.Collections.DictionaryEntry>
struct Transform_1_t3590934723;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// Sounds[]
struct SoundsU5BU5D_t1741561287;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// System.Collections.Generic.IEqualityComparer`1<Sounds>
struct IEqualityComparer_1_t816444132;
// System.Collections.Generic.Dictionary`2/Transform`1<Sounds,UnityEngine.AudioClip,System.Collections.DictionaryEntry>
struct Transform_1_t1020631593;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>[]
struct UnityAction_1U5BU5D_t518306472;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.Dictionary`2/Transform`1<Scenes,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t2290817714;
// Obstacle[]
struct ObstacleU5BU5D_t3867503870;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioHandler_t3272622511_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t AudioCaller_Awake_m324949411_MetadataUsageId;
extern const uint32_t AudioHandler_get_Initialized_m3892574172_MetadataUsageId;
extern const RuntimeMethod* Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2205990300_RuntimeMethod_var;
extern String_t* _stringLiteral357871679;
extern String_t* _stringLiteral2780624989;
extern String_t* _stringLiteral2776790003;
extern String_t* _stringLiteral3191268062;
extern const uint32_t AudioHandler_Initialize_m61306179_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m31668732_RuntimeMethod_var;
extern const uint32_t AudioHandler_PlaySound_m2903003174_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3925917911_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3770276227_RuntimeMethod_var;
extern const uint32_t AudioHandler__cctor_m1382153886_MetadataUsageId;
extern RuntimeClass* BackgroundHandler_t4009190922_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t BackgroundCaller_Awake_m3744744508_MetadataUsageId;
extern const uint32_t BackgroundHandler_get_Initialized_m985607731_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m417020380_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var;
extern String_t* _stringLiteral2643421024;
extern const uint32_t BackgroundHandler_Initialize_m3187152508_MetadataUsageId;
extern RuntimeClass* SceneHandler_t392543793_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2762516092_RuntimeMethod_var;
extern const uint32_t BackgroundHandler_UpdateBackground_m956592049_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1240555205_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3275839340_RuntimeMethod_var;
extern const uint32_t BackgroundHandler__cctor_m3950533156_MetadataUsageId;
extern RuntimeClass* EventManager_t1594656820_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m3534108503_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3426409665_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1695841294_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3479125306_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2369319652_RuntimeMethod_var;
extern const uint32_t EventManager_AddHitObstacleInvoker_m2158668339_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m360537686_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3154063007_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1010696607_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2811346468_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2354911885_RuntimeMethod_var;
extern const uint32_t EventManager_AddHitObstacleListener_m11849621_MetadataUsageId;
extern RuntimeClass* List_1_t1634586365_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1484257051_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2108557919_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3418488446_RuntimeMethod_var;
extern const uint32_t EventManager__cctor_m427558894_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3021899316;
extern String_t* _stringLiteral2228605849;
extern String_t* _stringLiteral3454908288;
extern const uint32_t GameHUD_Update_m868872271_MetadataUsageId;
extern RuntimeClass* GameVariables_t3794197391_il2cpp_TypeInfo_var;
extern const uint32_t GameVariables_get_Points_m3615572610_MetadataUsageId;
extern const uint32_t GameVariables_set_Points_m853646325_MetadataUsageId;
extern const uint32_t GameVariables_get_Health_m4279416818_MetadataUsageId;
extern const uint32_t GameVariables_set_Health_m4167835135_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m3567252554_RuntimeMethod_var;
extern const uint32_t HitObstacle__ctor_m1137735573_MetadataUsageId;
extern const uint32_t MenuHUD_ClickStart_m1061616739_MetadataUsageId;
extern const uint32_t MenuHUD_ClickHelp_m1773989946_MetadataUsageId;
extern const uint32_t MenuHUD_ClickGoBack_m3871876596_MetadataUsageId;
extern RuntimeClass* HitObstacle_t2463768999_il2cpp_TypeInfo_var;
extern const uint32_t Obstacle__ctor_m1962423779_MetadataUsageId;
extern const uint32_t Obstacle_Start_m770163199_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_Invoke_m598483244_RuntimeMethod_var;
extern const uint32_t Obstacle_OnCollisionEnter2D_m3671537103_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_AddListener_m3657375053_RuntimeMethod_var;
extern const uint32_t Obstacle_AddHitObstacleListener_m2606000965_MetadataUsageId;
extern RuntimeClass* List_1_t899420910_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1536473967_RuntimeMethod_var;
extern const uint32_t ObstacleSpawner__ctor_m3184897244_MetadataUsageId;
extern RuntimeClass* UnityAction_1_t12182309_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ObstacleSpawner_DeactivateObstacle_m1627701775_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m4251943150_RuntimeMethod_var;
extern String_t* _stringLiteral3907562786;
extern const uint32_t ObstacleSpawner_Start_m2081947238_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Contains_m3294296416_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const uint32_t ObstacleSpawner_Spawn_m1519001173_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Capacity_m3061168155_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t ObstacleSpawner_GetSpawnPosition_m1222906663_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m3586184571_RuntimeMethod_var;
extern const uint32_t ObstacleSpawner_DeactivateObstacle_m1627701775_MetadataUsageId;
extern RuntimeClass* Player_t3266647312_il2cpp_TypeInfo_var;
extern const uint32_t Player_get_PlayerPosition_m1660955938_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern const uint32_t Player_Movement_m2401100194_MetadataUsageId;
extern const uint32_t Player_Loop_m979010682_MetadataUsageId;
extern const uint32_t Player_Clamp_m1789074994_MetadataUsageId;
extern const uint32_t SceneCaller_Awake_m2402910593_MetadataUsageId;
extern const uint32_t SceneCaller_Update_m102590092_MetadataUsageId;
extern const uint32_t SceneHandler_get_Initialized_m3718856300_MetadataUsageId;
extern const uint32_t SceneHandler_get_CurrentScene_m3827173497_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Add_m630417335_RuntimeMethod_var;
extern String_t* _stringLiteral1544471547;
extern String_t* _stringLiteral2793515199;
extern String_t* _stringLiteral2751939251;
extern String_t* _stringLiteral62725266;
extern String_t* _stringLiteral3266137297;
extern const uint32_t SceneHandler_Initialize_m210857971_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m2291195048_RuntimeMethod_var;
extern const uint32_t SceneHandler_StartScene_m2771193795_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2807348802_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4238192346_RuntimeMethod_var;
extern const uint32_t SceneHandler__cctor_m2091422692_MetadataUsageId;
extern String_t* _stringLiteral3243520198;
extern const uint32_t TextTyper_Start_m3061546139_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t TextTyper_Type_m1528259530_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;



#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
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
#ifndef BACKGROUNDHANDLER_T4009190922_H
#define BACKGROUNDHANDLER_T4009190922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundHandler
struct  BackgroundHandler_t4009190922  : public RuntimeObject
{
public:

public:
};

struct BackgroundHandler_t4009190922_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite> BackgroundHandler::backgroundsDictionary
	Dictionary_2_t1240555205 * ___backgroundsDictionary_0;
	// System.Boolean BackgroundHandler::initialized
	bool ___initialized_1;
	// UnityEngine.SpriteRenderer BackgroundHandler::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_2;

public:
	inline static int32_t get_offset_of_backgroundsDictionary_0() { return static_cast<int32_t>(offsetof(BackgroundHandler_t4009190922_StaticFields, ___backgroundsDictionary_0)); }
	inline Dictionary_2_t1240555205 * get_backgroundsDictionary_0() const { return ___backgroundsDictionary_0; }
	inline Dictionary_2_t1240555205 ** get_address_of_backgroundsDictionary_0() { return &___backgroundsDictionary_0; }
	inline void set_backgroundsDictionary_0(Dictionary_2_t1240555205 * value)
	{
		___backgroundsDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___backgroundsDictionary_0), value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(BackgroundHandler_t4009190922_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_2() { return static_cast<int32_t>(offsetof(BackgroundHandler_t4009190922_StaticFields, ___spriteRenderer_2)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_2() const { return ___spriteRenderer_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_2() { return &___spriteRenderer_2; }
	inline void set_spriteRenderer_2(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDHANDLER_T4009190922_H
#ifndef DICTIONARY_2_T1240555205_H
#define DICTIONARY_2_T1240555205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite>
struct  Dictionary_2_t1240555205  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ScenesU5BU5D_t2456431154* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	SpriteU5BU5D_t2581906349* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___keySlots_6)); }
	inline ScenesU5BU5D_t2456431154* get_keySlots_6() const { return ___keySlots_6; }
	inline ScenesU5BU5D_t2456431154** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ScenesU5BU5D_t2456431154* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___valueSlots_7)); }
	inline SpriteU5BU5D_t2581906349* get_valueSlots_7() const { return ___valueSlots_7; }
	inline SpriteU5BU5D_t2581906349** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(SpriteU5BU5D_t2581906349* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1240555205_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3590934723 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1240555205_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3590934723 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3590934723 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3590934723 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1240555205_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef DICTIONARY_2_T3925917911_H
#define DICTIONARY_2_T3925917911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip>
struct  Dictionary_2_t3925917911  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	SoundsU5BU5D_t1741561287* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AudioClipU5BU5D_t143221404* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___keySlots_6)); }
	inline SoundsU5BU5D_t1741561287* get_keySlots_6() const { return ___keySlots_6; }
	inline SoundsU5BU5D_t1741561287** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(SoundsU5BU5D_t1741561287* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___valueSlots_7)); }
	inline AudioClipU5BU5D_t143221404* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AudioClipU5BU5D_t143221404* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3925917911_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1020631593 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3925917911_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1020631593 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1020631593 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1020631593 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3925917911_H
#ifndef EVENTMANAGER_T1594656820_H
#define EVENTMANAGER_T1594656820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1594656820  : public RuntimeObject
{
public:

public:
};

struct EventManager_t1594656820_StaticFields
{
public:
	// System.Collections.Generic.List`1<Obstacle> EventManager::hitObstacleInvokers
	List_1_t1634586365 * ___hitObstacleInvokers_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>> EventManager::hitObstacleListeners
	List_1_t1484257051 * ___hitObstacleListeners_1;

public:
	inline static int32_t get_offset_of_hitObstacleInvokers_0() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hitObstacleInvokers_0)); }
	inline List_1_t1634586365 * get_hitObstacleInvokers_0() const { return ___hitObstacleInvokers_0; }
	inline List_1_t1634586365 ** get_address_of_hitObstacleInvokers_0() { return &___hitObstacleInvokers_0; }
	inline void set_hitObstacleInvokers_0(List_1_t1634586365 * value)
	{
		___hitObstacleInvokers_0 = value;
		Il2CppCodeGenWriteBarrier((&___hitObstacleInvokers_0), value);
	}

	inline static int32_t get_offset_of_hitObstacleListeners_1() { return static_cast<int32_t>(offsetof(EventManager_t1594656820_StaticFields, ___hitObstacleListeners_1)); }
	inline List_1_t1484257051 * get_hitObstacleListeners_1() const { return ___hitObstacleListeners_1; }
	inline List_1_t1484257051 ** get_address_of_hitObstacleListeners_1() { return &___hitObstacleListeners_1; }
	inline void set_hitObstacleListeners_1(List_1_t1484257051 * value)
	{
		___hitObstacleListeners_1 = value;
		Il2CppCodeGenWriteBarrier((&___hitObstacleListeners_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTMANAGER_T1594656820_H
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
#ifndef GAMEVARIABLES_T3794197391_H
#define GAMEVARIABLES_T3794197391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameVariables
struct  GameVariables_t3794197391  : public RuntimeObject
{
public:

public:
};

struct GameVariables_t3794197391_StaticFields
{
public:
	// System.Int32 GameVariables::points
	int32_t ___points_0;
	// System.Int32 GameVariables::health
	int32_t ___health_1;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(GameVariables_t3794197391_StaticFields, ___points_0)); }
	inline int32_t get_points_0() const { return ___points_0; }
	inline int32_t* get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(int32_t value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_health_1() { return static_cast<int32_t>(offsetof(GameVariables_t3794197391_StaticFields, ___health_1)); }
	inline int32_t get_health_1() const { return ___health_1; }
	inline int32_t* get_address_of_health_1() { return &___health_1; }
	inline void set_health_1(int32_t value)
	{
		___health_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEVARIABLES_T3794197391_H
#ifndef AUDIOHANDLER_T3272622511_H
#define AUDIOHANDLER_T3272622511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioHandler
struct  AudioHandler_t3272622511  : public RuntimeObject
{
public:

public:
};

struct AudioHandler_t3272622511_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip> AudioHandler::soundDictionary
	Dictionary_2_t3925917911 * ___soundDictionary_0;
	// System.Boolean AudioHandler::initialized
	bool ___initialized_1;
	// UnityEngine.AudioSource AudioHandler::audioSource
	AudioSource_t3935305588 * ___audioSource_2;

public:
	inline static int32_t get_offset_of_soundDictionary_0() { return static_cast<int32_t>(offsetof(AudioHandler_t3272622511_StaticFields, ___soundDictionary_0)); }
	inline Dictionary_2_t3925917911 * get_soundDictionary_0() const { return ___soundDictionary_0; }
	inline Dictionary_2_t3925917911 ** get_address_of_soundDictionary_0() { return &___soundDictionary_0; }
	inline void set_soundDictionary_0(Dictionary_2_t3925917911 * value)
	{
		___soundDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___soundDictionary_0), value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(AudioHandler_t3272622511_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(AudioHandler_t3272622511_StaticFields, ___audioSource_2)); }
	inline AudioSource_t3935305588 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3935305588 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOHANDLER_T3272622511_H
#ifndef LIST_1_T1484257051_H
#define LIST_1_T1484257051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>
struct  List_1_t1484257051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityAction_1U5BU5D_t518306472* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1484257051, ____items_1)); }
	inline UnityAction_1U5BU5D_t518306472* get__items_1() const { return ____items_1; }
	inline UnityAction_1U5BU5D_t518306472** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityAction_1U5BU5D_t518306472* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1484257051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1484257051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1484257051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityAction_1U5BU5D_t518306472* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1484257051_StaticFields, ___EmptyArray_4)); }
	inline UnityAction_1U5BU5D_t518306472* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityAction_1U5BU5D_t518306472** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityAction_1U5BU5D_t518306472* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1484257051_H
#ifndef DICTIONARY_2_T2807348802_H
#define DICTIONARY_2_T2807348802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Scenes,System.String>
struct  Dictionary_2_t2807348802  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ScenesU5BU5D_t2456431154* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___keySlots_6)); }
	inline ScenesU5BU5D_t2456431154* get_keySlots_6() const { return ___keySlots_6; }
	inline ScenesU5BU5D_t2456431154** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ScenesU5BU5D_t2456431154* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2807348802_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2290817714 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2807348802_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2290817714 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2290817714 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2290817714 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2807348802_H
#ifndef SCREENUTILS_T317983799_H
#define SCREENUTILS_T317983799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenUtils
struct  ScreenUtils_t317983799  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENUTILS_T317983799_H
#ifndef LIST_1_T1634586365_H
#define LIST_1_T1634586365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Obstacle>
struct  List_1_t1634586365  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObstacleU5BU5D_t3867503870* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1634586365, ____items_1)); }
	inline ObstacleU5BU5D_t3867503870* get__items_1() const { return ____items_1; }
	inline ObstacleU5BU5D_t3867503870** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObstacleU5BU5D_t3867503870* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1634586365, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1634586365, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1634586365_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObstacleU5BU5D_t3867503870* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1634586365_StaticFields, ___EmptyArray_4)); }
	inline ObstacleU5BU5D_t3867503870* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObstacleU5BU5D_t3867503870** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObstacleU5BU5D_t3867503870* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1634586365_H
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
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef GAMECONSTANTS_T2982185823_H
#define GAMECONSTANTS_T2982185823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConstants
struct  GameConstants_t2982185823  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONSTANTS_T2982185823_H
#ifndef ENUMERATOR_T3523830242_H
#define ENUMERATOR_T3523830242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Obstacle>
struct  Enumerator_t3523830242 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1634586365 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Obstacle_t162511623 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3523830242, ___l_0)); }
	inline List_1_t1634586365 * get_l_0() const { return ___l_0; }
	inline List_1_t1634586365 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1634586365 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3523830242, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3523830242, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3523830242, ___current_3)); }
	inline Obstacle_t162511623 * get_current_3() const { return ___current_3; }
	inline Obstacle_t162511623 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Obstacle_t162511623 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3523830242_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef UNITYEVENT_1_T309005672_H
#define UNITYEVENT_1_T309005672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct  UnityEvent_1_t309005672  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t309005672, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T309005672_H
#ifndef ENUMERATOR_T3373500928_H
#define ENUMERATOR_T3373500928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>
struct  Enumerator_t3373500928 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1484257051 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityAction_1_t12182309 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3373500928, ___l_0)); }
	inline List_1_t1484257051 * get_l_0() const { return ___l_0; }
	inline List_1_t1484257051 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1484257051 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3373500928, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3373500928, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3373500928, ___current_3)); }
	inline UnityAction_1_t12182309 * get_current_3() const { return ___current_3; }
	inline UnityAction_1_t12182309 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityAction_1_t12182309 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3373500928_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef SOUNDS_T3004079410_H
#define SOUNDS_T3004079410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sounds
struct  Sounds_t3004079410 
{
public:
	// System.Int32 Sounds::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sounds_t3004079410, ___value___1)); }
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
#endif // SOUNDS_T3004079410_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef HITOBSTACLE_T2463768999_H
#define HITOBSTACLE_T2463768999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HitObstacle
struct  HitObstacle_t2463768999  : public UnityEvent_1_t309005672
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITOBSTACLE_T2463768999_H
#ifndef SCENES_T3707889379_H
#define SCENES_T3707889379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scenes
struct  Scenes_t3707889379 
{
public:
	// System.Int32 Scenes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Scenes_t3707889379, ___value___1)); }
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
#endif // SCENES_T3707889379_H
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
#ifndef CONTACTPOINT2D_T3390240644_H
#define CONTACTPOINT2D_T3390240644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t3390240644 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t2156229523  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t2156229523  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Point_0)); }
	inline Vector2_t2156229523  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t2156229523 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t2156229523  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Normal_1)); }
	inline Vector2_t2156229523  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t2156229523  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_RelativeVelocity_2)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t3390240644, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T3390240644_H
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
#ifndef CACHEDCONTACTPOINTS2D_T2523437281_H
#define CACHEDCONTACTPOINTS2D_T2523437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CachedContactPoints2D
struct  CachedContactPoints2D_t2523437281 
{
public:
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact0
	ContactPoint2D_t3390240644  ___m_Contact0_0;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact1
	ContactPoint2D_t3390240644  ___m_Contact1_1;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact2
	ContactPoint2D_t3390240644  ___m_Contact2_2;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact3
	ContactPoint2D_t3390240644  ___m_Contact3_3;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact4
	ContactPoint2D_t3390240644  ___m_Contact4_4;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact5
	ContactPoint2D_t3390240644  ___m_Contact5_5;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact6
	ContactPoint2D_t3390240644  ___m_Contact6_6;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact7
	ContactPoint2D_t3390240644  ___m_Contact7_7;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact8
	ContactPoint2D_t3390240644  ___m_Contact8_8;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact9
	ContactPoint2D_t3390240644  ___m_Contact9_9;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact10
	ContactPoint2D_t3390240644  ___m_Contact10_10;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact11
	ContactPoint2D_t3390240644  ___m_Contact11_11;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact12
	ContactPoint2D_t3390240644  ___m_Contact12_12;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact13
	ContactPoint2D_t3390240644  ___m_Contact13_13;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact14
	ContactPoint2D_t3390240644  ___m_Contact14_14;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact15
	ContactPoint2D_t3390240644  ___m_Contact15_15;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact16
	ContactPoint2D_t3390240644  ___m_Contact16_16;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact17
	ContactPoint2D_t3390240644  ___m_Contact17_17;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact18
	ContactPoint2D_t3390240644  ___m_Contact18_18;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact19
	ContactPoint2D_t3390240644  ___m_Contact19_19;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact20
	ContactPoint2D_t3390240644  ___m_Contact20_20;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact21
	ContactPoint2D_t3390240644  ___m_Contact21_21;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact22
	ContactPoint2D_t3390240644  ___m_Contact22_22;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact23
	ContactPoint2D_t3390240644  ___m_Contact23_23;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact24
	ContactPoint2D_t3390240644  ___m_Contact24_24;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact25
	ContactPoint2D_t3390240644  ___m_Contact25_25;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact26
	ContactPoint2D_t3390240644  ___m_Contact26_26;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact27
	ContactPoint2D_t3390240644  ___m_Contact27_27;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact28
	ContactPoint2D_t3390240644  ___m_Contact28_28;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact29
	ContactPoint2D_t3390240644  ___m_Contact29_29;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact30
	ContactPoint2D_t3390240644  ___m_Contact30_30;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact31
	ContactPoint2D_t3390240644  ___m_Contact31_31;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact32
	ContactPoint2D_t3390240644  ___m_Contact32_32;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact33
	ContactPoint2D_t3390240644  ___m_Contact33_33;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact34
	ContactPoint2D_t3390240644  ___m_Contact34_34;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact35
	ContactPoint2D_t3390240644  ___m_Contact35_35;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact36
	ContactPoint2D_t3390240644  ___m_Contact36_36;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact37
	ContactPoint2D_t3390240644  ___m_Contact37_37;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact38
	ContactPoint2D_t3390240644  ___m_Contact38_38;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact39
	ContactPoint2D_t3390240644  ___m_Contact39_39;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact40
	ContactPoint2D_t3390240644  ___m_Contact40_40;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact41
	ContactPoint2D_t3390240644  ___m_Contact41_41;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact42
	ContactPoint2D_t3390240644  ___m_Contact42_42;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact43
	ContactPoint2D_t3390240644  ___m_Contact43_43;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact44
	ContactPoint2D_t3390240644  ___m_Contact44_44;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact45
	ContactPoint2D_t3390240644  ___m_Contact45_45;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact46
	ContactPoint2D_t3390240644  ___m_Contact46_46;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact47
	ContactPoint2D_t3390240644  ___m_Contact47_47;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact48
	ContactPoint2D_t3390240644  ___m_Contact48_48;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact49
	ContactPoint2D_t3390240644  ___m_Contact49_49;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact50
	ContactPoint2D_t3390240644  ___m_Contact50_50;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact51
	ContactPoint2D_t3390240644  ___m_Contact51_51;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact52
	ContactPoint2D_t3390240644  ___m_Contact52_52;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact53
	ContactPoint2D_t3390240644  ___m_Contact53_53;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact54
	ContactPoint2D_t3390240644  ___m_Contact54_54;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact55
	ContactPoint2D_t3390240644  ___m_Contact55_55;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact56
	ContactPoint2D_t3390240644  ___m_Contact56_56;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact57
	ContactPoint2D_t3390240644  ___m_Contact57_57;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact58
	ContactPoint2D_t3390240644  ___m_Contact58_58;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact59
	ContactPoint2D_t3390240644  ___m_Contact59_59;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact60
	ContactPoint2D_t3390240644  ___m_Contact60_60;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact61
	ContactPoint2D_t3390240644  ___m_Contact61_61;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact62
	ContactPoint2D_t3390240644  ___m_Contact62_62;
	// UnityEngine.ContactPoint2D UnityEngine.CachedContactPoints2D::m_Contact63
	ContactPoint2D_t3390240644  ___m_Contact63_63;

public:
	inline static int32_t get_offset_of_m_Contact0_0() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact0_0)); }
	inline ContactPoint2D_t3390240644  get_m_Contact0_0() const { return ___m_Contact0_0; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact0_0() { return &___m_Contact0_0; }
	inline void set_m_Contact0_0(ContactPoint2D_t3390240644  value)
	{
		___m_Contact0_0 = value;
	}

	inline static int32_t get_offset_of_m_Contact1_1() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact1_1)); }
	inline ContactPoint2D_t3390240644  get_m_Contact1_1() const { return ___m_Contact1_1; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact1_1() { return &___m_Contact1_1; }
	inline void set_m_Contact1_1(ContactPoint2D_t3390240644  value)
	{
		___m_Contact1_1 = value;
	}

	inline static int32_t get_offset_of_m_Contact2_2() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact2_2)); }
	inline ContactPoint2D_t3390240644  get_m_Contact2_2() const { return ___m_Contact2_2; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact2_2() { return &___m_Contact2_2; }
	inline void set_m_Contact2_2(ContactPoint2D_t3390240644  value)
	{
		___m_Contact2_2 = value;
	}

	inline static int32_t get_offset_of_m_Contact3_3() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact3_3)); }
	inline ContactPoint2D_t3390240644  get_m_Contact3_3() const { return ___m_Contact3_3; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact3_3() { return &___m_Contact3_3; }
	inline void set_m_Contact3_3(ContactPoint2D_t3390240644  value)
	{
		___m_Contact3_3 = value;
	}

	inline static int32_t get_offset_of_m_Contact4_4() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact4_4)); }
	inline ContactPoint2D_t3390240644  get_m_Contact4_4() const { return ___m_Contact4_4; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact4_4() { return &___m_Contact4_4; }
	inline void set_m_Contact4_4(ContactPoint2D_t3390240644  value)
	{
		___m_Contact4_4 = value;
	}

	inline static int32_t get_offset_of_m_Contact5_5() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact5_5)); }
	inline ContactPoint2D_t3390240644  get_m_Contact5_5() const { return ___m_Contact5_5; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact5_5() { return &___m_Contact5_5; }
	inline void set_m_Contact5_5(ContactPoint2D_t3390240644  value)
	{
		___m_Contact5_5 = value;
	}

	inline static int32_t get_offset_of_m_Contact6_6() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact6_6)); }
	inline ContactPoint2D_t3390240644  get_m_Contact6_6() const { return ___m_Contact6_6; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact6_6() { return &___m_Contact6_6; }
	inline void set_m_Contact6_6(ContactPoint2D_t3390240644  value)
	{
		___m_Contact6_6 = value;
	}

	inline static int32_t get_offset_of_m_Contact7_7() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact7_7)); }
	inline ContactPoint2D_t3390240644  get_m_Contact7_7() const { return ___m_Contact7_7; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact7_7() { return &___m_Contact7_7; }
	inline void set_m_Contact7_7(ContactPoint2D_t3390240644  value)
	{
		___m_Contact7_7 = value;
	}

	inline static int32_t get_offset_of_m_Contact8_8() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact8_8)); }
	inline ContactPoint2D_t3390240644  get_m_Contact8_8() const { return ___m_Contact8_8; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact8_8() { return &___m_Contact8_8; }
	inline void set_m_Contact8_8(ContactPoint2D_t3390240644  value)
	{
		___m_Contact8_8 = value;
	}

	inline static int32_t get_offset_of_m_Contact9_9() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact9_9)); }
	inline ContactPoint2D_t3390240644  get_m_Contact9_9() const { return ___m_Contact9_9; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact9_9() { return &___m_Contact9_9; }
	inline void set_m_Contact9_9(ContactPoint2D_t3390240644  value)
	{
		___m_Contact9_9 = value;
	}

	inline static int32_t get_offset_of_m_Contact10_10() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact10_10)); }
	inline ContactPoint2D_t3390240644  get_m_Contact10_10() const { return ___m_Contact10_10; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact10_10() { return &___m_Contact10_10; }
	inline void set_m_Contact10_10(ContactPoint2D_t3390240644  value)
	{
		___m_Contact10_10 = value;
	}

	inline static int32_t get_offset_of_m_Contact11_11() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact11_11)); }
	inline ContactPoint2D_t3390240644  get_m_Contact11_11() const { return ___m_Contact11_11; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact11_11() { return &___m_Contact11_11; }
	inline void set_m_Contact11_11(ContactPoint2D_t3390240644  value)
	{
		___m_Contact11_11 = value;
	}

	inline static int32_t get_offset_of_m_Contact12_12() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact12_12)); }
	inline ContactPoint2D_t3390240644  get_m_Contact12_12() const { return ___m_Contact12_12; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact12_12() { return &___m_Contact12_12; }
	inline void set_m_Contact12_12(ContactPoint2D_t3390240644  value)
	{
		___m_Contact12_12 = value;
	}

	inline static int32_t get_offset_of_m_Contact13_13() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact13_13)); }
	inline ContactPoint2D_t3390240644  get_m_Contact13_13() const { return ___m_Contact13_13; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact13_13() { return &___m_Contact13_13; }
	inline void set_m_Contact13_13(ContactPoint2D_t3390240644  value)
	{
		___m_Contact13_13 = value;
	}

	inline static int32_t get_offset_of_m_Contact14_14() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact14_14)); }
	inline ContactPoint2D_t3390240644  get_m_Contact14_14() const { return ___m_Contact14_14; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact14_14() { return &___m_Contact14_14; }
	inline void set_m_Contact14_14(ContactPoint2D_t3390240644  value)
	{
		___m_Contact14_14 = value;
	}

	inline static int32_t get_offset_of_m_Contact15_15() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact15_15)); }
	inline ContactPoint2D_t3390240644  get_m_Contact15_15() const { return ___m_Contact15_15; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact15_15() { return &___m_Contact15_15; }
	inline void set_m_Contact15_15(ContactPoint2D_t3390240644  value)
	{
		___m_Contact15_15 = value;
	}

	inline static int32_t get_offset_of_m_Contact16_16() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact16_16)); }
	inline ContactPoint2D_t3390240644  get_m_Contact16_16() const { return ___m_Contact16_16; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact16_16() { return &___m_Contact16_16; }
	inline void set_m_Contact16_16(ContactPoint2D_t3390240644  value)
	{
		___m_Contact16_16 = value;
	}

	inline static int32_t get_offset_of_m_Contact17_17() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact17_17)); }
	inline ContactPoint2D_t3390240644  get_m_Contact17_17() const { return ___m_Contact17_17; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact17_17() { return &___m_Contact17_17; }
	inline void set_m_Contact17_17(ContactPoint2D_t3390240644  value)
	{
		___m_Contact17_17 = value;
	}

	inline static int32_t get_offset_of_m_Contact18_18() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact18_18)); }
	inline ContactPoint2D_t3390240644  get_m_Contact18_18() const { return ___m_Contact18_18; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact18_18() { return &___m_Contact18_18; }
	inline void set_m_Contact18_18(ContactPoint2D_t3390240644  value)
	{
		___m_Contact18_18 = value;
	}

	inline static int32_t get_offset_of_m_Contact19_19() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact19_19)); }
	inline ContactPoint2D_t3390240644  get_m_Contact19_19() const { return ___m_Contact19_19; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact19_19() { return &___m_Contact19_19; }
	inline void set_m_Contact19_19(ContactPoint2D_t3390240644  value)
	{
		___m_Contact19_19 = value;
	}

	inline static int32_t get_offset_of_m_Contact20_20() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact20_20)); }
	inline ContactPoint2D_t3390240644  get_m_Contact20_20() const { return ___m_Contact20_20; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact20_20() { return &___m_Contact20_20; }
	inline void set_m_Contact20_20(ContactPoint2D_t3390240644  value)
	{
		___m_Contact20_20 = value;
	}

	inline static int32_t get_offset_of_m_Contact21_21() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact21_21)); }
	inline ContactPoint2D_t3390240644  get_m_Contact21_21() const { return ___m_Contact21_21; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact21_21() { return &___m_Contact21_21; }
	inline void set_m_Contact21_21(ContactPoint2D_t3390240644  value)
	{
		___m_Contact21_21 = value;
	}

	inline static int32_t get_offset_of_m_Contact22_22() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact22_22)); }
	inline ContactPoint2D_t3390240644  get_m_Contact22_22() const { return ___m_Contact22_22; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact22_22() { return &___m_Contact22_22; }
	inline void set_m_Contact22_22(ContactPoint2D_t3390240644  value)
	{
		___m_Contact22_22 = value;
	}

	inline static int32_t get_offset_of_m_Contact23_23() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact23_23)); }
	inline ContactPoint2D_t3390240644  get_m_Contact23_23() const { return ___m_Contact23_23; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact23_23() { return &___m_Contact23_23; }
	inline void set_m_Contact23_23(ContactPoint2D_t3390240644  value)
	{
		___m_Contact23_23 = value;
	}

	inline static int32_t get_offset_of_m_Contact24_24() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact24_24)); }
	inline ContactPoint2D_t3390240644  get_m_Contact24_24() const { return ___m_Contact24_24; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact24_24() { return &___m_Contact24_24; }
	inline void set_m_Contact24_24(ContactPoint2D_t3390240644  value)
	{
		___m_Contact24_24 = value;
	}

	inline static int32_t get_offset_of_m_Contact25_25() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact25_25)); }
	inline ContactPoint2D_t3390240644  get_m_Contact25_25() const { return ___m_Contact25_25; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact25_25() { return &___m_Contact25_25; }
	inline void set_m_Contact25_25(ContactPoint2D_t3390240644  value)
	{
		___m_Contact25_25 = value;
	}

	inline static int32_t get_offset_of_m_Contact26_26() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact26_26)); }
	inline ContactPoint2D_t3390240644  get_m_Contact26_26() const { return ___m_Contact26_26; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact26_26() { return &___m_Contact26_26; }
	inline void set_m_Contact26_26(ContactPoint2D_t3390240644  value)
	{
		___m_Contact26_26 = value;
	}

	inline static int32_t get_offset_of_m_Contact27_27() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact27_27)); }
	inline ContactPoint2D_t3390240644  get_m_Contact27_27() const { return ___m_Contact27_27; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact27_27() { return &___m_Contact27_27; }
	inline void set_m_Contact27_27(ContactPoint2D_t3390240644  value)
	{
		___m_Contact27_27 = value;
	}

	inline static int32_t get_offset_of_m_Contact28_28() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact28_28)); }
	inline ContactPoint2D_t3390240644  get_m_Contact28_28() const { return ___m_Contact28_28; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact28_28() { return &___m_Contact28_28; }
	inline void set_m_Contact28_28(ContactPoint2D_t3390240644  value)
	{
		___m_Contact28_28 = value;
	}

	inline static int32_t get_offset_of_m_Contact29_29() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact29_29)); }
	inline ContactPoint2D_t3390240644  get_m_Contact29_29() const { return ___m_Contact29_29; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact29_29() { return &___m_Contact29_29; }
	inline void set_m_Contact29_29(ContactPoint2D_t3390240644  value)
	{
		___m_Contact29_29 = value;
	}

	inline static int32_t get_offset_of_m_Contact30_30() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact30_30)); }
	inline ContactPoint2D_t3390240644  get_m_Contact30_30() const { return ___m_Contact30_30; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact30_30() { return &___m_Contact30_30; }
	inline void set_m_Contact30_30(ContactPoint2D_t3390240644  value)
	{
		___m_Contact30_30 = value;
	}

	inline static int32_t get_offset_of_m_Contact31_31() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact31_31)); }
	inline ContactPoint2D_t3390240644  get_m_Contact31_31() const { return ___m_Contact31_31; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact31_31() { return &___m_Contact31_31; }
	inline void set_m_Contact31_31(ContactPoint2D_t3390240644  value)
	{
		___m_Contact31_31 = value;
	}

	inline static int32_t get_offset_of_m_Contact32_32() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact32_32)); }
	inline ContactPoint2D_t3390240644  get_m_Contact32_32() const { return ___m_Contact32_32; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact32_32() { return &___m_Contact32_32; }
	inline void set_m_Contact32_32(ContactPoint2D_t3390240644  value)
	{
		___m_Contact32_32 = value;
	}

	inline static int32_t get_offset_of_m_Contact33_33() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact33_33)); }
	inline ContactPoint2D_t3390240644  get_m_Contact33_33() const { return ___m_Contact33_33; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact33_33() { return &___m_Contact33_33; }
	inline void set_m_Contact33_33(ContactPoint2D_t3390240644  value)
	{
		___m_Contact33_33 = value;
	}

	inline static int32_t get_offset_of_m_Contact34_34() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact34_34)); }
	inline ContactPoint2D_t3390240644  get_m_Contact34_34() const { return ___m_Contact34_34; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact34_34() { return &___m_Contact34_34; }
	inline void set_m_Contact34_34(ContactPoint2D_t3390240644  value)
	{
		___m_Contact34_34 = value;
	}

	inline static int32_t get_offset_of_m_Contact35_35() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact35_35)); }
	inline ContactPoint2D_t3390240644  get_m_Contact35_35() const { return ___m_Contact35_35; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact35_35() { return &___m_Contact35_35; }
	inline void set_m_Contact35_35(ContactPoint2D_t3390240644  value)
	{
		___m_Contact35_35 = value;
	}

	inline static int32_t get_offset_of_m_Contact36_36() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact36_36)); }
	inline ContactPoint2D_t3390240644  get_m_Contact36_36() const { return ___m_Contact36_36; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact36_36() { return &___m_Contact36_36; }
	inline void set_m_Contact36_36(ContactPoint2D_t3390240644  value)
	{
		___m_Contact36_36 = value;
	}

	inline static int32_t get_offset_of_m_Contact37_37() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact37_37)); }
	inline ContactPoint2D_t3390240644  get_m_Contact37_37() const { return ___m_Contact37_37; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact37_37() { return &___m_Contact37_37; }
	inline void set_m_Contact37_37(ContactPoint2D_t3390240644  value)
	{
		___m_Contact37_37 = value;
	}

	inline static int32_t get_offset_of_m_Contact38_38() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact38_38)); }
	inline ContactPoint2D_t3390240644  get_m_Contact38_38() const { return ___m_Contact38_38; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact38_38() { return &___m_Contact38_38; }
	inline void set_m_Contact38_38(ContactPoint2D_t3390240644  value)
	{
		___m_Contact38_38 = value;
	}

	inline static int32_t get_offset_of_m_Contact39_39() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact39_39)); }
	inline ContactPoint2D_t3390240644  get_m_Contact39_39() const { return ___m_Contact39_39; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact39_39() { return &___m_Contact39_39; }
	inline void set_m_Contact39_39(ContactPoint2D_t3390240644  value)
	{
		___m_Contact39_39 = value;
	}

	inline static int32_t get_offset_of_m_Contact40_40() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact40_40)); }
	inline ContactPoint2D_t3390240644  get_m_Contact40_40() const { return ___m_Contact40_40; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact40_40() { return &___m_Contact40_40; }
	inline void set_m_Contact40_40(ContactPoint2D_t3390240644  value)
	{
		___m_Contact40_40 = value;
	}

	inline static int32_t get_offset_of_m_Contact41_41() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact41_41)); }
	inline ContactPoint2D_t3390240644  get_m_Contact41_41() const { return ___m_Contact41_41; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact41_41() { return &___m_Contact41_41; }
	inline void set_m_Contact41_41(ContactPoint2D_t3390240644  value)
	{
		___m_Contact41_41 = value;
	}

	inline static int32_t get_offset_of_m_Contact42_42() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact42_42)); }
	inline ContactPoint2D_t3390240644  get_m_Contact42_42() const { return ___m_Contact42_42; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact42_42() { return &___m_Contact42_42; }
	inline void set_m_Contact42_42(ContactPoint2D_t3390240644  value)
	{
		___m_Contact42_42 = value;
	}

	inline static int32_t get_offset_of_m_Contact43_43() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact43_43)); }
	inline ContactPoint2D_t3390240644  get_m_Contact43_43() const { return ___m_Contact43_43; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact43_43() { return &___m_Contact43_43; }
	inline void set_m_Contact43_43(ContactPoint2D_t3390240644  value)
	{
		___m_Contact43_43 = value;
	}

	inline static int32_t get_offset_of_m_Contact44_44() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact44_44)); }
	inline ContactPoint2D_t3390240644  get_m_Contact44_44() const { return ___m_Contact44_44; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact44_44() { return &___m_Contact44_44; }
	inline void set_m_Contact44_44(ContactPoint2D_t3390240644  value)
	{
		___m_Contact44_44 = value;
	}

	inline static int32_t get_offset_of_m_Contact45_45() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact45_45)); }
	inline ContactPoint2D_t3390240644  get_m_Contact45_45() const { return ___m_Contact45_45; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact45_45() { return &___m_Contact45_45; }
	inline void set_m_Contact45_45(ContactPoint2D_t3390240644  value)
	{
		___m_Contact45_45 = value;
	}

	inline static int32_t get_offset_of_m_Contact46_46() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact46_46)); }
	inline ContactPoint2D_t3390240644  get_m_Contact46_46() const { return ___m_Contact46_46; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact46_46() { return &___m_Contact46_46; }
	inline void set_m_Contact46_46(ContactPoint2D_t3390240644  value)
	{
		___m_Contact46_46 = value;
	}

	inline static int32_t get_offset_of_m_Contact47_47() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact47_47)); }
	inline ContactPoint2D_t3390240644  get_m_Contact47_47() const { return ___m_Contact47_47; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact47_47() { return &___m_Contact47_47; }
	inline void set_m_Contact47_47(ContactPoint2D_t3390240644  value)
	{
		___m_Contact47_47 = value;
	}

	inline static int32_t get_offset_of_m_Contact48_48() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact48_48)); }
	inline ContactPoint2D_t3390240644  get_m_Contact48_48() const { return ___m_Contact48_48; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact48_48() { return &___m_Contact48_48; }
	inline void set_m_Contact48_48(ContactPoint2D_t3390240644  value)
	{
		___m_Contact48_48 = value;
	}

	inline static int32_t get_offset_of_m_Contact49_49() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact49_49)); }
	inline ContactPoint2D_t3390240644  get_m_Contact49_49() const { return ___m_Contact49_49; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact49_49() { return &___m_Contact49_49; }
	inline void set_m_Contact49_49(ContactPoint2D_t3390240644  value)
	{
		___m_Contact49_49 = value;
	}

	inline static int32_t get_offset_of_m_Contact50_50() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact50_50)); }
	inline ContactPoint2D_t3390240644  get_m_Contact50_50() const { return ___m_Contact50_50; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact50_50() { return &___m_Contact50_50; }
	inline void set_m_Contact50_50(ContactPoint2D_t3390240644  value)
	{
		___m_Contact50_50 = value;
	}

	inline static int32_t get_offset_of_m_Contact51_51() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact51_51)); }
	inline ContactPoint2D_t3390240644  get_m_Contact51_51() const { return ___m_Contact51_51; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact51_51() { return &___m_Contact51_51; }
	inline void set_m_Contact51_51(ContactPoint2D_t3390240644  value)
	{
		___m_Contact51_51 = value;
	}

	inline static int32_t get_offset_of_m_Contact52_52() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact52_52)); }
	inline ContactPoint2D_t3390240644  get_m_Contact52_52() const { return ___m_Contact52_52; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact52_52() { return &___m_Contact52_52; }
	inline void set_m_Contact52_52(ContactPoint2D_t3390240644  value)
	{
		___m_Contact52_52 = value;
	}

	inline static int32_t get_offset_of_m_Contact53_53() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact53_53)); }
	inline ContactPoint2D_t3390240644  get_m_Contact53_53() const { return ___m_Contact53_53; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact53_53() { return &___m_Contact53_53; }
	inline void set_m_Contact53_53(ContactPoint2D_t3390240644  value)
	{
		___m_Contact53_53 = value;
	}

	inline static int32_t get_offset_of_m_Contact54_54() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact54_54)); }
	inline ContactPoint2D_t3390240644  get_m_Contact54_54() const { return ___m_Contact54_54; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact54_54() { return &___m_Contact54_54; }
	inline void set_m_Contact54_54(ContactPoint2D_t3390240644  value)
	{
		___m_Contact54_54 = value;
	}

	inline static int32_t get_offset_of_m_Contact55_55() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact55_55)); }
	inline ContactPoint2D_t3390240644  get_m_Contact55_55() const { return ___m_Contact55_55; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact55_55() { return &___m_Contact55_55; }
	inline void set_m_Contact55_55(ContactPoint2D_t3390240644  value)
	{
		___m_Contact55_55 = value;
	}

	inline static int32_t get_offset_of_m_Contact56_56() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact56_56)); }
	inline ContactPoint2D_t3390240644  get_m_Contact56_56() const { return ___m_Contact56_56; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact56_56() { return &___m_Contact56_56; }
	inline void set_m_Contact56_56(ContactPoint2D_t3390240644  value)
	{
		___m_Contact56_56 = value;
	}

	inline static int32_t get_offset_of_m_Contact57_57() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact57_57)); }
	inline ContactPoint2D_t3390240644  get_m_Contact57_57() const { return ___m_Contact57_57; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact57_57() { return &___m_Contact57_57; }
	inline void set_m_Contact57_57(ContactPoint2D_t3390240644  value)
	{
		___m_Contact57_57 = value;
	}

	inline static int32_t get_offset_of_m_Contact58_58() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact58_58)); }
	inline ContactPoint2D_t3390240644  get_m_Contact58_58() const { return ___m_Contact58_58; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact58_58() { return &___m_Contact58_58; }
	inline void set_m_Contact58_58(ContactPoint2D_t3390240644  value)
	{
		___m_Contact58_58 = value;
	}

	inline static int32_t get_offset_of_m_Contact59_59() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact59_59)); }
	inline ContactPoint2D_t3390240644  get_m_Contact59_59() const { return ___m_Contact59_59; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact59_59() { return &___m_Contact59_59; }
	inline void set_m_Contact59_59(ContactPoint2D_t3390240644  value)
	{
		___m_Contact59_59 = value;
	}

	inline static int32_t get_offset_of_m_Contact60_60() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact60_60)); }
	inline ContactPoint2D_t3390240644  get_m_Contact60_60() const { return ___m_Contact60_60; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact60_60() { return &___m_Contact60_60; }
	inline void set_m_Contact60_60(ContactPoint2D_t3390240644  value)
	{
		___m_Contact60_60 = value;
	}

	inline static int32_t get_offset_of_m_Contact61_61() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact61_61)); }
	inline ContactPoint2D_t3390240644  get_m_Contact61_61() const { return ___m_Contact61_61; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact61_61() { return &___m_Contact61_61; }
	inline void set_m_Contact61_61(ContactPoint2D_t3390240644  value)
	{
		___m_Contact61_61 = value;
	}

	inline static int32_t get_offset_of_m_Contact62_62() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact62_62)); }
	inline ContactPoint2D_t3390240644  get_m_Contact62_62() const { return ___m_Contact62_62; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact62_62() { return &___m_Contact62_62; }
	inline void set_m_Contact62_62(ContactPoint2D_t3390240644  value)
	{
		___m_Contact62_62 = value;
	}

	inline static int32_t get_offset_of_m_Contact63_63() { return static_cast<int32_t>(offsetof(CachedContactPoints2D_t2523437281, ___m_Contact63_63)); }
	inline ContactPoint2D_t3390240644  get_m_Contact63_63() const { return ___m_Contact63_63; }
	inline ContactPoint2D_t3390240644 * get_address_of_m_Contact63_63() { return &___m_Contact63_63; }
	inline void set_m_Contact63_63(ContactPoint2D_t3390240644  value)
	{
		___m_Contact63_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCONTACTPOINTS2D_T2523437281_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SCENEHANDLER_T392543793_H
#define SCENEHANDLER_T392543793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneHandler
struct  SceneHandler_t392543793  : public RuntimeObject
{
public:

public:
};

struct SceneHandler_t392543793_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Scenes,System.String> SceneHandler::sceneDictionary
	Dictionary_2_t2807348802 * ___sceneDictionary_0;
	// System.Boolean SceneHandler::initialized
	bool ___initialized_1;
	// Scenes SceneHandler::currentScene
	int32_t ___currentScene_2;

public:
	inline static int32_t get_offset_of_sceneDictionary_0() { return static_cast<int32_t>(offsetof(SceneHandler_t392543793_StaticFields, ___sceneDictionary_0)); }
	inline Dictionary_2_t2807348802 * get_sceneDictionary_0() const { return ___sceneDictionary_0; }
	inline Dictionary_2_t2807348802 ** get_address_of_sceneDictionary_0() { return &___sceneDictionary_0; }
	inline void set_sceneDictionary_0(Dictionary_2_t2807348802 * value)
	{
		___sceneDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneDictionary_0), value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(SceneHandler_t392543793_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_currentScene_2() { return static_cast<int32_t>(offsetof(SceneHandler_t392543793_StaticFields, ___currentScene_2)); }
	inline int32_t get_currentScene_2() const { return ___currentScene_2; }
	inline int32_t* get_address_of_currentScene_2() { return &___currentScene_2; }
	inline void set_currentScene_2(int32_t value)
	{
		___currentScene_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEHANDLER_T392543793_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef UNITYACTION_1_T12182309_H
#define UNITYACTION_1_T12182309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct  UnityAction_1_t12182309  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T12182309_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.CachedContactPoints2D UnityEngine.Collision2D::m_CachedContactPoints
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContactArray
	ContactPoint2DU5BU5D_t96683501* ___m_LegacyContactArray_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_4)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_CachedContactPoints_7() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_CachedContactPoints_7)); }
	inline CachedContactPoints2D_t2523437281  get_m_CachedContactPoints_7() const { return ___m_CachedContactPoints_7; }
	inline CachedContactPoints2D_t2523437281 * get_address_of_m_CachedContactPoints_7() { return &___m_CachedContactPoints_7; }
	inline void set_m_CachedContactPoints_7(CachedContactPoints2D_t2523437281  value)
	{
		___m_CachedContactPoints_7 = value;
	}

	inline static int32_t get_offset_of_m_LegacyContactArray_8() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_LegacyContactArray_8)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_LegacyContactArray_8() const { return ___m_LegacyContactArray_8; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_LegacyContactArray_8() { return &___m_LegacyContactArray_8; }
	inline void set_m_LegacyContactArray_8(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_LegacyContactArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_LegacyContactArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t2156229523  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	CachedContactPoints2D_t2523437281  ___m_CachedContactPoints_7;
	ContactPoint2D_t3390240644 * ___m_LegacyContactArray_8;
};
#endif // COLLISION2D_T2842956331_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef OBSTACLE_T162511623_H
#define OBSTACLE_T162511623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t162511623  : public MonoBehaviour_t3962482529
{
public:
	// HitObstacle Obstacle::hitObstacleEvent
	HitObstacle_t2463768999 * ___hitObstacleEvent_2;

public:
	inline static int32_t get_offset_of_hitObstacleEvent_2() { return static_cast<int32_t>(offsetof(Obstacle_t162511623, ___hitObstacleEvent_2)); }
	inline HitObstacle_t2463768999 * get_hitObstacleEvent_2() const { return ___hitObstacleEvent_2; }
	inline HitObstacle_t2463768999 ** get_address_of_hitObstacleEvent_2() { return &___hitObstacleEvent_2; }
	inline void set_hitObstacleEvent_2(HitObstacle_t2463768999 * value)
	{
		___hitObstacleEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___hitObstacleEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLE_T162511623_H
#ifndef CAM_T2348450784_H
#define CAM_T2348450784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cam
struct  Cam_t2348450784  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 Cam::cameraUpdatePosition
	Vector3_t3722313464  ___cameraUpdatePosition_2;

public:
	inline static int32_t get_offset_of_cameraUpdatePosition_2() { return static_cast<int32_t>(offsetof(Cam_t2348450784, ___cameraUpdatePosition_2)); }
	inline Vector3_t3722313464  get_cameraUpdatePosition_2() const { return ___cameraUpdatePosition_2; }
	inline Vector3_t3722313464 * get_address_of_cameraUpdatePosition_2() { return &___cameraUpdatePosition_2; }
	inline void set_cameraUpdatePosition_2(Vector3_t3722313464  value)
	{
		___cameraUpdatePosition_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAM_T2348450784_H
#ifndef GAMEHUD_T3716131516_H
#define GAMEHUD_T3716131516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameHUD
struct  GameHUD_t3716131516  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text GameHUD::pointsDisplay
	Text_t1901882714 * ___pointsDisplay_2;
	// UnityEngine.UI.Text GameHUD::healthDisplay
	Text_t1901882714 * ___healthDisplay_3;

public:
	inline static int32_t get_offset_of_pointsDisplay_2() { return static_cast<int32_t>(offsetof(GameHUD_t3716131516, ___pointsDisplay_2)); }
	inline Text_t1901882714 * get_pointsDisplay_2() const { return ___pointsDisplay_2; }
	inline Text_t1901882714 ** get_address_of_pointsDisplay_2() { return &___pointsDisplay_2; }
	inline void set_pointsDisplay_2(Text_t1901882714 * value)
	{
		___pointsDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&___pointsDisplay_2), value);
	}

	inline static int32_t get_offset_of_healthDisplay_3() { return static_cast<int32_t>(offsetof(GameHUD_t3716131516, ___healthDisplay_3)); }
	inline Text_t1901882714 * get_healthDisplay_3() const { return ___healthDisplay_3; }
	inline Text_t1901882714 ** get_address_of_healthDisplay_3() { return &___healthDisplay_3; }
	inline void set_healthDisplay_3(Text_t1901882714 * value)
	{
		___healthDisplay_3 = value;
		Il2CppCodeGenWriteBarrier((&___healthDisplay_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEHUD_T3716131516_H
#ifndef AUDIOCALLER_T1775945674_H
#define AUDIOCALLER_T1775945674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioCaller
struct  AudioCaller_t1775945674  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource AudioCaller::audioSource
	AudioSource_t3935305588 * ___audioSource_2;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(AudioCaller_t1775945674, ___audioSource_2)); }
	inline AudioSource_t3935305588 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3935305588 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCALLER_T1775945674_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GAMESTART_T4096828885_H
#define GAMESTART_T4096828885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameStart
struct  GameStart_t4096828885  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTART_T4096828885_H
#ifndef MENUHUD_T3185551065_H
#define MENUHUD_T3185551065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuHUD
struct  MenuHUD_t3185551065  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUHUD_T3185551065_H
#ifndef TEXTTYPER_T680081595_H
#define TEXTTYPER_T680081595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextTyper
struct  TextTyper_t680081595  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text TextTyper::textContent
	Text_t1901882714 * ___textContent_2;
	// System.String TextTyper::message
	String_t* ___message_3;
	// System.Int32 TextTyper::charCount
	int32_t ___charCount_4;

public:
	inline static int32_t get_offset_of_textContent_2() { return static_cast<int32_t>(offsetof(TextTyper_t680081595, ___textContent_2)); }
	inline Text_t1901882714 * get_textContent_2() const { return ___textContent_2; }
	inline Text_t1901882714 ** get_address_of_textContent_2() { return &___textContent_2; }
	inline void set_textContent_2(Text_t1901882714 * value)
	{
		___textContent_2 = value;
		Il2CppCodeGenWriteBarrier((&___textContent_2), value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(TextTyper_t680081595, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((&___message_3), value);
	}

	inline static int32_t get_offset_of_charCount_4() { return static_cast<int32_t>(offsetof(TextTyper_t680081595, ___charCount_4)); }
	inline int32_t get_charCount_4() const { return ___charCount_4; }
	inline int32_t* get_address_of_charCount_4() { return &___charCount_4; }
	inline void set_charCount_4(int32_t value)
	{
		___charCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTTYPER_T680081595_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef OBSTACLESPAWNER_T854983466_H
#define OBSTACLESPAWNER_T854983466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleSpawner
struct  ObstacleSpawner_t854983466  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ObstacleSpawner::obstaclePrefab
	GameObject_t1113636619 * ___obstaclePrefab_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObstacleSpawner::spawnPositions
	List_1_t2585711361 * ___spawnPositions_3;
	// UnityEngine.Vector3 ObstacleSpawner::testSpawnPosition
	Vector3_t3722313464  ___testSpawnPosition_4;
	// UnityEngine.Vector3 ObstacleSpawner::spawnPosition
	Vector3_t3722313464  ___spawnPosition_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ObstacleSpawner::activePositions
	List_1_t899420910 * ___activePositions_6;

public:
	inline static int32_t get_offset_of_obstaclePrefab_2() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t854983466, ___obstaclePrefab_2)); }
	inline GameObject_t1113636619 * get_obstaclePrefab_2() const { return ___obstaclePrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_obstaclePrefab_2() { return &___obstaclePrefab_2; }
	inline void set_obstaclePrefab_2(GameObject_t1113636619 * value)
	{
		___obstaclePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___obstaclePrefab_2), value);
	}

	inline static int32_t get_offset_of_spawnPositions_3() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t854983466, ___spawnPositions_3)); }
	inline List_1_t2585711361 * get_spawnPositions_3() const { return ___spawnPositions_3; }
	inline List_1_t2585711361 ** get_address_of_spawnPositions_3() { return &___spawnPositions_3; }
	inline void set_spawnPositions_3(List_1_t2585711361 * value)
	{
		___spawnPositions_3 = value;
		Il2CppCodeGenWriteBarrier((&___spawnPositions_3), value);
	}

	inline static int32_t get_offset_of_testSpawnPosition_4() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t854983466, ___testSpawnPosition_4)); }
	inline Vector3_t3722313464  get_testSpawnPosition_4() const { return ___testSpawnPosition_4; }
	inline Vector3_t3722313464 * get_address_of_testSpawnPosition_4() { return &___testSpawnPosition_4; }
	inline void set_testSpawnPosition_4(Vector3_t3722313464  value)
	{
		___testSpawnPosition_4 = value;
	}

	inline static int32_t get_offset_of_spawnPosition_5() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t854983466, ___spawnPosition_5)); }
	inline Vector3_t3722313464  get_spawnPosition_5() const { return ___spawnPosition_5; }
	inline Vector3_t3722313464 * get_address_of_spawnPosition_5() { return &___spawnPosition_5; }
	inline void set_spawnPosition_5(Vector3_t3722313464  value)
	{
		___spawnPosition_5 = value;
	}

	inline static int32_t get_offset_of_activePositions_6() { return static_cast<int32_t>(offsetof(ObstacleSpawner_t854983466, ___activePositions_6)); }
	inline List_1_t899420910 * get_activePositions_6() const { return ___activePositions_6; }
	inline List_1_t899420910 ** get_address_of_activePositions_6() { return &___activePositions_6; }
	inline void set_activePositions_6(List_1_t899420910 * value)
	{
		___activePositions_6 = value;
		Il2CppCodeGenWriteBarrier((&___activePositions_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLESPAWNER_T854983466_H
#ifndef SCENECALLER_T2373517278_H
#define SCENECALLER_T2373517278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneCaller
struct  SceneCaller_t2373517278  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECALLER_T2373517278_H
#ifndef BACKGROUNDCALLER_T1077918380_H
#define BACKGROUNDCALLER_T1077918380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundCaller
struct  BackgroundCaller_t1077918380  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer BackgroundCaller::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_2;

public:
	inline static int32_t get_offset_of_spriteRenderer_2() { return static_cast<int32_t>(offsetof(BackgroundCaller_t1077918380, ___spriteRenderer_2)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_2() const { return ___spriteRenderer_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_2() { return &___spriteRenderer_2; }
	inline void set_spriteRenderer_2(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDCALLER_T1077918380_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.BoxCollider2D Player::bc2d
	BoxCollider2D_t3581341831 * ___bc2d_2;
	// UnityEngine.Rigidbody2D Player::rb2d
	Rigidbody2D_t939494601 * ___rb2d_3;
	// System.Single Player::playerHalfHeight
	float ___playerHalfHeight_4;
	// System.Single Player::playerHalfWidth
	float ___playerHalfWidth_5;

public:
	inline static int32_t get_offset_of_bc2d_2() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___bc2d_2)); }
	inline BoxCollider2D_t3581341831 * get_bc2d_2() const { return ___bc2d_2; }
	inline BoxCollider2D_t3581341831 ** get_address_of_bc2d_2() { return &___bc2d_2; }
	inline void set_bc2d_2(BoxCollider2D_t3581341831 * value)
	{
		___bc2d_2 = value;
		Il2CppCodeGenWriteBarrier((&___bc2d_2), value);
	}

	inline static int32_t get_offset_of_rb2d_3() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___rb2d_3)); }
	inline Rigidbody2D_t939494601 * get_rb2d_3() const { return ___rb2d_3; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2d_3() { return &___rb2d_3; }
	inline void set_rb2d_3(Rigidbody2D_t939494601 * value)
	{
		___rb2d_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_3), value);
	}

	inline static int32_t get_offset_of_playerHalfHeight_4() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___playerHalfHeight_4)); }
	inline float get_playerHalfHeight_4() const { return ___playerHalfHeight_4; }
	inline float* get_address_of_playerHalfHeight_4() { return &___playerHalfHeight_4; }
	inline void set_playerHalfHeight_4(float value)
	{
		___playerHalfHeight_4 = value;
	}

	inline static int32_t get_offset_of_playerHalfWidth_5() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___playerHalfWidth_5)); }
	inline float get_playerHalfWidth_5() const { return ___playerHalfWidth_5; }
	inline float* get_address_of_playerHalfWidth_5() { return &___playerHalfWidth_5; }
	inline void set_playerHalfWidth_5(float value)
	{
		___playerHalfWidth_5 = value;
	}
};

struct Player_t3266647312_StaticFields
{
public:
	// UnityEngine.Vector3 Player::playerPosition
	Vector3_t3722313464  ___playerPosition_6;

public:
	inline static int32_t get_offset_of_playerPosition_6() { return static_cast<int32_t>(offsetof(Player_t3266647312_StaticFields, ___playerPosition_6)); }
	inline Vector3_t3722313464  get_playerPosition_6() const { return ___playerPosition_6; }
	inline Vector3_t3722313464 * get_address_of_playerPosition_6() { return &___playerPosition_6; }
	inline void set_playerPosition_6(Vector3_t3722313464  value)
	{
		___playerPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m597869152_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Sounds,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3353138346_gshared (Dictionary_2_t3325134410 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Sounds,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2425150549_gshared (Dictionary_2_t3325134410 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Sounds,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m970371315_gshared (Dictionary_2_t3325134410 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Scenes,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2574740850_gshared (Dictionary_2_t4040004277 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Scenes,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2680441589_gshared (Dictionary_2_t4040004277 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Scenes,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3860436995_gshared (Dictionary_2_t4040004277 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3567252554_gshared (UnityEvent_1_t309005672 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(!0)
extern "C"  void UnityEvent_1_Invoke_m598483244_gshared (UnityEvent_1_t309005672 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3657375053_gshared (UnityEvent_1_t309005672 * __this, UnityAction_1_t12182309 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C"  void List_1__ctor_m1536473967_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m4251943150_gshared (UnityAction_1_t12182309 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(!0)
extern "C"  bool List_1_Contains_m3294296416_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m318281511_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(!0)
extern "C"  bool List_1_Remove_m3586184571_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioHandler::get_Initialized()
extern "C"  bool AudioHandler_get_Initialized_m3892574172 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AudioHandler::Initialize(UnityEngine.AudioSource)
extern "C"  void AudioHandler_Initialize_m61306179 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___givenAudioSource0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
#define Resources_Load_TisAudioClip_t3680889665_m1361768364(__this /* static, unused */, p0, method) ((  AudioClip_t3680889665 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip>::Add(!0,!1)
#define Dictionary_2_Add_m2205990300(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3925917911 *, int32_t, AudioClip_t3680889665 *, const RuntimeMethod*))Dictionary_2_Add_m3353138346_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip>::get_Item(!0)
#define Dictionary_2_get_Item_m31668732(__this, p0, method) ((  AudioClip_t3680889665 * (*) (Dictionary_2_t3925917911 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2425150549_gshared)(__this, p0, method)
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Sounds,UnityEngine.AudioClip>::.ctor()
#define Dictionary_2__ctor_m3770276227(__this, method) ((  void (*) (Dictionary_2_t3925917911 *, const RuntimeMethod*))Dictionary_2__ctor_m970371315_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean BackgroundHandler::get_Initialized()
extern "C"  bool BackgroundHandler_get_Initialized_m985607731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundHandler::Initialize(UnityEngine.SpriteRenderer)
extern "C"  void BackgroundHandler_Initialize_m3187152508 (RuntimeObject * __this /* static, unused */, SpriteRenderer_t3235626157 * ___givenSpriteRenderer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite>::Add(!0,!1)
#define Dictionary_2_Add_m417020380(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1240555205 *, int32_t, Sprite_t280657092 *, const RuntimeMethod*))Dictionary_2_Add_m2574740850_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t280657092_m4144667290(__this /* static, unused */, p0, method) ((  Sprite_t280657092 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method)
// Scenes SceneHandler::get_CurrentScene()
extern "C"  int32_t SceneHandler_get_CurrentScene_m3827173497 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite>::get_Item(!0)
#define Dictionary_2_get_Item_m2762516092(__this, p0, method) ((  Sprite_t280657092 * (*) (Dictionary_2_t1240555205 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2680441589_gshared)(__this, p0, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Scenes,UnityEngine.Sprite>::.ctor()
#define Dictionary_2__ctor_m3275839340(__this, method) ((  void (*) (Dictionary_2_t1240555205 *, const RuntimeMethod*))Dictionary_2__ctor_m3860436995_gshared)(__this, method)
// System.Void Cam::CamFollow()
extern "C"  void Cam_CamFollow_m2154401766 (Cam_t2348450784 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Player::get_PlayerPosition()
extern "C"  Vector3_t3722313464  Player_get_PlayerPosition_m1660955938 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Obstacle>::Add(!0)
#define List_1_Add_m3534108503(__this, p0, method) ((  void (*) (List_1_t1634586365 *, Obstacle_t162511623 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::GetEnumerator()
#define List_1_GetEnumerator_m3426409665(__this, method) ((  Enumerator_t3373500928  (*) (List_1_t1484257051 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::get_Current()
#define Enumerator_get_Current_m1695841294(__this, method) ((  UnityAction_1_t12182309 * (*) (Enumerator_t3373500928 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void Obstacle::AddHitObstacleListener(UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>)
extern "C"  void Obstacle_AddHitObstacleListener_m2606000965 (Obstacle_t162511623 * __this, UnityAction_1_t12182309 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::MoveNext()
#define Enumerator_MoveNext_m3479125306(__this, method) ((  bool (*) (Enumerator_t3373500928 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::Dispose()
#define Enumerator_Dispose_m2369319652(__this, method) ((  void (*) (Enumerator_t3373500928 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::Add(!0)
#define List_1_Add_m360537686(__this, p0, method) ((  void (*) (List_1_t1484257051 *, UnityAction_1_t12182309 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Obstacle>::GetEnumerator()
#define List_1_GetEnumerator_m3154063007(__this, method) ((  Enumerator_t3523830242  (*) (List_1_t1634586365 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Obstacle>::get_Current()
#define Enumerator_get_Current_m1010696607(__this, method) ((  Obstacle_t162511623 * (*) (Enumerator_t3523830242 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Obstacle>::MoveNext()
#define Enumerator_MoveNext_m2811346468(__this, method) ((  bool (*) (Enumerator_t3523830242 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Obstacle>::Dispose()
#define Enumerator_Dispose_m2354911885(__this, method) ((  void (*) (Enumerator_t3523830242 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Obstacle>::.ctor()
#define List_1__ctor_m2108557919(__this, method) ((  void (*) (List_1_t1634586365 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>>::.ctor()
#define List_1__ctor_m3418488446(__this, method) ((  void (*) (List_1_t1484257051 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Int32 GameVariables::get_Health()
extern "C"  int32_t GameVariables_get_Health_m4279416818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameVariables::get_Points()
extern "C"  int32_t GameVariables_get_Points_m3615572610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameVariables::set_Health(System.Int32)
extern "C"  void GameVariables_set_Health_m4167835135 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameVariables::set_Points(System.Int32)
extern "C"  void GameVariables_set_Points_m853646325 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
#define UnityEvent_1__ctor_m3567252554(__this, method) ((  void (*) (UnityEvent_1_t309005672 *, const RuntimeMethod*))UnityEvent_1__ctor_m3567252554_gshared)(__this, method)
// System.Void AudioHandler::PlaySound(Sounds)
extern "C"  void AudioHandler_PlaySound_m2903003174 (RuntimeObject * __this /* static, unused */, int32_t ___soundName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SceneHandler::StartScene(Scenes)
extern "C"  void SceneHandler_StartScene_m2771193795 (RuntimeObject * __this /* static, unused */, int32_t ___sceneName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HitObstacle::.ctor()
extern "C"  void HitObstacle__ctor_m1137735573 (HitObstacle_t2463768999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::AddHitObstacleInvoker(Obstacle)
extern "C"  void EventManager_AddHitObstacleInvoker_m2158668339 (RuntimeObject * __this /* static, unused */, Obstacle_t162511623 * ___invoker0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(!0)
#define UnityEvent_1_Invoke_m598483244(__this, p0, method) ((  void (*) (UnityEvent_1_t309005672 *, Vector3_t3722313464 , const RuntimeMethod*))UnityEvent_1_Invoke_m598483244_gshared)(__this, p0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m3657375053(__this, p0, method) ((  void (*) (UnityEvent_1_t309005672 *, UnityAction_1_t12182309 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3657375053_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
#define List_1__ctor_m1536473967(__this, method) ((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1__ctor_m1536473967_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m4251943150(__this, p0, p1, method) ((  void (*) (UnityAction_1_t12182309 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m4251943150_gshared)(__this, p0, p1, method)
// System.Void EventManager::AddHitObstacleListener(UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>)
extern "C"  void EventManager_AddHitObstacleListener_m11849621 (RuntimeObject * __this /* static, unused */, UnityAction_1_t12182309 * ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObstacleSpawner::GetSpawnPosition()
extern "C"  Vector3_t3722313464  ObstacleSpawner_GetSpawnPosition_m1222906663 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(!0)
#define List_1_Contains_m3294296416(__this, p0, method) ((  bool (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Contains_m3294296416_gshared)(__this, p0, method)
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1524640104(__this, p0, method) ((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m3061168155(__this, method) ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Capacity_m318281511_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(!0)
#define List_1_Remove_m3586184571(__this, p0, method) ((  bool (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Remove_m3586184571_gshared)(__this, p0, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
extern "C"  Vector2_t2156229523  BoxCollider2D_get_size_m3529128736 (BoxCollider2D_t3581341831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Movement()
extern "C"  void Player_Movement_m2401100194 (Player_t3266647312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_position_m2575647076 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Clamp()
extern "C"  void Player_Clamp_m1789074994 (Player_t3266647312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Loop()
extern "C"  void Player_Loop_m979010682 (Player_t3266647312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_MovePosition_m1934912072 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneHandler::get_Initialized()
extern "C"  bool SceneHandler_get_Initialized_m3718856300 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SceneHandler::Initialize()
extern "C"  void SceneHandler_Initialize_m210857971 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Scenes,System.String>::Add(!0,!1)
#define Dictionary_2_Add_m630417335(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2807348802 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2574740850_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<Scenes,System.String>::get_Item(!0)
#define Dictionary_2_get_Item_m2291195048(__this, p0, method) ((  String_t* (*) (Dictionary_2_t2807348802 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2680441589_gshared)(__this, p0, method)
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BackgroundHandler::UpdateBackground()
extern "C"  void BackgroundHandler_UpdateBackground_m956592049 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Scenes,System.String>::.ctor()
#define Dictionary_2__ctor_m4238192346(__this, method) ((  void (*) (Dictionary_2_t2807348802 *, const RuntimeMethod*))Dictionary_2__ctor_m3860436995_gshared)(__this, method)
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AudioCaller::.ctor()
extern "C"  void AudioCaller__ctor_m2871784771 (AudioCaller_t1775945674 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AudioCaller::Awake()
extern "C"  void AudioCaller_Awake_m324949411 (AudioCaller_t1775945674 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioCaller_Awake_m324949411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_audioSource_2(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		bool L_2 = AudioHandler_get_Initialized_m3892574172(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		AudioSource_t3935305588 * L_3 = __this->get_audioSource_2();
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_Initialize_m61306179(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0031:
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_003c:
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
// System.Boolean AudioHandler::get_Initialized()
extern "C"  bool AudioHandler_get_Initialized_m3892574172 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_get_Initialized_m3892574172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		bool L_0 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_initialized_1();
		return L_0;
	}
}
// System.Void AudioHandler::Initialize(UnityEngine.AudioSource)
extern "C"  void AudioHandler_Initialize_m61306179 (RuntimeObject * __this /* static, unused */, AudioSource_t3935305588 * ___givenAudioSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_Initialize_m61306179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = ___givenAudioSource0;
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->set_audioSource_2(L_0);
		Dictionary_2_t3925917911 * L_1 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_soundDictionary_0();
		AudioClip_t3680889665 * L_2 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral357871679, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		Dictionary_2_Add_m2205990300(L_1, 0, L_2, /*hidden argument*/Dictionary_2_Add_m2205990300_RuntimeMethod_var);
		Dictionary_2_t3925917911 * L_3 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_soundDictionary_0();
		AudioClip_t3680889665 * L_4 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral2780624989, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		Dictionary_2_Add_m2205990300(L_3, 1, L_4, /*hidden argument*/Dictionary_2_Add_m2205990300_RuntimeMethod_var);
		Dictionary_2_t3925917911 * L_5 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_soundDictionary_0();
		AudioClip_t3680889665 * L_6 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral2776790003, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		Dictionary_2_Add_m2205990300(L_5, 2, L_6, /*hidden argument*/Dictionary_2_Add_m2205990300_RuntimeMethod_var);
		Dictionary_2_t3925917911 * L_7 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_soundDictionary_0();
		AudioClip_t3680889665 * L_8 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, _stringLiteral3191268062, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		Dictionary_2_Add_m2205990300(L_7, 3, L_8, /*hidden argument*/Dictionary_2_Add_m2205990300_RuntimeMethod_var);
		((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->set_initialized_1((bool)1);
		return;
	}
}
// System.Void AudioHandler::PlaySound(Sounds)
extern "C"  void AudioHandler_PlaySound_m2903003174 (RuntimeObject * __this /* static, unused */, int32_t ___soundName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_PlaySound_m2903003174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioSource_t3935305588 * L_0 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_audioSource_2();
		Dictionary_2_t3925917911 * L_1 = ((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->get_soundDictionary_0();
		int32_t L_2 = ___soundName0;
		AudioClip_t3680889665 * L_3 = Dictionary_2_get_Item_m31668732(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m31668732_RuntimeMethod_var);
		AudioSource_PlayOneShot_m1688286683(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AudioHandler::.cctor()
extern "C"  void AudioHandler__cctor_m1382153886 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler__cctor_m1382153886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3925917911 * L_0 = (Dictionary_2_t3925917911 *)il2cpp_codegen_object_new(Dictionary_2_t3925917911_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3770276227(L_0, /*hidden argument*/Dictionary_2__ctor_m3770276227_RuntimeMethod_var);
		((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->set_soundDictionary_0(L_0);
		((AudioHandler_t3272622511_StaticFields*)il2cpp_codegen_static_fields_for(AudioHandler_t3272622511_il2cpp_TypeInfo_var))->set_initialized_1((bool)0);
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
// System.Void BackgroundCaller::.ctor()
extern "C"  void BackgroundCaller__ctor_m2535683335 (BackgroundCaller_t1077918380 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackgroundCaller::Awake()
extern "C"  void BackgroundCaller_Awake_m3744744508 (BackgroundCaller_t1077918380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundCaller_Awake_m3744744508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_2(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		bool L_2 = BackgroundHandler_get_Initialized_m985607731(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_3 = __this->get_spriteRenderer_2();
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		BackgroundHandler_Initialize_m3187152508(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0031:
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_003c:
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
// System.Boolean BackgroundHandler::get_Initialized()
extern "C"  bool BackgroundHandler_get_Initialized_m985607731 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundHandler_get_Initialized_m985607731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		bool L_0 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_initialized_1();
		return L_0;
	}
}
// System.Void BackgroundHandler::Initialize(UnityEngine.SpriteRenderer)
extern "C"  void BackgroundHandler_Initialize_m3187152508 (RuntimeObject * __this /* static, unused */, SpriteRenderer_t3235626157 * ___givenSpriteRenderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundHandler_Initialize_m3187152508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = ___givenSpriteRenderer0;
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->set_spriteRenderer_2(L_0);
		Dictionary_2_t1240555205 * L_1 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Dictionary_2_Add_m417020380(L_1, 0, (Sprite_t280657092 *)NULL, /*hidden argument*/Dictionary_2_Add_m417020380_RuntimeMethod_var);
		Dictionary_2_t1240555205 * L_2 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Dictionary_2_Add_m417020380(L_2, 1, (Sprite_t280657092 *)NULL, /*hidden argument*/Dictionary_2_Add_m417020380_RuntimeMethod_var);
		Dictionary_2_t1240555205 * L_3 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_4 = Resources_Load_TisSprite_t280657092_m4144667290(NULL /*static, unused*/, _stringLiteral2643421024, /*hidden argument*/Resources_Load_TisSprite_t280657092_m4144667290_RuntimeMethod_var);
		Dictionary_2_Add_m417020380(L_3, 2, L_4, /*hidden argument*/Dictionary_2_Add_m417020380_RuntimeMethod_var);
		Dictionary_2_t1240555205 * L_5 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Dictionary_2_Add_m417020380(L_5, 3, (Sprite_t280657092 *)NULL, /*hidden argument*/Dictionary_2_Add_m417020380_RuntimeMethod_var);
		Dictionary_2_t1240555205 * L_6 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Dictionary_2_Add_m417020380(L_6, 4, (Sprite_t280657092 *)NULL, /*hidden argument*/Dictionary_2_Add_m417020380_RuntimeMethod_var);
		((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->set_initialized_1((bool)1);
		return;
	}
}
// System.Void BackgroundHandler::UpdateBackground()
extern "C"  void BackgroundHandler_UpdateBackground_m956592049 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundHandler_UpdateBackground_m956592049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		int32_t L_0 = SceneHandler_get_CurrentScene_m3827173497(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0059;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_008d;
			}
		}
	}
	{
		goto IL_00a7;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		SpriteRenderer_t3235626157 * L_2 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_spriteRenderer_2();
		Dictionary_2_t1240555205 * L_3 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_4 = Dictionary_2_get_Item_m2762516092(L_3, 0, /*hidden argument*/Dictionary_2_get_Item_m2762516092_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m1286893786(L_2, L_4, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		SpriteRenderer_t3235626157 * L_5 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_spriteRenderer_2();
		Dictionary_2_t1240555205 * L_6 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_7 = Dictionary_2_get_Item_m2762516092(L_6, 1, /*hidden argument*/Dictionary_2_get_Item_m2762516092_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m1286893786(L_5, L_7, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0059:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		SpriteRenderer_t3235626157 * L_8 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_spriteRenderer_2();
		Dictionary_2_t1240555205 * L_9 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_10 = Dictionary_2_get_Item_m2762516092(L_9, 2, /*hidden argument*/Dictionary_2_get_Item_m2762516092_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m1286893786(L_8, L_10, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0073:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		SpriteRenderer_t3235626157 * L_11 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_spriteRenderer_2();
		Dictionary_2_t1240555205 * L_12 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_13 = Dictionary_2_get_Item_m2762516092(L_12, 3, /*hidden argument*/Dictionary_2_get_Item_m2762516092_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m1286893786(L_11, L_13, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_008d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		SpriteRenderer_t3235626157 * L_14 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_spriteRenderer_2();
		Dictionary_2_t1240555205 * L_15 = ((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->get_backgroundsDictionary_0();
		Sprite_t280657092 * L_16 = Dictionary_2_get_Item_m2762516092(L_15, 4, /*hidden argument*/Dictionary_2_get_Item_m2762516092_RuntimeMethod_var);
		SpriteRenderer_set_sprite_m1286893786(L_14, L_16, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_00a7:
	{
		return;
	}
}
// System.Void BackgroundHandler::.cctor()
extern "C"  void BackgroundHandler__cctor_m3950533156 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundHandler__cctor_m3950533156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1240555205 * L_0 = (Dictionary_2_t1240555205 *)il2cpp_codegen_object_new(Dictionary_2_t1240555205_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3275839340(L_0, /*hidden argument*/Dictionary_2__ctor_m3275839340_RuntimeMethod_var);
		((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->set_backgroundsDictionary_0(L_0);
		((BackgroundHandler_t4009190922_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var))->set_initialized_1((bool)0);
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
// System.Void Cam::.ctor()
extern "C"  void Cam__ctor_m4101269039 (Cam_t2348450784 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cam::Start()
extern "C"  void Cam_Start_m268025477 (Cam_t2348450784 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Cam::FixedUpdate()
extern "C"  void Cam_FixedUpdate_m4164200256 (Cam_t2348450784 * __this, const RuntimeMethod* method)
{
	{
		Cam_CamFollow_m2154401766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cam::CamFollow()
extern "C"  void Cam_CamFollow_m2154401766 (Cam_t2348450784 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_cameraUpdatePosition_2();
		Vector3_t3722313464  L_1 = Player_get_PlayerPosition_m1660955938(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		L_0->set_x_1(L_2);
		Vector3_t3722313464 * L_3 = __this->get_address_of_cameraUpdatePosition_2();
		Vector3_t3722313464  L_4 = Player_get_PlayerPosition_m1660955938(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_y_2();
		L_3->set_y_2(((float)il2cpp_codegen_add((float)(-2.0f), (float)L_5)));
		Vector3_t3722313464 * L_6 = __this->get_address_of_cameraUpdatePosition_2();
		L_6->set_z_3((-10.0f));
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = __this->get_cameraUpdatePosition_2();
		Transform_set_position_m3387557959(L_7, L_8, /*hidden argument*/NULL);
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
// System.Void EventManager::AddHitObstacleInvoker(Obstacle)
extern "C"  void EventManager_AddHitObstacleInvoker_m2158668339 (RuntimeObject * __this /* static, unused */, Obstacle_t162511623 * ___invoker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHitObstacleInvoker_m2158668339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_1_t12182309 * V_0 = NULL;
	Enumerator_t3373500928  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t1634586365 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitObstacleInvokers_0();
		Obstacle_t162511623 * L_1 = ___invoker0;
		List_1_Add_m3534108503(L_0, L_1, /*hidden argument*/List_1_Add_m3534108503_RuntimeMethod_var);
		List_1_t1484257051 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitObstacleListeners_1();
		Enumerator_t3373500928  L_3 = List_1_GetEnumerator_m3426409665(L_2, /*hidden argument*/List_1_GetEnumerator_m3426409665_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001b:
		{
			UnityAction_1_t12182309 * L_4 = Enumerator_get_Current_m1695841294((Enumerator_t3373500928 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1695841294_RuntimeMethod_var);
			V_0 = L_4;
			Obstacle_t162511623 * L_5 = ___invoker0;
			UnityAction_1_t12182309 * L_6 = V_0;
			Obstacle_AddHitObstacleListener_m2606000965(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			bool L_7 = Enumerator_MoveNext_m3479125306((Enumerator_t3373500928 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3479125306_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001b;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2369319652((Enumerator_t3373500928 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2369319652_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void EventManager::AddHitObstacleListener(UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>)
extern "C"  void EventManager_AddHitObstacleListener_m11849621 (RuntimeObject * __this /* static, unused */, UnityAction_1_t12182309 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager_AddHitObstacleListener_m11849621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Obstacle_t162511623 * V_0 = NULL;
	Enumerator_t3523830242  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		List_1_t1484257051 * L_0 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitObstacleListeners_1();
		UnityAction_1_t12182309 * L_1 = ___listener0;
		List_1_Add_m360537686(L_0, L_1, /*hidden argument*/List_1_Add_m360537686_RuntimeMethod_var);
		List_1_t1634586365 * L_2 = ((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->get_hitObstacleInvokers_0();
		Enumerator_t3523830242  L_3 = List_1_GetEnumerator_m3154063007(L_2, /*hidden argument*/List_1_GetEnumerator_m3154063007_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001b:
		{
			Obstacle_t162511623 * L_4 = Enumerator_get_Current_m1010696607((Enumerator_t3523830242 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1010696607_RuntimeMethod_var);
			V_0 = L_4;
			Obstacle_t162511623 * L_5 = V_0;
			UnityAction_1_t12182309 * L_6 = ___listener0;
			Obstacle_AddHitObstacleListener_m2606000965(L_5, L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			bool L_7 = Enumerator_MoveNext_m2811346468((Enumerator_t3523830242 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2811346468_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001b;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2354911885((Enumerator_t3523830242 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2354911885_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		return;
	}
}
// System.Void EventManager::.cctor()
extern "C"  void EventManager__cctor_m427558894 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventManager__cctor_m427558894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1634586365 * L_0 = (List_1_t1634586365 *)il2cpp_codegen_object_new(List_1_t1634586365_il2cpp_TypeInfo_var);
		List_1__ctor_m2108557919(L_0, /*hidden argument*/List_1__ctor_m2108557919_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hitObstacleInvokers_0(L_0);
		List_1_t1484257051 * L_1 = (List_1_t1484257051 *)il2cpp_codegen_object_new(List_1_t1484257051_il2cpp_TypeInfo_var);
		List_1__ctor_m3418488446(L_1, /*hidden argument*/List_1__ctor_m3418488446_RuntimeMethod_var);
		((EventManager_t1594656820_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1594656820_il2cpp_TypeInfo_var))->set_hitObstacleListeners_1(L_1);
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
// System.Void GameHUD::.ctor()
extern "C"  void GameHUD__ctor_m733805089 (GameHUD_t3716131516 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameHUD::Update()
extern "C"  void GameHUD_Update_m868872271 (GameHUD_t3716131516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameHUD_Update_m868872271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Text_t1901882714 * L_0 = __this->get_healthDisplay_3();
		int32_t L_1 = GameVariables_get_Health_m4279416818(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3021899316, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		Text_t1901882714 * L_4 = __this->get_pointsDisplay_2();
		int32_t L_5 = GameVariables_get_Points_m3615572610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2228605849, L_6, _stringLiteral3454908288, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
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
// System.Void GameStart::.ctor()
extern "C"  void GameStart__ctor_m2832973317 (GameStart_t4096828885 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameStart::Awake()
extern "C"  void GameStart_Awake_m3016134157 (GameStart_t4096828885 * __this, const RuntimeMethod* method)
{
	{
		GameVariables_set_Health_m4167835135(NULL /*static, unused*/, ((int32_t)1000), /*hidden argument*/NULL);
		GameVariables_set_Points_m853646325(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
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
// System.Int32 GameVariables::get_Points()
extern "C"  int32_t GameVariables_get_Points_m3615572610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameVariables_get_Points_m3615572610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((GameVariables_t3794197391_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t3794197391_il2cpp_TypeInfo_var))->get_points_0();
		return L_0;
	}
}
// System.Void GameVariables::set_Points(System.Int32)
extern "C"  void GameVariables_set_Points_m853646325 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameVariables_set_Points_m853646325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		((GameVariables_t3794197391_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t3794197391_il2cpp_TypeInfo_var))->set_points_0(L_0);
		return;
	}
}
// System.Int32 GameVariables::get_Health()
extern "C"  int32_t GameVariables_get_Health_m4279416818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameVariables_get_Health_m4279416818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((GameVariables_t3794197391_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t3794197391_il2cpp_TypeInfo_var))->get_health_1();
		return L_0;
	}
}
// System.Void GameVariables::set_Health(System.Int32)
extern "C"  void GameVariables_set_Health_m4167835135 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameVariables_set_Health_m4167835135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		((GameVariables_t3794197391_StaticFields*)il2cpp_codegen_static_fields_for(GameVariables_t3794197391_il2cpp_TypeInfo_var))->set_health_1(L_0);
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
// System.Void HitObstacle::.ctor()
extern "C"  void HitObstacle__ctor_m1137735573 (HitObstacle_t2463768999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HitObstacle__ctor_m1137735573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m3567252554(__this, /*hidden argument*/UnityEvent_1__ctor_m3567252554_RuntimeMethod_var);
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
// System.Void MenuHUD::.ctor()
extern "C"  void MenuHUD__ctor_m1927804502 (MenuHUD_t3185551065 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuHUD::ClickStart()
extern "C"  void MenuHUD_ClickStart_m1061616739 (MenuHUD_t3185551065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuHUD_ClickStart_m1061616739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_PlaySound_m2903003174(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_StartScene_m2771193795(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuHUD::ClickHelp()
extern "C"  void MenuHUD_ClickHelp_m1773989946 (MenuHUD_t3185551065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuHUD_ClickHelp_m1773989946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_PlaySound_m2903003174(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_StartScene_m2771193795(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuHUD::ClickGoBack()
extern "C"  void MenuHUD_ClickGoBack_m3871876596 (MenuHUD_t3185551065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuHUD_ClickGoBack_m3871876596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_PlaySound_m2903003174(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_StartScene_m2771193795(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
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
// System.Void Obstacle::.ctor()
extern "C"  void Obstacle__ctor_m1962423779 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle__ctor_m1962423779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HitObstacle_t2463768999 * L_0 = (HitObstacle_t2463768999 *)il2cpp_codegen_object_new(HitObstacle_t2463768999_il2cpp_TypeInfo_var);
		HitObstacle__ctor_m1137735573(L_0, /*hidden argument*/NULL);
		__this->set_hitObstacleEvent_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Obstacle::Start()
extern "C"  void Obstacle_Start_m770163199 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_Start_m770163199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddHitObstacleInvoker_m2158668339(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Obstacle::Update()
extern "C"  void Obstacle_Update_m961478357 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Obstacle::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Obstacle_OnCollisionEnter2D_m3671537103 (Obstacle_t162511623 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_OnCollisionEnter2D_m3671537103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_PlaySound_m2903003174(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		int32_t L_0 = GameVariables_get_Health_m4279416818(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameVariables_set_Health_m4167835135(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)100))), /*hidden argument*/NULL);
		HitObstacle_t2463768999 * L_1 = __this->get_hitObstacleEvent_2();
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		UnityEvent_1_Invoke_m598483244(L_1, L_3, /*hidden argument*/UnityEvent_1_Invoke_m598483244_RuntimeMethod_var);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Obstacle::AddHitObstacleListener(UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>)
extern "C"  void Obstacle_AddHitObstacleListener_m2606000965 (Obstacle_t162511623 * __this, UnityAction_1_t12182309 * ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Obstacle_AddHitObstacleListener_m2606000965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HitObstacle_t2463768999 * L_0 = __this->get_hitObstacleEvent_2();
		UnityAction_1_t12182309 * L_1 = ___listener0;
		UnityEvent_1_AddListener_m3657375053(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m3657375053_RuntimeMethod_var);
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
// System.Void ObstacleSpawner::.ctor()
extern "C"  void ObstacleSpawner__ctor_m3184897244 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleSpawner__ctor_m3184897244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t899420910 * L_0 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
		List_1__ctor_m1536473967(L_0, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
		__this->set_activePositions_6(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleSpawner::Start()
extern "C"  void ObstacleSpawner_Start_m2081947238 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleSpawner_Start_m2081947238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral3907562786, (2.0f), (0.5f), /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)ObstacleSpawner_DeactivateObstacle_m1627701775_RuntimeMethod_var;
		UnityAction_1_t12182309 * L_1 = (UnityAction_1_t12182309 *)il2cpp_codegen_object_new(UnityAction_1_t12182309_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4251943150(L_1, __this, L_0, /*hidden argument*/UnityAction_1__ctor_m4251943150_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventManager_t1594656820_il2cpp_TypeInfo_var);
		EventManager_AddHitObstacleListener_m11849621(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleSpawner::Update()
extern "C"  void ObstacleSpawner_Update_m3159527875 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ObstacleSpawner::Spawn()
extern "C"  void ObstacleSpawner_Spawn_m1519001173 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleSpawner_Spawn_m1519001173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObstacleSpawner_GetSpawnPosition_m1222906663(__this, /*hidden argument*/NULL);
		List_1_t899420910 * L_0 = __this->get_activePositions_6();
		Vector3_t3722313464  L_1 = __this->get_testSpawnPosition_4();
		bool L_2 = List_1_Contains_m3294296416(L_0, L_1, /*hidden argument*/List_1_Contains_m3294296416_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		ObstacleSpawner_GetSpawnPosition_m1222906663(__this, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0029:
	{
		Vector3_t3722313464  L_3 = __this->get_testSpawnPosition_4();
		__this->set_spawnPosition_5(L_3);
		GameObject_t1113636619 * L_4 = __this->get_obstaclePrefab_2();
		Vector3_t3722313464  L_5 = __this->get_spawnPosition_5();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		List_1_t899420910 * L_7 = __this->get_activePositions_6();
		Vector3_t3722313464  L_8 = __this->get_testSpawnPosition_4();
		List_1_Add_m1524640104(L_7, L_8, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
	}

IL_005d:
	{
		return;
	}
}
// UnityEngine.Vector3 ObstacleSpawner::GetSpawnPosition()
extern "C"  Vector3_t3722313464  ObstacleSpawner_GetSpawnPosition_m1222906663 (ObstacleSpawner_t854983466 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleSpawner_GetSpawnPosition_m1222906663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2585711361 * L_0 = __this->get_spawnPositions_3();
		List_1_t2585711361 * L_1 = __this->get_spawnPositions_3();
		int32_t L_2 = List_1_get_Capacity_m3061168155(L_1, /*hidden argument*/List_1_get_Capacity_m3061168155_RuntimeMethod_var);
		int32_t L_3 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = List_1_get_Item_m3743125852(L_0, L_3, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		__this->set_testSpawnPosition_4(L_6);
		Vector3_t3722313464  L_7 = __this->get_testSpawnPosition_4();
		return L_7;
	}
}
// System.Void ObstacleSpawner::DeactivateObstacle(UnityEngine.Vector3)
extern "C"  void ObstacleSpawner_DeactivateObstacle_m1627701775 (ObstacleSpawner_t854983466 * __this, Vector3_t3722313464  ___hitPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleSpawner_DeactivateObstacle_m1627701775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t899420910 * L_0 = __this->get_activePositions_6();
		Vector3_t3722313464  L_1 = ___hitPosition0;
		List_1_Remove_m3586184571(L_0, L_1, /*hidden argument*/List_1_Remove_m3586184571_RuntimeMethod_var);
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
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Player::get_PlayerPosition()
extern "C"  Vector3_t3722313464  Player_get_PlayerPosition_m1660955938 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_get_PlayerPosition_m1660955938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_playerPosition_6();
		return L_0;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_bc2d_2(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2d_3(L_1);
		BoxCollider2D_t3581341831 * L_2 = __this->get_bc2d_2();
		Vector2_t2156229523  L_3 = BoxCollider2D_get_size_m3529128736(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_1();
		__this->set_playerHalfHeight_4(((float)((float)L_4/(float)(2.0f))));
		BoxCollider2D_t3581341831 * L_5 = __this->get_bc2d_2();
		Vector2_t2156229523  L_6 = BoxCollider2D_get_size_m3529128736(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		__this->set_playerHalfWidth_5(((float)((float)L_7/(float)(2.0f))));
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->set_playerPosition_6(L_9);
		return;
	}
}
// System.Void Player::FixedUpdate()
extern "C"  void Player_FixedUpdate_m170756310 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		Player_Movement_m2401100194(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Movement()
extern "C"  void Player_Movement_m2401100194 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Movement_m2401100194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Rigidbody2D_t939494601 * L_0 = __this->get_rb2d_3();
		Vector2_t2156229523  L_1 = Rigidbody2D_get_position_m2575647076(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->set_playerPosition_6(L_2);
		Vector3_t3722313464 * L_3 = (((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6());
		float L_4 = L_3->get_y_2();
		L_3->set_y_2(((float)il2cpp_codegen_subtract((float)L_4, (float)(0.1f))));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_5 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = V_0;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_005f;
		}
	}
	{
		Vector3_t3722313464 * L_7 = (((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6());
		float L_8 = L_7->get_x_1();
		float L_9 = V_0;
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_7->set_x_1(((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (float)(2.0f))))));
	}

IL_005f:
	{
		Player_Clamp_m1789074994(__this, /*hidden argument*/NULL);
		Player_Loop_m979010682(__this, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_11 = __this->get_rb2d_3();
		Vector3_t3722313464  L_12 = ((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_playerPosition_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m1934912072(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Loop()
extern "C"  void Player_Loop_m979010682 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Loop_m979010682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->get_y_2();
		float L_1 = __this->get_playerHalfHeight_4();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) < ((float)(-6.67f)))))
		{
			goto IL_0031;
		}
	}
	{
		float L_2 = __this->get_playerHalfHeight_4();
		(((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->set_y_2(((float)il2cpp_codegen_subtract((float)(6.67f), (float)L_2)));
	}

IL_0031:
	{
		int32_t L_3 = GameVariables_get_Points_m3615572610(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameVariables_set_Points_m853646325(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)100))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Clamp()
extern "C"  void Player_Clamp_m1789074994 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Clamp_m1789074994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->get_x_1();
		float L_1 = __this->get_playerHalfHeight_4();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) > ((float)(3.75f)))))
		{
			goto IL_0031;
		}
	}
	{
		float L_2 = __this->get_playerHalfWidth_5();
		(((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->set_x_1(((float)il2cpp_codegen_subtract((float)(3.75f), (float)L_2)));
	}

IL_0031:
	{
		float L_3 = (((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->get_x_1();
		float L_4 = __this->get_playerHalfWidth_5();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))) < ((float)(-3.75f)))))
		{
			goto IL_0062;
		}
	}
	{
		float L_5 = __this->get_playerHalfWidth_5();
		(((Player_t3266647312_StaticFields*)il2cpp_codegen_static_fields_for(Player_t3266647312_il2cpp_TypeInfo_var))->get_address_of_playerPosition_6())->set_x_1(((float)il2cpp_codegen_add((float)(-3.75f), (float)L_5)));
	}

IL_0062:
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
// System.Void SceneCaller::.ctor()
extern "C"  void SceneCaller__ctor_m814490041 (SceneCaller_t2373517278 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneCaller::Awake()
extern "C"  void SceneCaller_Awake_m2402910593 (SceneCaller_t2373517278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneCaller_Awake_m2402910593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		bool L_1 = SceneHandler_get_Initialized_m3718856300(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_Initialize_m210857971(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_001f:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void SceneCaller::Update()
extern "C"  void SceneCaller_Update_m102590092 (SceneCaller_t2373517278 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneCaller_Update_m102590092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = GameVariables_get_Health_m4279416818(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_StartScene_m2771193795(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		GameVariables_set_Health_m4167835135(NULL /*static, unused*/, ((int32_t)1000), /*hidden argument*/NULL);
	}

IL_001a:
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
// System.Boolean SceneHandler::get_Initialized()
extern "C"  bool SceneHandler_get_Initialized_m3718856300 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneHandler_get_Initialized_m3718856300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		bool L_0 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_initialized_1();
		return L_0;
	}
}
// Scenes SceneHandler::get_CurrentScene()
extern "C"  int32_t SceneHandler_get_CurrentScene_m3827173497 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneHandler_get_CurrentScene_m3827173497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_currentScene_2();
		return L_0;
	}
}
// System.Void SceneHandler::Initialize()
extern "C"  void SceneHandler_Initialize_m210857971 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneHandler_Initialize_m210857971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		Dictionary_2_t2807348802 * L_0 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		Dictionary_2_Add_m630417335(L_0, 0, _stringLiteral1544471547, /*hidden argument*/Dictionary_2_Add_m630417335_RuntimeMethod_var);
		Dictionary_2_t2807348802 * L_1 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		Dictionary_2_Add_m630417335(L_1, 1, _stringLiteral2793515199, /*hidden argument*/Dictionary_2_Add_m630417335_RuntimeMethod_var);
		Dictionary_2_t2807348802 * L_2 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		Dictionary_2_Add_m630417335(L_2, 2, _stringLiteral2751939251, /*hidden argument*/Dictionary_2_Add_m630417335_RuntimeMethod_var);
		Dictionary_2_t2807348802 * L_3 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		Dictionary_2_Add_m630417335(L_3, 3, _stringLiteral62725266, /*hidden argument*/Dictionary_2_Add_m630417335_RuntimeMethod_var);
		Dictionary_2_t2807348802 * L_4 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		Dictionary_2_Add_m630417335(L_4, 4, _stringLiteral3266137297, /*hidden argument*/Dictionary_2_Add_m630417335_RuntimeMethod_var);
		((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->set_initialized_1((bool)1);
		return;
	}
}
// System.Void SceneHandler::StartScene(Scenes)
extern "C"  void SceneHandler_StartScene_m2771193795 (RuntimeObject * __this /* static, unused */, int32_t ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneHandler_StartScene_m2771193795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		Dictionary_2_t2807348802 * L_0 = ((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->get_sceneDictionary_0();
		int32_t L_1 = ___sceneName0;
		String_t* L_2 = Dictionary_2_get_Item_m2291195048(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m2291195048_RuntimeMethod_var);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___sceneName0;
		((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->set_currentScene_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundHandler_t4009190922_il2cpp_TypeInfo_var);
		BackgroundHandler_UpdateBackground_m956592049(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneHandler::.cctor()
extern "C"  void SceneHandler__cctor_m2091422692 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneHandler__cctor_m2091422692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2807348802 * L_0 = (Dictionary_2_t2807348802 *)il2cpp_codegen_object_new(Dictionary_2_t2807348802_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4238192346(L_0, /*hidden argument*/Dictionary_2__ctor_m4238192346_RuntimeMethod_var);
		((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->set_sceneDictionary_0(L_0);
		((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->set_initialized_1((bool)0);
		((SceneHandler_t392543793_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_t392543793_il2cpp_TypeInfo_var))->set_currentScene_2(0);
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
// System.Void TextTyper::.ctor()
extern "C"  void TextTyper__ctor_m978395271 (TextTyper_t680081595 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextTyper::Start()
extern "C"  void TextTyper_Start_m3061546139 (TextTyper_t680081595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextTyper_Start_m3061546139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_textContent_2();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		__this->set_message_3(L_1);
		Text_t1901882714 * L_2 = __this->get_textContent_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(AudioHandler_t3272622511_il2cpp_TypeInfo_var);
		AudioHandler_PlaySound_m2903003174(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral3243520198, (1.0f), (0.1f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextTyper::Update()
extern "C"  void TextTyper_Update_m954673562 (TextTyper_t680081595 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TextTyper::Type()
extern "C"  void TextTyper_Type_m1528259530 (TextTyper_t680081595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextTyper_Type_m1528259530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_charCount_4();
		String_t* L_1 = __this->get_message_3();
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0055;
		}
	}
	{
		Text_t1901882714 * L_3 = __this->get_textContent_2();
		Text_t1901882714 * L_4 = L_3;
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		String_t* L_6 = __this->get_message_3();
		int32_t L_7 = __this->get_charCount_4();
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		Il2CppChar L_9 = L_8;
		RuntimeObject * L_10 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, L_5, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_11);
		int32_t L_12 = __this->get_charCount_4();
		__this->set_charCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		goto IL_0066;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SceneHandler_t392543793_il2cpp_TypeInfo_var);
		SceneHandler_StartScene_m2771193795(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

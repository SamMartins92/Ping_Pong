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

// Ball
struct Ball_t2062879;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// Enemy
struct Enemy_t67100520;
// EXIT
struct EXIT_t2142494;
// MenuBall
struct MenuBall_t3755289630;
// NewGame
struct NewGame_t3509465490;
// Paddle
struct Paddle_t2382992266;
// Score
struct Score_t79711858;
// UnityEngine.Collider
struct Collider_t2939674232;
// Spawner
struct Spawner_t3948062024;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ball2062879.h"
#include "AssemblyU2DCSharp_Ball2062879MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"
#include "AssemblyU2DCSharp_Enemy67100520MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_EXIT2142494.h"
#include "AssemblyU2DCSharp_EXIT2142494MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "AssemblyU2DCSharp_MenuBall3755289630.h"
#include "AssemblyU2DCSharp_MenuBall3755289630MethodDeclarations.h"
#include "AssemblyU2DCSharp_NewGame3509465490.h"
#include "AssemblyU2DCSharp_NewGame3509465490MethodDeclarations.h"
#include "AssemblyU2DCSharp_Paddle2382992266.h"
#include "AssemblyU2DCSharp_Paddle2382992266MethodDeclarations.h"
#include "AssemblyU2DCSharp_Score79711858.h"
#include "AssemblyU2DCSharp_Score79711858MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextMesh2567681854MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextMesh2567681854.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_Spawner3948062024.h"
#include "AssemblyU2DCSharp_Spawner3948062024MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m441016515_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m441016515(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(__this, method) ((  Rigidbody_t3346577219 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1158546268 (Ball_t2062879 * __this, const MethodInfo* method)
{
	{
		__this->set_ballVelocity_2((3000.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Awake()
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var;
extern const uint32_t Ball_Awake_m1396151487_MetadataUsageId;
extern "C"  void Ball_Awake_m1396151487 (Ball_t2062879 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_Awake_m1396151487_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_1 = GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var);
		__this->set_rb_3(L_1);
		int32_t L_2 = Random_Range_m75452833(NULL /*static, unused*/, 1, 3, /*hidden argument*/NULL);
		__this->set_randInt_5(L_2);
		return;
	}
}
// System.Void Ball::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Update_m3282058033_MetadataUsageId;
extern "C"  void Ball_Update_m3282058033 (Ball_t2062879 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m3282058033_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0091;
		}
	}
	{
		bool L_1 = __this->get_isPlay_4();
		if (L_1)
		{
			goto IL_0091;
		}
	}
	{
		Transform_t1659122786 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_set_parent_m3231272063(L_2, (Transform_t1659122786 *)NULL, /*hidden argument*/NULL);
		__this->set_isPlay_4((bool)1);
		Rigidbody_t3346577219 * L_3 = __this->get_rb_3();
		Rigidbody_set_isKinematic_m294703295(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_randInt_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		Rigidbody_t3346577219 * L_5 = __this->get_rb_3();
		float L_6 = __this->get_ballVelocity_2();
		float L_7 = __this->get_ballVelocity_2();
		Vector3_t4282066566  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2926210380(&L_8, L_6, L_7, (0.0f), /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_5, L_8, /*hidden argument*/NULL);
	}

IL_0062:
	{
		int32_t L_9 = __this->get_randInt_5();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0091;
		}
	}
	{
		Rigidbody_t3346577219 * L_10 = __this->get_rb_3();
		float L_11 = __this->get_ballVelocity_2();
		float L_12 = __this->get_ballVelocity_2();
		Vector3_t4282066566  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2926210380(&L_13, ((-L_11)), ((-L_12)), (0.0f), /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_10, L_13, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m1781972739 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((8.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Update()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern const uint32_t Enemy_Update_m1133442154_MetadataUsageId;
extern "C"  void Enemy_Update_m1133442154 (Enemy_t67100520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_m1133442154_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral2062879, /*hidden argument*/NULL);
		__this->set_ballObj_5(L_0);
		GameObject_t3674682005 * L_1 = __this->get_ballObj_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_1, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a7;
		}
	}
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_5 = __this->get_ballObj_5();
		Transform_t1659122786 * L_6 = GameObject_get_transform_m1278640159(L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_speed_2();
		Vector3_t4282066566  L_10 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_4, L_7, ((float)((float)L_8*(float)L_9)), /*hidden argument*/NULL);
		__this->set_targetPos_3(L_10);
		Vector3_t4282066566 * L_11 = __this->get_address_of_targetPos_3();
		float L_12 = L_11->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_12, (-13.0f), (13.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m2926210380(&L_14, (-20.0f), L_13, (0.0f), /*hidden argument*/NULL);
		__this->set_playerPos_4(L_14);
		Transform_t1659122786 * L_15 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566 * L_16 = __this->get_address_of_playerPos_4();
		float L_17 = L_16->get_y_2();
		Vector3_t4282066566  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m2926210380(&L_18, (20.0f), L_17, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_15, L_18, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void EXIT::.ctor()
extern "C"  void EXIT__ctor_m2301705021 (EXIT_t2142494 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EXIT::OnMouseDown()
extern "C"  void EXIT_OnMouseDown_m1002216099 (EXIT_t2142494 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_1 = L_0;
		Vector3_t4282066566  L_2 = Transform_get_localScale_m3886572677(L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_2, (0.9f), /*hidden argument*/NULL);
		Transform_set_localScale_m310756934(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EXIT::OnMouseUp()
extern "C"  void EXIT_OnMouseUp_m131156572 (EXIT_t2142494 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuBall::.ctor()
extern "C"  void MenuBall__ctor_m1750619197 (MenuBall_t3755289630 * __this, const MethodInfo* method)
{
	{
		__this->set_ballVel_2(((int32_t)500));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuBall::Awake()
extern "C"  void MenuBall_Awake_m1988224416 (MenuBall_t3755289630 * __this, const MethodInfo* method)
{
	{
		Rigidbody_t3346577219 * L_0 = __this->get_rb_3();
		int32_t L_1 = __this->get_ballVel_2();
		int32_t L_2 = __this->get_ballVel_2();
		Vector3_t4282066566  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m2926210380(&L_3, (((float)((float)L_1))), (((float)((float)L_2))), (0.0f), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m799562119(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewGame::.ctor()
extern "C"  void NewGame__ctor_m3041174041 (NewGame_t3509465490 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewGame::OnMouseDown()
extern "C"  void NewGame_OnMouseDown_m4278611071 (NewGame_t3509465490 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_1 = L_0;
		Vector3_t4282066566  L_2 = Transform_get_localScale_m3886572677(L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_2, (0.9f), /*hidden argument*/NULL);
		Transform_set_localScale_m310756934(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewGame::OnMouseUp()
extern "C"  void NewGame_OnMouseUp_m2615010104 (NewGame_t3509465490 * __this, const MethodInfo* method)
{
	{
		Application_LoadLevel_m1181471414(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::.ctor()
extern "C"  void Paddle__ctor_m1407855697 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	{
		__this->set_paddleSpeed_2((1.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t Paddle_Update_m2420715740_MetadataUsageId;
extern "C"  void Paddle_Update_m2420715740 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Update_m2420715740_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		float L_4 = __this->get_paddleSpeed_2();
		V_0 = ((float)((float)L_2+(float)((float)((float)L_3*(float)L_4))));
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_5, (-11.0f), (11.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2926210380(&L_7, (-20.0f), L_6, (0.0f), /*hidden argument*/NULL);
		__this->set_playerPos_3(L_7);
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = __this->get_playerPos_3();
		Transform_set_position_m3111394108(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::.ctor()
extern "C"  void Score__ctor_m2757860153 (Score_t79711858 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern const uint32_t Score_Update_m1321180916_MetadataUsageId;
extern "C"  void Score_Update_m1321180916 (Score_t79711858 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Score_Update_m1321180916_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral2062879, /*hidden argument*/NULL);
		__this->set_ball_5(L_0);
		TextMesh_t2567681854 * L_1 = __this->get_currSco_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_3 = __this->get_score_6();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m389863537(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		TextMesh_set_text_m3628430759(L_1, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern const uint32_t Score_OnTriggerEnter_m3140904671_MetadataUsageId;
extern "C"  void Score_OnTriggerEnter_m3140904671 (Score_t79711858 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Score_OnTriggerEnter_m3140904671_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t2939674232 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, _stringLiteral2062879, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_3 = __this->get_score_6();
		__this->set_score_6(((int32_t)((int32_t)L_3+(int32_t)1)));
		GameObject_t3674682005 * L_4 = __this->get_ball_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_5 = __this->get_ballPref_3();
		Transform_t1659122786 * L_6 = __this->get_paddleObj_4();
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(L_6, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_1();
		Transform_t1659122786 * L_10 = __this->get_paddleObj_4();
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_y_2();
		Vector3_t4282066566  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m2926210380(&L_14, ((float)((float)L_9+(float)(2.0f))), L_13, (0.0f), /*hidden argument*/NULL);
		Quaternion_t1553702882  L_15 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t3071478659 * L_16 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_5, L_14, L_15, /*hidden argument*/NULL);
		Transform_t1659122786 * L_17 = GameObject_get_transform_m1278640159(((GameObject_t3674682005 *)IsInstSealed(L_16, GameObject_t3674682005_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Transform_t1659122786 * L_18 = __this->get_paddleObj_4();
		Transform_set_parent_m3231272063(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0093:
	{
		return;
	}
}
// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m786863139 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		Spawner_Spawn_m672489724(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t Spawner_Update_m2923773002_MetadataUsageId;
extern "C"  void Spawner_Update_m2923773002 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Update_m2923773002_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Spawner_Spawn_m672489724(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Spawner::CreateRandomPosition()
extern "C"  void Spawner_CreateRandomPosition_m708315881 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)-8), 8, /*hidden argument*/NULL);
		__this->set_randX_2(L_0);
		int32_t L_1 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)-4), 4, /*hidden argument*/NULL);
		__this->set_randY_3(L_1);
		return;
	}
}
// System.Void Spawner::Spawn()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Spawner_Spawn_m672489724_MetadataUsageId;
extern "C"  void Spawner_Spawn_m672489724 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Spawn_m672489724_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Spawner_CreateRandomPosition_m708315881(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_0 = __this->get_ball_4();
		int32_t L_1 = __this->get_randX_2();
		int32_t L_2 = __this->get_randY_3();
		Vector3_t4282066566  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m2926210380(&L_3, (((float)((float)L_1))), (((float)((float)L_2))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t1553702882  L_4 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

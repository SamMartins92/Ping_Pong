#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t79711858  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextMesh Score::currSco
	TextMesh_t2567681854 * ___currSco_2;
	// UnityEngine.GameObject Score::ballPref
	GameObject_t3674682005 * ___ballPref_3;
	// UnityEngine.Transform Score::paddleObj
	Transform_t1659122786 * ___paddleObj_4;
	// UnityEngine.GameObject Score::ball
	GameObject_t3674682005 * ___ball_5;
	// System.Int32 Score::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_currSco_2() { return static_cast<int32_t>(offsetof(Score_t79711858, ___currSco_2)); }
	inline TextMesh_t2567681854 * get_currSco_2() const { return ___currSco_2; }
	inline TextMesh_t2567681854 ** get_address_of_currSco_2() { return &___currSco_2; }
	inline void set_currSco_2(TextMesh_t2567681854 * value)
	{
		___currSco_2 = value;
		Il2CppCodeGenWriteBarrier(&___currSco_2, value);
	}

	inline static int32_t get_offset_of_ballPref_3() { return static_cast<int32_t>(offsetof(Score_t79711858, ___ballPref_3)); }
	inline GameObject_t3674682005 * get_ballPref_3() const { return ___ballPref_3; }
	inline GameObject_t3674682005 ** get_address_of_ballPref_3() { return &___ballPref_3; }
	inline void set_ballPref_3(GameObject_t3674682005 * value)
	{
		___ballPref_3 = value;
		Il2CppCodeGenWriteBarrier(&___ballPref_3, value);
	}

	inline static int32_t get_offset_of_paddleObj_4() { return static_cast<int32_t>(offsetof(Score_t79711858, ___paddleObj_4)); }
	inline Transform_t1659122786 * get_paddleObj_4() const { return ___paddleObj_4; }
	inline Transform_t1659122786 ** get_address_of_paddleObj_4() { return &___paddleObj_4; }
	inline void set_paddleObj_4(Transform_t1659122786 * value)
	{
		___paddleObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___paddleObj_4, value);
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(Score_t79711858, ___ball_5)); }
	inline GameObject_t3674682005 * get_ball_5() const { return ___ball_5; }
	inline GameObject_t3674682005 ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(GameObject_t3674682005 * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier(&___ball_5, value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(Score_t79711858, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

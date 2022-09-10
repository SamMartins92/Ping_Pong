#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public MonoBehaviour_t667441552
{
public:
	// System.Single Enemy::speed
	float ___speed_2;
	// UnityEngine.Vector3 Enemy::targetPos
	Vector3_t4282066566  ___targetPos_3;
	// UnityEngine.Vector3 Enemy::playerPos
	Vector3_t4282066566  ___playerPos_4;
	// UnityEngine.GameObject Enemy::ballObj
	GameObject_t3674682005 * ___ballObj_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_targetPos_3() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___targetPos_3)); }
	inline Vector3_t4282066566  get_targetPos_3() const { return ___targetPos_3; }
	inline Vector3_t4282066566 * get_address_of_targetPos_3() { return &___targetPos_3; }
	inline void set_targetPos_3(Vector3_t4282066566  value)
	{
		___targetPos_3 = value;
	}

	inline static int32_t get_offset_of_playerPos_4() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___playerPos_4)); }
	inline Vector3_t4282066566  get_playerPos_4() const { return ___playerPos_4; }
	inline Vector3_t4282066566 * get_address_of_playerPos_4() { return &___playerPos_4; }
	inline void set_playerPos_4(Vector3_t4282066566  value)
	{
		___playerPos_4 = value;
	}

	inline static int32_t get_offset_of_ballObj_5() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___ballObj_5)); }
	inline GameObject_t3674682005 * get_ballObj_5() const { return ___ballObj_5; }
	inline GameObject_t3674682005 ** get_address_of_ballObj_5() { return &___ballObj_5; }
	inline void set_ballObj_5(GameObject_t3674682005 * value)
	{
		___ballObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___ballObj_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

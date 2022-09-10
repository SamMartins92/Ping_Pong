#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t2382992266  : public MonoBehaviour_t667441552
{
public:
	// System.Single Paddle::paddleSpeed
	float ___paddleSpeed_2;
	// UnityEngine.Vector3 Paddle::playerPos
	Vector3_t4282066566  ___playerPos_3;

public:
	inline static int32_t get_offset_of_paddleSpeed_2() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___paddleSpeed_2)); }
	inline float get_paddleSpeed_2() const { return ___paddleSpeed_2; }
	inline float* get_address_of_paddleSpeed_2() { return &___paddleSpeed_2; }
	inline void set_paddleSpeed_2(float value)
	{
		___paddleSpeed_2 = value;
	}

	inline static int32_t get_offset_of_playerPos_3() { return static_cast<int32_t>(offsetof(Paddle_t2382992266, ___playerPos_3)); }
	inline Vector3_t4282066566  get_playerPos_3() const { return ___playerPos_3; }
	inline Vector3_t4282066566 * get_address_of_playerPos_3() { return &___playerPos_3; }
	inline void set_playerPos_3(Vector3_t4282066566  value)
	{
		___playerPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

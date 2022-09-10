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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t3948062024  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Spawner::randX
	int32_t ___randX_2;
	// System.Int32 Spawner::randY
	int32_t ___randY_3;
	// UnityEngine.GameObject Spawner::ball
	GameObject_t3674682005 * ___ball_4;

public:
	inline static int32_t get_offset_of_randX_2() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___randX_2)); }
	inline int32_t get_randX_2() const { return ___randX_2; }
	inline int32_t* get_address_of_randX_2() { return &___randX_2; }
	inline void set_randX_2(int32_t value)
	{
		___randX_2 = value;
	}

	inline static int32_t get_offset_of_randY_3() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___randY_3)); }
	inline int32_t get_randY_3() const { return ___randY_3; }
	inline int32_t* get_address_of_randY_3() { return &___randY_3; }
	inline void set_randY_3(int32_t value)
	{
		___randY_3 = value;
	}

	inline static int32_t get_offset_of_ball_4() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___ball_4)); }
	inline GameObject_t3674682005 * get_ball_4() const { return ___ball_4; }
	inline GameObject_t3674682005 ** get_address_of_ball_4() { return &___ball_4; }
	inline void set_ball_4(GameObject_t3674682005 * value)
	{
		___ball_4 = value;
		Il2CppCodeGenWriteBarrier(&___ball_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

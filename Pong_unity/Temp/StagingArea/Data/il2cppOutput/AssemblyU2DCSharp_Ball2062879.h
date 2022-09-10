#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t667441552
{
public:
	// System.Single Ball::ballVelocity
	float ___ballVelocity_2;
	// UnityEngine.Rigidbody Ball::rb
	Rigidbody_t3346577219 * ___rb_3;
	// System.Boolean Ball::isPlay
	bool ___isPlay_4;
	// System.Int32 Ball::randInt
	int32_t ___randInt_5;

public:
	inline static int32_t get_offset_of_ballVelocity_2() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___ballVelocity_2)); }
	inline float get_ballVelocity_2() const { return ___ballVelocity_2; }
	inline float* get_address_of_ballVelocity_2() { return &___ballVelocity_2; }
	inline void set_ballVelocity_2(float value)
	{
		___ballVelocity_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___rb_3)); }
	inline Rigidbody_t3346577219 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t3346577219 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_isPlay_4() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___isPlay_4)); }
	inline bool get_isPlay_4() const { return ___isPlay_4; }
	inline bool* get_address_of_isPlay_4() { return &___isPlay_4; }
	inline void set_isPlay_4(bool value)
	{
		___isPlay_4 = value;
	}

	inline static int32_t get_offset_of_randInt_5() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___randInt_5)); }
	inline int32_t get_randInt_5() const { return ___randInt_5; }
	inline int32_t* get_address_of_randInt_5() { return &___randInt_5; }
	inline void set_randInt_5(int32_t value)
	{
		___randInt_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// MenuBall
struct  MenuBall_t3755289630  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MenuBall::ballVel
	int32_t ___ballVel_2;
	// UnityEngine.Rigidbody MenuBall::rb
	Rigidbody_t3346577219 * ___rb_3;

public:
	inline static int32_t get_offset_of_ballVel_2() { return static_cast<int32_t>(offsetof(MenuBall_t3755289630, ___ballVel_2)); }
	inline int32_t get_ballVel_2() const { return ___ballVel_2; }
	inline int32_t* get_address_of_ballVel_2() { return &___ballVel_2; }
	inline void set_ballVel_2(int32_t value)
	{
		___ballVel_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(MenuBall_t3755289630, ___rb_3)); }
	inline Rigidbody_t3346577219 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t3346577219 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

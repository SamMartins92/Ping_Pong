#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t1761758306;

#include "System_System_Text_RegularExpressions_LinkRef378484359.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t1760044604  : public LinkRef_t378484359
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t1761758306 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t1760044604, ___stack_0)); }
	inline Stack_t1761758306 * get_stack_0() const { return ___stack_0; }
	inline Stack_t1761758306 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t1761758306 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier(&___stack_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

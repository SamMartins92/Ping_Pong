#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t45843923;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t4062675100  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t45843923 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t4062675100, ___m_Calls_0)); }
	inline List_1_t45843923 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t45843923 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t45843923 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Calls_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

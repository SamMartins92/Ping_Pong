#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Collections_ArrayList3948406897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListWrapper
struct  ArrayListWrapper_t1223568204  : public ArrayList_t3948406897
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListWrapper::m_InnerArrayList
	ArrayList_t3948406897 * ___m_InnerArrayList_4;

public:
	inline static int32_t get_offset_of_m_InnerArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListWrapper_t1223568204, ___m_InnerArrayList_4)); }
	inline ArrayList_t3948406897 * get_m_InnerArrayList_4() const { return ___m_InnerArrayList_4; }
	inline ArrayList_t3948406897 ** get_address_of_m_InnerArrayList_4() { return &___m_InnerArrayList_4; }
	inline void set_m_InnerArrayList_4(ArrayList_t3948406897 * value)
	{
		___m_InnerArrayList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_InnerArrayList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

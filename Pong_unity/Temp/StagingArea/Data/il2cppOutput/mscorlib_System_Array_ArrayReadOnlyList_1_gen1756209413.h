#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/ArrayReadOnlyList`1<System.Object>
struct  ArrayReadOnlyList_1_t1756209413  : public Il2CppObject
{
public:
	// T[] System.Array/ArrayReadOnlyList`1::array
	ObjectU5BU5D_t1108656482* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArrayReadOnlyList_1_t1756209413, ___array_0)); }
	inline ObjectU5BU5D_t1108656482* get_array_0() const { return ___array_0; }
	inline ObjectU5BU5D_t1108656482** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ObjectU5BU5D_t1108656482* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

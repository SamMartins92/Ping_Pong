#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Boolean[]
struct BooleanU5BU5D_t3456302923;

#include "mscorlib_System_IO_StreamReader2549717843.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t3478617218  : public StreamReader_t2549717843
{
public:

public:
};

struct UnexceptionalStreamReader_t3478617218_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t3456302923* ___newline_14;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_15;

public:
	inline static int32_t get_offset_of_newline_14() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t3478617218_StaticFields, ___newline_14)); }
	inline BooleanU5BU5D_t3456302923* get_newline_14() const { return ___newline_14; }
	inline BooleanU5BU5D_t3456302923** get_address_of_newline_14() { return &___newline_14; }
	inline void set_newline_14(BooleanU5BU5D_t3456302923* value)
	{
		___newline_14 = value;
		Il2CppCodeGenWriteBarrier(&___newline_14, value);
	}

	inline static int32_t get_offset_of_newlineChar_15() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t3478617218_StaticFields, ___newlineChar_15)); }
	inline Il2CppChar get_newlineChar_15() const { return ___newlineChar_15; }
	inline Il2CppChar* get_address_of_newlineChar_15() { return &___newlineChar_15; }
	inline void set_newlineChar_15(Il2CppChar value)
	{
		___newlineChar_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg3301293422.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t3059612989 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3301293422  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3059612989, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3301293422  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3301293422 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3301293422  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t3059612989, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier(&___memberInfo_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3059612989_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for marshalling of: System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t3059612989_marshaled_com
{
	CustomAttributeTypedArgument_t3301293422_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

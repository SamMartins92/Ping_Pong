#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t831343822;

#include "mscorlib_System_Security_Cryptography_SHA13976944113.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3725620262  : public SHA1_t3976944113
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t831343822 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3725620262, ___sha_4)); }
	inline SHA1Internal_t831343822 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t831343822 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t831343822 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier(&___sha_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

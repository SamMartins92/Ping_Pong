#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795357;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t1158032324  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t4260760469* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t3948406897 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t3948406897 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t4135795357 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t3948406897 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t1757673517 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____password_1)); }
	inline ByteU5BU5D_t4260760469* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t4260760469* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier(&____password_1, value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____keyBags_2)); }
	inline ArrayList_t3948406897 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t3948406897 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t3948406897 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier(&____keyBags_2, value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____secretBags_3)); }
	inline ArrayList_t3948406897 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t3948406897 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t3948406897 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier(&____secretBags_3, value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____certs_4)); }
	inline X509CertificateCollection_t4135795357 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t4135795357 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t4135795357 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier(&____certs_4, value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____safeBags_9)); }
	inline ArrayList_t3948406897 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t3948406897 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t3948406897 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier(&____safeBags_9, value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324, ____rng_10)); }
	inline RandomNumberGenerator_t1757673517 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t1757673517 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t1757673517 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier(&____rng_10, value);
	}
};

struct PKCS12_t1158032324_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map8_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map9_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapA_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapB_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapF
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapF_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_12() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___U3CU3Ef__switchU24map8_12)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map8_12() const { return ___U3CU3Ef__switchU24map8_12; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map8_12() { return &___U3CU3Ef__switchU24map8_12; }
	inline void set_U3CU3Ef__switchU24map8_12(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_13() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___U3CU3Ef__switchU24map9_13)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map9_13() const { return ___U3CU3Ef__switchU24map9_13; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map9_13() { return &___U3CU3Ef__switchU24map9_13; }
	inline void set_U3CU3Ef__switchU24map9_13(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map9_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_14() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___U3CU3Ef__switchU24mapA_14)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapA_14() const { return ___U3CU3Ef__switchU24mapA_14; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapA_14() { return &___U3CU3Ef__switchU24mapA_14; }
	inline void set_U3CU3Ef__switchU24mapA_14(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_15() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___U3CU3Ef__switchU24mapB_15)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapB_15() const { return ___U3CU3Ef__switchU24mapB_15; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapB_15() { return &___U3CU3Ef__switchU24mapB_15; }
	inline void set_U3CU3Ef__switchU24mapB_15(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_16() { return static_cast<int32_t>(offsetof(PKCS12_t1158032324_StaticFields, ___U3CU3Ef__switchU24mapF_16)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapF_16() const { return ___U3CU3Ef__switchU24mapF_16; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapF_16() { return &___U3CU3Ef__switchU24mapF_16; }
	inline void set_U3CU3Ef__switchU24mapF_16(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapF_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapF_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

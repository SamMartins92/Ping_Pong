#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1023199937;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1246329035  : public Il2CppObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t1023199937 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1246329035, ___m_collection_0)); }
	inline NameObjectCollectionBase_t1023199937 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t1023199937 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t1023199937 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_collection_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

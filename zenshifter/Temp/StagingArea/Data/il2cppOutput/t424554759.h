#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1765447871;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t424554759  : public Il2CppObject
{
public:
	t1765447871 * f6;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t424554759, f6)); }
	inline t1765447871 * fg6() const { return f6; }
	inline t1765447871 ** fag6() { return &f6; }
	inline void fs6(t1765447871 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

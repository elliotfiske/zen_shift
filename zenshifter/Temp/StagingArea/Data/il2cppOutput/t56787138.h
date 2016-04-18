#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3855630387;

#include "t2126946602.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t56787138  : public t2126946602
{
public:

public:
};

struct t56787138_SFs
{
public:
	t3855630387 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t56787138_SFs, f2)); }
	inline t3855630387 * fg2() const { return f2; }
	inline t3855630387 ** fag2() { return &f2; }
	inline void fs2(t3855630387 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

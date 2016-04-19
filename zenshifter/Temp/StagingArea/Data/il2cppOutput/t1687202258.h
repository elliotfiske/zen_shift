#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3477081137;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1687202258  : public t3012272455
{
public:

public:
};

struct t1687202258_SFs
{
public:
	t3477081137* f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1687202258_SFs, f2)); }
	inline t3477081137* fg2() const { return f2; }
	inline t3477081137** fag2() { return &f2; }
	inline void fs2(t3477081137* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

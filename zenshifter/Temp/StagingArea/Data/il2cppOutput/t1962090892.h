﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2385134729;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1962090892  : public t3012272455
{
public:
	t2385134729 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1962090892, f2)); }
	inline t2385134729 * fg2() const { return f2; }
	inline t2385134729 ** fag2() { return &f2; }
	inline void fs2(t2385134729 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
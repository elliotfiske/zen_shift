﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3875263730;

#include "t3875263730.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4112770821  : public t3875263730
{
public:
	t3875263730 * f14;

public:
	inline static int32_t fog14() { return static_cast<int32_t>(offsetof(t4112770821, f14)); }
	inline t3875263730 * fg14() const { return f14; }
	inline t3875263730 ** fag14() { return &f14; }
	inline void fs14(t3875263730 * value)
	{
		f14 = value;
		Il2CppCodeGenWriteBarrier(&f14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

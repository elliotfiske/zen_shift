﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2778460557;
struct t3869071517;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4168026055  : public Il2CppObject
{
public:
	t2778460557 * f0;
	t3869071517 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4168026055, f0)); }
	inline t2778460557 * fg0() const { return f0; }
	inline t2778460557 ** fag0() { return &f0; }
	inline void fs0(t2778460557 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4168026055, f1)); }
	inline t3869071517 * fg1() const { return f1; }
	inline t3869071517 ** fag1() { return &f1; }
	inline void fs1(t3869071517 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
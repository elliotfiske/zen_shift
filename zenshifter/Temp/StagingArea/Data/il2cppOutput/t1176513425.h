﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3389840957;
struct t1755167990;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1176513425  : public Il2CppObject
{
public:
	t3389840957 * f0;
	t1755167990 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1176513425, f0)); }
	inline t3389840957 * fg0() const { return f0; }
	inline t3389840957 ** fag0() { return &f0; }
	inline void fs0(t3389840957 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1176513425, f1)); }
	inline t1755167990 * fg1() const { return f1; }
	inline t1755167990 ** fag1() { return &f1; }
	inline void fs1(t1755167990 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
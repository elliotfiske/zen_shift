﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t284553113;
struct t3389840957;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t945572496 
{
public:
	t284553113 * f0;
	t3389840957 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t945572496, f0)); }
	inline t284553113 * fg0() const { return f0; }
	inline t284553113 ** fag0() { return &f0; }
	inline void fs0(t284553113 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t945572496, f1)); }
	inline t3389840957 * fg1() const { return f1; }
	inline t3389840957 ** fag1() { return &f1; }
	inline void fs1(t3389840957 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

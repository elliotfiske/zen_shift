﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t284553113;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1072804841  : public Il2CppObject
{
public:
	t284553113 * f0;
	int32_t f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1072804841, f0)); }
	inline t284553113 * fg0() const { return f0; }
	inline t284553113 ** fag0() { return &f0; }
	inline void fs0(t284553113 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1072804841, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

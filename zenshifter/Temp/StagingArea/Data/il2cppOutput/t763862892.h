﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t763862892 
{
public:
	int64_t f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t763862892, f3)); }
	inline int64_t fg3() const { return f3; }
	inline int64_t* fag3() { return &f3; }
	inline void fs3(int64_t value)
	{
		f3 = value;
	}
};

struct t763862892_SFs
{
public:
	t763862892  f0;
	t763862892  f1;
	t763862892  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t763862892_SFs, f0)); }
	inline t763862892  fg0() const { return f0; }
	inline t763862892 * fag0() { return &f0; }
	inline void fs0(t763862892  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t763862892_SFs, f1)); }
	inline t763862892  fg1() const { return f1; }
	inline t763862892 * fag1() { return &f1; }
	inline void fs1(t763862892  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t763862892_SFs, f2)); }
	inline t763862892  fg2() const { return f2; }
	inline t763862892 * fag2() { return &f2; }
	inline void fs2(t763862892  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TimeSpan
struct t763862892_marshaled
{
	int64_t f3;
};
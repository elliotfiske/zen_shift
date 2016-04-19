#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3726466439;

#include "t4014882752.h"
#include "t2929507470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1812249431 
{
public:
	t3726466439 * f0;
	int32_t f1;
	int32_t f2;
	t2929507470  f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1812249431, f0)); }
	inline t3726466439 * fg0() const { return f0; }
	inline t3726466439 ** fag0() { return &f0; }
	inline void fs0(t3726466439 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1812249431, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1812249431, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1812249431, f3)); }
	inline t2929507470  fg3() const { return f3; }
	inline t2929507470 * fag3() { return &f3; }
	inline void fs3(t2929507470  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

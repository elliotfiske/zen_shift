#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t2478271586.h"
#include "t1688557254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2207080710 
{
public:
	int32_t f0;
	t1688557254  f1;
	t1688557254  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2207080710, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2207080710, f1)); }
	inline t1688557254  fg1() const { return f1; }
	inline t1688557254 * fag1() { return &f1; }
	inline void fs1(t1688557254  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2207080710, f2)); }
	inline t1688557254  fg2() const { return f2; }
	inline t1688557254 * fag2() { return &f2; }
	inline void fs2(t1688557254  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: SkillObj
struct t2207080710_marshaled
{
	int32_t f0;
	t1688557254_marshaled f1;
	t1688557254_marshaled f2;
};

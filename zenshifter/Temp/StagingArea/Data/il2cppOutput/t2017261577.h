#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3878351788;
struct t3878351788_marshaled;

#include "t3076083828.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2017261577  : public t3076083828
{
public:
	int32_t f0;
	float f1;
	t3878351788 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2017261577, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2017261577, f1)); }
	inline float fg1() const { return f1; }
	inline float* fag1() { return &f1; }
	inline void fs1(float value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2017261577, f2)); }
	inline t3878351788 * fg2() const { return f2; }
	inline t3878351788 ** fag2() { return &f2; }
	inline void fs2(t3878351788 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

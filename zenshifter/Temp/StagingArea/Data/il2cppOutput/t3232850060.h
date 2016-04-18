#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t284553113;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3232850060  : public t3012272455
{
public:
	t284553113 * f2;
	t284553113 * f3;
	float f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3232850060, f2)); }
	inline t284553113 * fg2() const { return f2; }
	inline t284553113 ** fag2() { return &f2; }
	inline void fs2(t284553113 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3232850060, f3)); }
	inline t284553113 * fg3() const { return f3; }
	inline t284553113 ** fag3() { return &f3; }
	inline void fs3(t284553113 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3232850060, f4)); }
	inline float fg4() const { return f4; }
	inline float* fag4() { return &f4; }
	inline void fs4(float value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

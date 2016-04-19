#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3374768914;
struct t784824784;
struct t3012675081;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3463590711  : public Il2CppObject
{
public:
	t3374768914 * f0;
	t784824784 * f1;
	t784824784 * f2;
	t3012675081 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3463590711, f0)); }
	inline t3374768914 * fg0() const { return f0; }
	inline t3374768914 ** fag0() { return &f0; }
	inline void fs0(t3374768914 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3463590711, f1)); }
	inline t784824784 * fg1() const { return f1; }
	inline t784824784 ** fag1() { return &f1; }
	inline void fs1(t784824784 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3463590711, f2)); }
	inline t784824784 * fg2() const { return f2; }
	inline t784824784 ** fag2() { return &f2; }
	inline void fs2(t784824784 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3463590711, f3)); }
	inline t3012675081 * fg3() const { return f3; }
	inline t3012675081 ** fag3() { return &f3; }
	inline void fs3(t3012675081 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3463590711, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

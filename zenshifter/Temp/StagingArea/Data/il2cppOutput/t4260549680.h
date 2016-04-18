#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4171727883;
struct t1581783753;
struct t1529064965;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4260549680  : public Il2CppObject
{
public:
	t4171727883 * f0;
	t1581783753 * f1;
	t1581783753 * f2;
	t1529064965 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4260549680, f0)); }
	inline t4171727883 * fg0() const { return f0; }
	inline t4171727883 ** fag0() { return &f0; }
	inline void fs0(t4171727883 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4260549680, f1)); }
	inline t1581783753 * fg1() const { return f1; }
	inline t1581783753 ** fag1() { return &f1; }
	inline void fs1(t1581783753 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4260549680, f2)); }
	inline t1581783753 * fg2() const { return f2; }
	inline t1581783753 ** fag2() { return &f2; }
	inline void fs2(t1581783753 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4260549680, f3)); }
	inline t1529064965 * fg3() const { return f3; }
	inline t1529064965 ** fag3() { return &f3; }
	inline void fs3(t1529064965 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4260549680, f4)); }
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

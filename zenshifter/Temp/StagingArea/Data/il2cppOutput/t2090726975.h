#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2001905178;
struct t3706928344;
struct t1751675113;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2090726975  : public Il2CppObject
{
public:
	t2001905178 * f0;
	t3706928344 * f1;
	t3706928344 * f2;
	t1751675113 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2090726975, f0)); }
	inline t2001905178 * fg0() const { return f0; }
	inline t2001905178 ** fag0() { return &f0; }
	inline void fs0(t2001905178 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2090726975, f1)); }
	inline t3706928344 * fg1() const { return f1; }
	inline t3706928344 ** fag1() { return &f1; }
	inline void fs1(t3706928344 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2090726975, f2)); }
	inline t3706928344 * fg2() const { return f2; }
	inline t3706928344 ** fag2() { return &f2; }
	inline void fs2(t3706928344 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2090726975, f3)); }
	inline t1751675113 * fg3() const { return f3; }
	inline t1751675113 ** fag3() { return &f3; }
	inline void fs3(t1751675113 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2090726975, f4)); }
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

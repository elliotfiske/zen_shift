#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3258056537;
struct t1056575496;

#include "t4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2938271131 
{
public:
	t3258056537 * f0;
	t1056575496 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2938271131, f0)); }
	inline t3258056537 * fg0() const { return f0; }
	inline t3258056537 ** fag0() { return &f0; }
	inline void fs0(t3258056537 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2938271131, f1)); }
	inline t1056575496 * fg1() const { return f1; }
	inline t1056575496 ** fag1() { return &f1; }
	inline void fs1(t1056575496 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

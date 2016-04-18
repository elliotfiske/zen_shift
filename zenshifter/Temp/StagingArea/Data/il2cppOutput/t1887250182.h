#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1887250182;
struct t464407006;

#include "t516466188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1887250182  : public t516466188
{
public:
	Il2CppObject* f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1887250182, f2)); }
	inline Il2CppObject* fg2() const { return f2; }
	inline Il2CppObject** fag2() { return &f2; }
	inline void fs2(Il2CppObject* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t1887250182_SFs
{
public:
	t1887250182 * f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1887250182_SFs, f1)); }
	inline t1887250182 * fg1() const { return f1; }
	inline t1887250182 ** fag1() { return &f1; }
	inline void fs1(t1887250182 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3407512455;
struct t817568325;
struct t180073621;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3496334252  : public Il2CppObject
{
public:
	t3407512455 * f0;
	t817568325 * f1;
	t817568325 * f2;
	t180073621 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3496334252, f0)); }
	inline t3407512455 * fg0() const { return f0; }
	inline t3407512455 ** fag0() { return &f0; }
	inline void fs0(t3407512455 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3496334252, f1)); }
	inline t817568325 * fg1() const { return f1; }
	inline t817568325 ** fag1() { return &f1; }
	inline void fs1(t817568325 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3496334252, f2)); }
	inline t817568325 * fg2() const { return f2; }
	inline t817568325 ** fag2() { return &f2; }
	inline void fs2(t817568325 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3496334252, f3)); }
	inline t180073621 * fg3() const { return f3; }
	inline t180073621 ** fag3() { return &f3; }
	inline void fs3(t180073621 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3496334252, f4)); }
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

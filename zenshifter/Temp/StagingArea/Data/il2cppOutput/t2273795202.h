#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t11523773;
struct Type_t;
struct t1616774716;
struct t1860696520;
struct Il2CppObject;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2273795202  : public Il2CppObject
{
public:

public:
};

struct t2273795202_SFs
{
public:
	t11523773* f0;
	Type_t * f1;
	t1616774716 * f2;
	t1860696520 * f3;
	Il2CppObject * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2273795202_SFs, f0)); }
	inline t11523773* fg0() const { return f0; }
	inline t11523773** fag0() { return &f0; }
	inline void fs0(t11523773* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2273795202_SFs, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2273795202_SFs, f2)); }
	inline t1616774716 * fg2() const { return f2; }
	inline t1616774716 ** fag2() { return &f2; }
	inline void fs2(t1616774716 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2273795202_SFs, f3)); }
	inline t1860696520 * fg3() const { return f3; }
	inline t1860696520 ** fag3() { return &f3; }
	inline void fs3(t1860696520 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2273795202_SFs, f4)); }
	inline Il2CppObject * fg4() const { return f4; }
	inline Il2CppObject ** fag4() { return &f4; }
	inline void fs4(Il2CppObject * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t840549387;
struct t1248186290;
struct t1248186259;
struct t118421057;
struct t2864387659;
struct t2864387628;
struct t1734622426;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t840549387  : public Il2CppObject
{
public:
	t1248186290 * f1;
	t1248186259 * f2;
	t118421057 * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t840549387, f1)); }
	inline t1248186290 * fg1() const { return f1; }
	inline t1248186290 ** fag1() { return &f1; }
	inline void fs1(t1248186290 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t840549387, f2)); }
	inline t1248186259 * fg2() const { return f2; }
	inline t1248186259 ** fag2() { return &f2; }
	inline void fs2(t1248186259 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t840549387, f3)); }
	inline t118421057 * fg3() const { return f3; }
	inline t118421057 ** fag3() { return &f3; }
	inline void fs3(t118421057 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

struct t840549387_SFs
{
public:
	t840549387 * f0;
	t2864387659 * f4;
	t2864387628 * f5;
	t1734622426 * f6;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t840549387_SFs, f0)); }
	inline t840549387 * fg0() const { return f0; }
	inline t840549387 ** fag0() { return &f0; }
	inline void fs0(t840549387 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t840549387_SFs, f4)); }
	inline t2864387659 * fg4() const { return f4; }
	inline t2864387659 ** fag4() { return &f4; }
	inline void fs4(t2864387659 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t840549387_SFs, f5)); }
	inline t2864387628 * fg5() const { return f5; }
	inline t2864387628 ** fag5() { return &f5; }
	inline void fs5(t2864387628 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t840549387_SFs, f6)); }
	inline t1734622426 * fg6() const { return f6; }
	inline t1734622426 ** fag6() { return &f6; }
	inline void fs6(t1734622426 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

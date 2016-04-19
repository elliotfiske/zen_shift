#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1809983122;
struct t3338225570;
struct t584775074;
struct t1602616627;

#include "t1270017055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2314521216  : public t1270017055
{
public:
	t1809983122* f6;
	t3338225570 * f7;
	t584775074 * f8;
	t1602616627 * f9;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2314521216, f6)); }
	inline t1809983122* fg6() const { return f6; }
	inline t1809983122** fag6() { return &f6; }
	inline void fs6(t1809983122* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2314521216, f7)); }
	inline t3338225570 * fg7() const { return f7; }
	inline t3338225570 ** fag7() { return &f7; }
	inline void fs7(t3338225570 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2314521216, f8)); }
	inline t584775074 * fg8() const { return f8; }
	inline t584775074 ** fag8() { return &f8; }
	inline void fs8(t584775074 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2314521216, f9)); }
	inline t1602616627 * fg9() const { return f9; }
	inline t1602616627 ** fag9() { return &f9; }
	inline void fs9(t1602616627 * value)
	{
		f9 = value;
		Il2CppCodeGenWriteBarrier(&f9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

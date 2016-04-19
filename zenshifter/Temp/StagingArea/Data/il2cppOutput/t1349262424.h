#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3533968274;
struct t284553113;
struct t1602616627;

#include "t3221843860.h"
#include "t339535883.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1349262424  : public t3221843860
{
public:
	int32_t f4;
	t3533968274 * f5;
	t284553113 * f6;
	t1602616627 * f7;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1349262424, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1349262424, f5)); }
	inline t3533968274 * fg5() const { return f5; }
	inline t3533968274 ** fag5() { return &f5; }
	inline void fs5(t3533968274 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1349262424, f6)); }
	inline t284553113 * fg6() const { return f6; }
	inline t284553113 ** fag6() { return &f6; }
	inline void fs6(t284553113 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1349262424, f7)); }
	inline t1602616627 * fg7() const { return f7; }
	inline t1602616627 ** fag7() { return &f7; }
	inline void fs7(t1602616627 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

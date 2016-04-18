#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t843180496;
struct t284553113;
struct t1602616627;

#include "t1270017055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2257508142  : public t1270017055
{
public:
	t843180496 * f6;
	t284553113 * f7;
	t1602616627 * f8;

public:
	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2257508142, f6)); }
	inline t843180496 * fg6() const { return f6; }
	inline t843180496 ** fag6() { return &f6; }
	inline void fs6(t843180496 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2257508142, f7)); }
	inline t284553113 * fg7() const { return f7; }
	inline t284553113 ** fag7() { return &f7; }
	inline void fs7(t284553113 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2257508142, f8)); }
	inline t1602616627 * fg8() const { return f8; }
	inline t1602616627 ** fag8() { return &f8; }
	inline void fs8(t1602616627 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t58506160;
struct String_t;
struct t1557565273;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2760016869  : public Il2CppObject
{
public:
	t58506160* f0;
	String_t* f1;
	bool f2;
	t58506160* f3;
	t1557565273 * f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2760016869, f0)); }
	inline t58506160* fg0() const { return f0; }
	inline t58506160** fag0() { return &f0; }
	inline void fs0(t58506160* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2760016869, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2760016869, f2)); }
	inline bool fg2() const { return f2; }
	inline bool* fag2() { return &f2; }
	inline void fs2(bool value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2760016869, f3)); }
	inline t58506160* fg3() const { return f3; }
	inline t58506160** fag3() { return &f3; }
	inline void fs3(t58506160* value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2760016869, f4)); }
	inline t1557565273 * fg4() const { return f4; }
	inline t1557565273 ** fag4() { return &f4; }
	inline void fs4(t1557565273 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

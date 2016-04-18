#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1159364462;
struct t2864387628;
struct t599153945;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1248186259  : public Il2CppObject
{
public:
	t1159364462 * f0;
	t2864387628 * f1;
	t2864387628 * f2;
	t599153945 * f3;
	int32_t f4;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1248186259, f0)); }
	inline t1159364462 * fg0() const { return f0; }
	inline t1159364462 ** fag0() { return &f0; }
	inline void fs0(t1159364462 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1248186259, f1)); }
	inline t2864387628 * fg1() const { return f1; }
	inline t2864387628 ** fag1() { return &f1; }
	inline void fs1(t2864387628 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1248186259, f2)); }
	inline t2864387628 * fg2() const { return f2; }
	inline t2864387628 ** fag2() { return &f2; }
	inline void fs2(t2864387628 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1248186259, f3)); }
	inline t599153945 * fg3() const { return f3; }
	inline t599153945 ** fag3() { return &f3; }
	inline void fs3(t599153945 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1248186259, f4)); }
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

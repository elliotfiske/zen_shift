#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t424554759;
struct t528648567;
struct t1251136162;

#include "t1009889163.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4281102158  : public t1009889163
{
public:
	bool f5;
	t424554759 * f6;
	t528648567 * f7;
	t1251136162 * f8;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4281102158, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4281102158, f6)); }
	inline t424554759 * fg6() const { return f6; }
	inline t424554759 ** fag6() { return &f6; }
	inline void fs6(t424554759 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t4281102158, f7)); }
	inline t528648567 * fg7() const { return f7; }
	inline t528648567 ** fag7() { return &f7; }
	inline void fs7(t528648567 * value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t4281102158, f8)); }
	inline t1251136162 * fg8() const { return f8; }
	inline t1251136162 ** fag8() { return &f8; }
	inline void fs8(t1251136162 * value)
	{
		f8 = value;
		Il2CppCodeGenWriteBarrier(&f8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

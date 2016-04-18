#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3389840957;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1384083656  : public Il2CppObject
{
public:
	t3389840957 * f2;
	bool f3;
	t3389840957 * f4;
	t3389840957 * f5;
	float f6;
	float f7;
	bool f8;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1384083656, f2)); }
	inline t3389840957 * fg2() const { return f2; }
	inline t3389840957 ** fag2() { return &f2; }
	inline void fs2(t3389840957 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1384083656, f3)); }
	inline bool fg3() const { return f3; }
	inline bool* fag3() { return &f3; }
	inline void fs3(bool value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1384083656, f4)); }
	inline t3389840957 * fg4() const { return f4; }
	inline t3389840957 ** fag4() { return &f4; }
	inline void fs4(t3389840957 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1384083656, f5)); }
	inline t3389840957 * fg5() const { return f5; }
	inline t3389840957 ** fag5() { return &f5; }
	inline void fs5(t3389840957 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1384083656, f6)); }
	inline float fg6() const { return f6; }
	inline float* fag6() { return &f6; }
	inline void fs6(float value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t1384083656, f7)); }
	inline float fg7() const { return f7; }
	inline float* fag7() { return &f7; }
	inline void fs7(float value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t1384083656, f8)); }
	inline bool fg8() const { return f8; }
	inline bool* fag8() { return &f8; }
	inline void fs8(bool value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

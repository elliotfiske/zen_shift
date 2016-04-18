#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t424554759;

#include "t1009889163.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2633302379  : public t1009889163
{
public:
	bool f5;
	t424554759 * f6;
	int32_t f7;
	int32_t f8;
	t3525329789  f9;

public:
	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2633302379, f5)); }
	inline bool fg5() const { return f5; }
	inline bool* fag5() { return &f5; }
	inline void fs5(bool value)
	{
		f5 = value;
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t2633302379, f6)); }
	inline t424554759 * fg6() const { return f6; }
	inline t424554759 ** fag6() { return &f6; }
	inline void fs6(t424554759 * value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t2633302379, f7)); }
	inline int32_t fg7() const { return f7; }
	inline int32_t* fag7() { return &f7; }
	inline void fs7(int32_t value)
	{
		f7 = value;
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t2633302379, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}

	inline static int32_t fog9() { return static_cast<int32_t>(offsetof(t2633302379, f9)); }
	inline t3525329789  fg9() const { return f9; }
	inline t3525329789 * fag9() { return &f9; }
	inline void fs9(t3525329789  value)
	{
		f9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2674726865;
struct t4012695102;

#include "t3012272455.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3741813217  : public t3012272455
{
public:
	t2674726865 * f2;
	t3525329789  f3;
	t4012695102 * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3741813217, f2)); }
	inline t2674726865 * fg2() const { return f2; }
	inline t2674726865 ** fag2() { return &f2; }
	inline void fs2(t2674726865 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3741813217, f3)); }
	inline t3525329789  fg3() const { return f3; }
	inline t3525329789 * fag3() { return &f3; }
	inline void fs3(t3525329789  value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t3741813217, f4)); }
	inline t4012695102 * fg4() const { return f4; }
	inline t4012695102 ** fag4() { return &f4; }
	inline void fs4(t4012695102 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

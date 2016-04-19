#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3533968274;

#include "t3221843860.h"
#include "t1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1270017055  : public t3221843860
{
public:
	t1862190090  f4;
	t3533968274 * f5;

public:
	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1270017055, f4)); }
	inline t1862190090  fg4() const { return f4; }
	inline t1862190090 * fag4() { return &f4; }
	inline void fs4(t1862190090  value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1270017055, f5)); }
	inline t3533968274 * fg5() const { return f5; }
	inline t3533968274 ** fag5() { return &f5; }
	inline void fs5(t3533968274 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

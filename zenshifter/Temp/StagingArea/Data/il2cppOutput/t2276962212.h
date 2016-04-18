#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1359043831;

#include "t3282346114.h"
#include "t3525329788.h"
#include "t3525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2276962212  : public t3282346114
{
public:
	t1359043831 * f41;
	t1359043831 * f42;
	t1359043831 * f43;
	float f44;
	t3525329788  f45;
	bool f46;
	t3525329789  f47;

public:
	inline static int32_t fog41() { return static_cast<int32_t>(offsetof(t2276962212, f41)); }
	inline t1359043831 * fg41() const { return f41; }
	inline t1359043831 ** fag41() { return &f41; }
	inline void fs41(t1359043831 * value)
	{
		f41 = value;
		Il2CppCodeGenWriteBarrier(&f41, value);
	}

	inline static int32_t fog42() { return static_cast<int32_t>(offsetof(t2276962212, f42)); }
	inline t1359043831 * fg42() const { return f42; }
	inline t1359043831 ** fag42() { return &f42; }
	inline void fs42(t1359043831 * value)
	{
		f42 = value;
		Il2CppCodeGenWriteBarrier(&f42, value);
	}

	inline static int32_t fog43() { return static_cast<int32_t>(offsetof(t2276962212, f43)); }
	inline t1359043831 * fg43() const { return f43; }
	inline t1359043831 ** fag43() { return &f43; }
	inline void fs43(t1359043831 * value)
	{
		f43 = value;
		Il2CppCodeGenWriteBarrier(&f43, value);
	}

	inline static int32_t fog44() { return static_cast<int32_t>(offsetof(t2276962212, f44)); }
	inline float fg44() const { return f44; }
	inline float* fag44() { return &f44; }
	inline void fs44(float value)
	{
		f44 = value;
	}

	inline static int32_t fog45() { return static_cast<int32_t>(offsetof(t2276962212, f45)); }
	inline t3525329788  fg45() const { return f45; }
	inline t3525329788 * fag45() { return &f45; }
	inline void fs45(t3525329788  value)
	{
		f45 = value;
	}

	inline static int32_t fog46() { return static_cast<int32_t>(offsetof(t2276962212, f46)); }
	inline bool fg46() const { return f46; }
	inline bool* fag46() { return &f46; }
	inline void fs46(bool value)
	{
		f46 = value;
	}

	inline static int32_t fog47() { return static_cast<int32_t>(offsetof(t2276962212, f47)); }
	inline t3525329789  fg47() const { return f47; }
	inline t3525329789 * fag47() { return &f47; }
	inline void fs47(t3525329789  value)
	{
		f47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

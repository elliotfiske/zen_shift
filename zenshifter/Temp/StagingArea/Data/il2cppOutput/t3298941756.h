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

#include "t2012396579.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3298941756  : public t2012396579
{
public:
	t1359043831 * f32;
	float f33;
	float f34;
	float f35;
	t3525329788  f36;

public:
	inline static int32_t fog32() { return static_cast<int32_t>(offsetof(t3298941756, f32)); }
	inline t1359043831 * fg32() const { return f32; }
	inline t1359043831 ** fag32() { return &f32; }
	inline void fs32(t1359043831 * value)
	{
		f32 = value;
		Il2CppCodeGenWriteBarrier(&f32, value);
	}

	inline static int32_t fog33() { return static_cast<int32_t>(offsetof(t3298941756, f33)); }
	inline float fg33() const { return f33; }
	inline float* fag33() { return &f33; }
	inline void fs33(float value)
	{
		f33 = value;
	}

	inline static int32_t fog34() { return static_cast<int32_t>(offsetof(t3298941756, f34)); }
	inline float fg34() const { return f34; }
	inline float* fag34() { return &f34; }
	inline void fs34(float value)
	{
		f34 = value;
	}

	inline static int32_t fog35() { return static_cast<int32_t>(offsetof(t3298941756, f35)); }
	inline float fg35() const { return f35; }
	inline float* fag35() { return &f35; }
	inline void fs35(float value)
	{
		f35 = value;
	}

	inline static int32_t fog36() { return static_cast<int32_t>(offsetof(t3298941756, f36)); }
	inline t3525329788  fg36() const { return f36; }
	inline t3525329788 * fag36() { return &f36; }
	inline void fs36(t3525329788  value)
	{
		f36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

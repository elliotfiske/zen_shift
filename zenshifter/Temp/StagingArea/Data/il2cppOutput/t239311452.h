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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t239311452  : public t2012396579
{
public:
	t1359043831 * f32;
	bool f33;

public:
	inline static int32_t fog32() { return static_cast<int32_t>(offsetof(t239311452, f32)); }
	inline t1359043831 * fg32() const { return f32; }
	inline t1359043831 ** fag32() { return &f32; }
	inline void fs32(t1359043831 * value)
	{
		f32 = value;
		Il2CppCodeGenWriteBarrier(&f32, value);
	}

	inline static int32_t fog33() { return static_cast<int32_t>(offsetof(t239311452, f33)); }
	inline bool fg33() const { return f33; }
	inline bool* fag33() { return &f33; }
	inline void fs33(bool value)
	{
		f33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

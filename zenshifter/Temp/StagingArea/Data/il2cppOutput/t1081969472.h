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

struct  t1081969472  : public t2012396579
{
public:
	t1359043831 * f32;
	int32_t f33;
	float f34;
	float f35;
	float f36;
	bool f37;
	int32_t f38;
	t3525329788  f39;
	t3525329788  f40;

public:
	inline static int32_t fog32() { return static_cast<int32_t>(offsetof(t1081969472, f32)); }
	inline t1359043831 * fg32() const { return f32; }
	inline t1359043831 ** fag32() { return &f32; }
	inline void fs32(t1359043831 * value)
	{
		f32 = value;
		Il2CppCodeGenWriteBarrier(&f32, value);
	}

	inline static int32_t fog33() { return static_cast<int32_t>(offsetof(t1081969472, f33)); }
	inline int32_t fg33() const { return f33; }
	inline int32_t* fag33() { return &f33; }
	inline void fs33(int32_t value)
	{
		f33 = value;
	}

	inline static int32_t fog34() { return static_cast<int32_t>(offsetof(t1081969472, f34)); }
	inline float fg34() const { return f34; }
	inline float* fag34() { return &f34; }
	inline void fs34(float value)
	{
		f34 = value;
	}

	inline static int32_t fog35() { return static_cast<int32_t>(offsetof(t1081969472, f35)); }
	inline float fg35() const { return f35; }
	inline float* fag35() { return &f35; }
	inline void fs35(float value)
	{
		f35 = value;
	}

	inline static int32_t fog36() { return static_cast<int32_t>(offsetof(t1081969472, f36)); }
	inline float fg36() const { return f36; }
	inline float* fag36() { return &f36; }
	inline void fs36(float value)
	{
		f36 = value;
	}

	inline static int32_t fog37() { return static_cast<int32_t>(offsetof(t1081969472, f37)); }
	inline bool fg37() const { return f37; }
	inline bool* fag37() { return &f37; }
	inline void fs37(bool value)
	{
		f37 = value;
	}

	inline static int32_t fog38() { return static_cast<int32_t>(offsetof(t1081969472, f38)); }
	inline int32_t fg38() const { return f38; }
	inline int32_t* fag38() { return &f38; }
	inline void fs38(int32_t value)
	{
		f38 = value;
	}

	inline static int32_t fog39() { return static_cast<int32_t>(offsetof(t1081969472, f39)); }
	inline t3525329788  fg39() const { return f39; }
	inline t3525329788 * fag39() { return &f39; }
	inline void fs39(t3525329788  value)
	{
		f39 = value;
	}

	inline static int32_t fog40() { return static_cast<int32_t>(offsetof(t1081969472, f40)); }
	inline t3525329788  fg40() const { return f40; }
	inline t3525329788 * fag40() { return &f40; }
	inline void fs40(t3525329788  value)
	{
		f40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

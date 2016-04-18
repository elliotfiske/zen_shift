#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t955670625;
struct t3221843860;

#include "t2012396579.h"
#include "t132635209.h"
#include "t3525329789.h"
#include "t1600081545.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3282346114  : public t2012396579
{
public:
	int32_t f31;
	t3525329789  f32;
	t955670625 * f33;
	t3221843860 * f34;
	t1600081545  f35;
	t3525329789  f36;
	t3525329789  f37;

public:
	inline static int32_t fog31() { return static_cast<int32_t>(offsetof(t3282346114, f31)); }
	inline int32_t fg31() const { return f31; }
	inline int32_t* fag31() { return &f31; }
	inline void fs31(int32_t value)
	{
		f31 = value;
	}

	inline static int32_t fog32() { return static_cast<int32_t>(offsetof(t3282346114, f32)); }
	inline t3525329789  fg32() const { return f32; }
	inline t3525329789 * fag32() { return &f32; }
	inline void fs32(t3525329789  value)
	{
		f32 = value;
	}

	inline static int32_t fog33() { return static_cast<int32_t>(offsetof(t3282346114, f33)); }
	inline t955670625 * fg33() const { return f33; }
	inline t955670625 ** fag33() { return &f33; }
	inline void fs33(t955670625 * value)
	{
		f33 = value;
		Il2CppCodeGenWriteBarrier(&f33, value);
	}

	inline static int32_t fog34() { return static_cast<int32_t>(offsetof(t3282346114, f34)); }
	inline t3221843860 * fg34() const { return f34; }
	inline t3221843860 ** fag34() { return &f34; }
	inline void fs34(t3221843860 * value)
	{
		f34 = value;
		Il2CppCodeGenWriteBarrier(&f34, value);
	}

	inline static int32_t fog35() { return static_cast<int32_t>(offsetof(t3282346114, f35)); }
	inline t1600081545  fg35() const { return f35; }
	inline t1600081545 * fag35() { return &f35; }
	inline void fs35(t1600081545  value)
	{
		f35 = value;
	}

	inline static int32_t fog36() { return static_cast<int32_t>(offsetof(t3282346114, f36)); }
	inline t3525329789  fg36() const { return f36; }
	inline t3525329789 * fag36() { return &f36; }
	inline void fs36(t3525329789  value)
	{
		f36 = value;
	}

	inline static int32_t fog37() { return static_cast<int32_t>(offsetof(t3282346114, f37)); }
	inline t3525329789  fg37() const { return f37; }
	inline t3525329789 * fag37() { return &f37; }
	inline void fs37(t3525329789  value)
	{
		f37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

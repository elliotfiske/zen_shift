#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1384083656;

#include "t2276962212.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2677370118  : public t2276962212
{
public:
	t1384083656 * f48;

public:
	inline static int32_t fog48() { return static_cast<int32_t>(offsetof(t2677370118, f48)); }
	inline t1384083656 * fg48() const { return f48; }
	inline t1384083656 ** fag48() { return &f48; }
	inline void fs48(t1384083656 * value)
	{
		f48 = value;
		Il2CppCodeGenWriteBarrier(&f48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

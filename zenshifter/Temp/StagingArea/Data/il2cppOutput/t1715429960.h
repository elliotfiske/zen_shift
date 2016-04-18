#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1384083656;

#include "t712215810.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1715429960  : public t712215810
{
public:
	t1384083656 * f53;

public:
	inline static int32_t fog53() { return static_cast<int32_t>(offsetof(t1715429960, f53)); }
	inline t1384083656 * fg53() const { return f53; }
	inline t1384083656 ** fag53() { return &f53; }
	inline void fs53(t1384083656 * value)
	{
		f53 = value;
		Il2CppCodeGenWriteBarrier(&f53, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct MethodInfo_t;

#include "t4168026055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4082879251  : public t4168026055
{
public:
	MethodInfo_t * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4082879251, f2)); }
	inline MethodInfo_t * fg2() const { return f2; }
	inline MethodInfo_t ** fag2() { return &f2; }
	inline void fs2(MethodInfo_t * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

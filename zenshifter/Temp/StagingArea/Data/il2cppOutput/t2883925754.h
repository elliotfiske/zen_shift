#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t1754160521.h"
#include "t46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2883925754  : public t1754160521
{
public:
	t46221527  f1;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2883925754, f1)); }
	inline t46221527  fg1() const { return f1; }
	inline t46221527 * fag1() { return &f1; }
	inline void fs1(t46221527  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3959431103;
struct String_t;
struct Type_t;

#include "t3374395064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t920637194  : public t3374395064
{
public:
	t3959431103 * f1;
	String_t* f2;
	Type_t * f3;

public:
	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t920637194, f1)); }
	inline t3959431103 * fg1() const { return f1; }
	inline t3959431103 ** fag1() { return &f1; }
	inline void fs1(t3959431103 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t920637194, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t920637194, f3)); }
	inline Type_t * fg3() const { return f3; }
	inline Type_t ** fag3() { return &f3; }
	inline void fs3(Type_t * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

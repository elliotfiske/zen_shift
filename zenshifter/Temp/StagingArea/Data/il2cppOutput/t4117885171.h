﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Type_t;
struct String_t;
struct MethodInfo_t;
struct t1668237648;

#include "t4014882752.h"
#include "t1168020927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4117885171 
{
public:
	Type_t * f0;
	Type_t * f1;
	String_t* f2;
	MethodInfo_t * f3;
	MethodInfo_t * f4;
	MethodInfo_t * f5;
	int32_t f6;
	t1668237648* f7;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4117885171, f0)); }
	inline Type_t * fg0() const { return f0; }
	inline Type_t ** fag0() { return &f0; }
	inline void fs0(Type_t * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4117885171, f1)); }
	inline Type_t * fg1() const { return f1; }
	inline Type_t ** fag1() { return &f1; }
	inline void fs1(Type_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4117885171, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t4117885171, f3)); }
	inline MethodInfo_t * fg3() const { return f3; }
	inline MethodInfo_t ** fag3() { return &f3; }
	inline void fs3(MethodInfo_t * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t4117885171, f4)); }
	inline MethodInfo_t * fg4() const { return f4; }
	inline MethodInfo_t ** fag4() { return &f4; }
	inline void fs4(MethodInfo_t * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t4117885171, f5)); }
	inline MethodInfo_t * fg5() const { return f5; }
	inline MethodInfo_t ** fag5() { return &f5; }
	inline void fs5(MethodInfo_t * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t4117885171, f6)); }
	inline int32_t fg6() const { return f6; }
	inline int32_t* fag6() { return &f6; }
	inline void fs6(int32_t value)
	{
		f6 = value;
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t4117885171, f7)); }
	inline t1668237648* fg7() const { return f7; }
	inline t1668237648** fag7() { return &f7; }
	inline void fs7(t1668237648* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

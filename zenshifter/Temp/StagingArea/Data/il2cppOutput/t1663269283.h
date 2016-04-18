#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t31172966;
struct MemberInfo_t;
struct MethodInfo_t;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1663269283  : public Il2CppObject
{
public:
	Il2CppObject* f0;
	MemberInfo_t * f1;
	int32_t f2;
	MethodInfo_t * f3;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1663269283, f0)); }
	inline Il2CppObject* fg0() const { return f0; }
	inline Il2CppObject** fag0() { return &f0; }
	inline void fs0(Il2CppObject* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t1663269283, f1)); }
	inline MemberInfo_t * fg1() const { return f1; }
	inline MemberInfo_t ** fag1() { return &f1; }
	inline void fs1(MemberInfo_t * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1663269283, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1663269283, f3)); }
	inline MethodInfo_t * fg3() const { return f3; }
	inline MethodInfo_t ** fag3() { return &f3; }
	inline void fs3(MethodInfo_t * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

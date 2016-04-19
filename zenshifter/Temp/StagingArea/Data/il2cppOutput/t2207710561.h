#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t3525329789.h"
#include "t3564026123.h"
#include "t3563605141.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2207710561 
{
public:
	t3525329789  f0;
	t3525329789  f1;
	double f2;
	double f3;
	int32_t f4;
	int32_t f5;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2207710561, f0)); }
	inline t3525329789  fg0() const { return f0; }
	inline t3525329789 * fag0() { return &f0; }
	inline void fs0(t3525329789  value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2207710561, f1)); }
	inline t3525329789  fg1() const { return f1; }
	inline t3525329789 * fag1() { return &f1; }
	inline void fs1(t3525329789  value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2207710561, f2)); }
	inline double fg2() const { return f2; }
	inline double* fag2() { return &f2; }
	inline void fs2(double value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2207710561, f3)); }
	inline double fg3() const { return f3; }
	inline double* fag3() { return &f3; }
	inline void fs3(double value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2207710561, f4)); }
	inline int32_t fg4() const { return f4; }
	inline int32_t* fag4() { return &f4; }
	inline void fs4(int32_t value)
	{
		f4 = value;
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t2207710561, f5)); }
	inline int32_t fg5() const { return f5; }
	inline int32_t* fag5() { return &f5; }
	inline void fs5(int32_t value)
	{
		f5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vector3Anim
struct t2207710561_marshaled
{
	t3525329789_marshaled f0;
	t3525329789_marshaled f1;
	double f2;
	double f3;
	int32_t f4;
	int32_t f5;
};

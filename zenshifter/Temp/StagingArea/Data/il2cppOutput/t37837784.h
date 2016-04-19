#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4014882752.h"
#include "t1905076713.h"
#include "t3525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t37837784 
{
public:
	int32_t f0;
	int32_t f1;
	t3525329788  f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t37837784, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t37837784, f1)); }
	inline int32_t fg1() const { return f1; }
	inline int32_t* fag1() { return &f1; }
	inline void fs1(int32_t value)
	{
		f1 = value;
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t37837784, f2)); }
	inline t3525329788  fg2() const { return f2; }
	inline t3525329788 * fag2() { return &f2; }
	inline void fs2(t3525329788  value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TouchScript.InputSources.TouchState
struct t37837784_marshaled
{
	int32_t f0;
	int32_t f1;
	t3525329788_marshaled f2;
};

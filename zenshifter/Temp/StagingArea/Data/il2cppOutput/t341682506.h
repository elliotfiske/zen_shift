#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;
struct t1006925219;

#include "t3012272455.h"
#include "t1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t341682506  : public t3012272455
{
public:
	String_t* f2;
	t1006925219 * f3;
	t1588175760  f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t341682506, f2)); }
	inline String_t* fg2() const { return f2; }
	inline String_t** fag2() { return &f2; }
	inline void fs2(String_t* value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t341682506, f3)); }
	inline t1006925219 * fg3() const { return f3; }
	inline t1006925219 ** fag3() { return &f3; }
	inline void fs3(t1006925219 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t341682506, f4)); }
	inline t1588175760  fg4() const { return f4; }
	inline t1588175760 * fag4() { return &f4; }
	inline void fs4(t1588175760  value)
	{
		f4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

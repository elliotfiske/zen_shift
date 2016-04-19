#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t503173063;
struct t4012695102;

#include "t3012272455.h"
#include "t3525329789.h"
#include "t2253632296.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1028239673  : public t3012272455
{
public:
	t3525329789  f2;
	int32_t f3;
	t503173063* f4;
	t4012695102 * f5;
	bool f6;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1028239673, f2)); }
	inline t3525329789  fg2() const { return f2; }
	inline t3525329789 * fag2() { return &f2; }
	inline void fs2(t3525329789  value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t1028239673, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t1028239673, f4)); }
	inline t503173063* fg4() const { return f4; }
	inline t503173063** fag4() { return &f4; }
	inline void fs4(t503173063* value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t1028239673, f5)); }
	inline t4012695102 * fg5() const { return f5; }
	inline t4012695102 ** fag5() { return &f5; }
	inline void fs5(t4012695102 * value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t1028239673, f6)); }
	inline bool fg6() const { return f6; }
	inline bool* fag6() { return &f6; }
	inline void fs6(bool value)
	{
		f6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

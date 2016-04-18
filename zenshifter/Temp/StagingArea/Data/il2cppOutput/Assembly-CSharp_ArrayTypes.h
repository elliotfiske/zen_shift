#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t1028239673;

#include "Il2CppArray.h"
#include "t2207710561.h"
#include "t1028239673.h"

#pragma once
struct t725361660  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t2207710561  m_Items[1];

public:
	inline t2207710561  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t2207710561 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t2207710561  value)
	{
		m_Items[index] = value;
	}
};
struct t1574612420  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1028239673 * m_Items[1];

public:
	inline t1028239673 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1028239673 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1028239673 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

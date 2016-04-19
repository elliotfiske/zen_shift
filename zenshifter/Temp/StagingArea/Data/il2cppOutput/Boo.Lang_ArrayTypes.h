#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


struct t3258056537;
struct t1056575496;

#include "Il2CppArray.h"
#include "t3258056537.h"
#include "t1056575496.h"

#pragma once
struct t3712336676  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t3258056537 * m_Items[1];

public:
	inline t3258056537 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t3258056537 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t3258056537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
struct t2782971609  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) t1056575496 * m_Items[1];

public:
	inline t1056575496 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline t1056575496 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, t1056575496 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

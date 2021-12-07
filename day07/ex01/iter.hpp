#ifndef _iter_
#define _iter_
#include <iostream>

template<typename T1, typename T2>
void iter(T1 *arr, T2 len, void (*func)(T1 &thing))
{
	T2 i = 0;
	while (i < len)
		func(arr[i++]);
}

#endif
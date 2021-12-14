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

//template<typename T1, typename T2>
//void iter(T1 *arr, T2 len, void (*func)(const T1 &thing))
//{
//	T2 i = 0;
//	while (i < len)
//		func(arr[i++]);
//}  //a version with the function taking t1 as a const


#endif

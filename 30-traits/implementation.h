#pragma once
#include <type_traits>

template<typename T, typename T1, typename T2, typename T3>
struct is_any_of : std::disjunction<std::is_same<T,T1>, std::is_same<T,T2>, std::is_same<T,T3>>
{
};







/*

template<typename T, typename T1, typename T2, typename T3>
struct is_any_of : std::false_type
{
};

template<typename T, typename T2, typename T3>
struct is_any_of<T,T,T2,T3> : std::true_type
{
};

template<typename T, typename T1, typename T3>
struct is_any_of<T,T1,T,T3> : std::true_type
{
};

template<typename T, typename T1, typename T2>
struct is_any_of<T,T1,T2,T> : std::true_type
{
};

*/

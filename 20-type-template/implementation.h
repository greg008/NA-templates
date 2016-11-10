#pragma once
#include <boost/optional.hpp>
#include <cstddef>
#include <utility>

template<typename T>
class container_wrapper{
public:
container_wrapper() = default;
container_wrapper(T arg) : value(std::move(arg)){   //:value(arg) - tu jest jedno kopiowanie za duzo
}
container_wrapper(const container_wrapper &) = default;//konstruktor kopiujacy
container_wrapper( container_wrapper &&) = default;//konstruktor przesuwajacy
container_wrapper & operator = (const container_wrapper &) = default;//operator  kopiujacy
container_wrapper & operator = ( container_wrapper &&) = default;//operator  przesuwajacy




std::size_t size() const{

return value.size();

}



private:
T value;


};





template<typename T>
class container_wrapper<boost::optional<T>>
{
public:
container_wrapper() = default;
container_wrapper(boost::optional<T> arg) :  _value(std::move(arg))
{
}
container_wrapper(const container_wrapper &) = default;
container_wrapper(container_wrapper &&) = default;
container_wrapper & operator=(const container_wrapper &)=default;
container_wrapper & operator=(container_wrapper &&)=default;
std::size_t size() const
{
return _value ? 1:0;
}
private:
// T _value;
boost::optional<T> _value;
};


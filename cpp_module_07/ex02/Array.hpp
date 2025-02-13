#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdexcept>

template <typename T>
class Array{
	private:
		size_t	_size;
		T*		_arr;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array<T>& rhs);

		size_t	size() const;

		Array<T>&	operator=(const Array<T>& rhs);
		T&	operator[](unsigned int n) const;
};

template <typename T>
Array<T>::Array() :_size(0){
	_arr = new T[0];
}
template <typename T>
Array<T>::Array(unsigned int n) :_size(n){
	_arr = new T[n]();
}
template <typename T>
Array<T>::Array(const Array<T>& rhs):_size(rhs.size()){
	if (this == &rhs){
		return ;
	}
	_arr = new T[_size];
	for(size_t i=0; i<rhs.size(); i++){
		_arr[i] = rhs._arr[i];
	}
}
template <typename T>
Array<T>::~Array(){
	delete[] _arr;
}

template <typename T>
size_t	Array<T>::size() const{
	return (_size);
}
template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& rhs){
	if (this == &rhs){
		return (*this);
	}
	delete[] _arr;
	_size = rhs.size();
	_arr = new T[_size];
	for(size_t i=0; i<_size; i++){
		_arr[i] = rhs._arr[i];
	}
	return (*this);
}
template <typename T>
T&	Array<T>::operator[](unsigned int n) const{
	if (_size == 0 || n > _size){
		throw(std::runtime_error("Error: Out of bound\n"));
	}
	return (_arr[n]);
}
#endif
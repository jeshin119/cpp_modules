#include <stdexcept>
#include <vector>
#include <algorithm>
#include <climits>
#include <algorithm>
#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n) : _size(n){}

Span::~Span(){}

Span::Span(const Span& rhs) : _size(rhs._size){
	_v = rhs._v;
}

void		Span::addNumber(long long num){
	if (_v.size() == _size)
		throw (std::runtime_error("Error: can't add number. it's full.\n"));
	_v.push_back(num);
}

long long	Span::shortestSpan(){
	if (_v.empty())
		throw (std::runtime_error("Error: shortestSpan: empty\n"));
	if (_v.size() == 1)
		throw (std::runtime_error("Error: shortestSpan: has only one number\n"));

	long long ret = LLONG_MAX;
	unsigned long i = -1;
	std::vector<long long> tmp(_v);
	std::sort(tmp.begin(), tmp.end());
	while (++i < tmp.size() - 1){
		ret = std::min(ret, tmp[i + 1] - tmp[i]);
	}
	return (ret);
}

long long	Span::longestSpan(){
	if (_v.empty())
		throw (std::runtime_error("Error: longestSpan: empty\n"));
	if (_v.size() == 1)
		throw (std::runtime_error("Error: longestSpan: has only one number\n"));

	std::vector<long long> tmp(_v);
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

Span&		Span::operator=(const Span& rhs){
	if (&rhs == this)
		return (*this);
	_size = rhs._size;
	_v = rhs._v;
	return (*this);
}
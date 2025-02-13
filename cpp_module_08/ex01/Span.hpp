#ifndef __SPAN_H__
#define __SPAN_H__

#include <vector>

class Span{
	public:
		Span(unsigned int n);
		~Span();
		Span(const Span& rhs);

		void		addNumber(long long num);
		template<typename InputIt>
		void		addNumber(InputIt start, InputIt end){
			_v.insert(_v.end(), start, end);
		}
		long long	shortestSpan();
		long long	longestSpan();

		Span&		operator=(const Span& rhs);
	private:
		Span();
		std::vector<long long>	_v;
		unsigned int			_size;
};

#endif
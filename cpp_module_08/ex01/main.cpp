#include <iostream>
#include <array>
#include <time.h>
#include <cstdlib>
#include "Span.hpp"

int main(){
	{
		//test1
		std::cout<<"test1\n";

		//subject test

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout<<"\n";
	}
	{
		//test2
		std::cout<<"test2\n";

		//addNumber test
		std::array<int,5> a = {-6,-3,-17,-9,-11};
		Span sp(5);
		sp.addNumber(a.begin(), a.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout<<"\n";
	}
	{
		//test3
		std::cout<<"test3\n";

		//empty span test
		Span sp(5);
		try{
			std::cout << sp.shortestSpan() << std::endl;
		}catch(std::exception& e){
			std::cout<<e.what();
		}
		try{
			std::cout << sp.longestSpan() << std::endl;
		}catch(std::exception& e){
			std::cout<<e.what();
		}
		std::cout<<"\n";
	}
	{
		//test4
		std::cout<<"test4\n";

		//size one span test
		Span sp(5);
		sp.addNumber(-2);
		try{
			std::cout << sp.shortestSpan() << std::endl;
		}catch(std::exception& e){
			std::cout<<e.what();
		}
		try{
			std::cout << sp.longestSpan() << std::endl;
		}catch(std::exception& e){
			std::cout<<e.what();
		}
		std::cout<<"\n";
	}
	{
		//test5
		std::cout<<"test5\n";

		//more number test
		Span sp(987654321);
		sp.addNumber(99999);
		sp.addNumber(0);
		sp.addNumber(0);

		srand(time(0));
		for(int i=0;i<10000;i++){
			sp.addNumber(rand()%10000);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
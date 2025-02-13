#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int main(){
	{
		//test1
		std::cout<<"test1\n";

		//성공한 경우
		std::array<int,5> a = {1,2,3,4,5};

		// std::cout<<*(std::find(a.begin(),a.end(), 5))<<"\n";
		std::cout<<*(easyfind(a, 5))<<"\n";

		//segv
		// std::cout<<*std::find(a.begin(), a.end(), 6)<<"\n";
		// std::cout<<*(easyfind(a, 6))<<"\n";
	}
		std::cout<<"\n";
	{
		//test2
		std::cout<<"test2\n";

		//없는것을 참조하려고할때

		std::vector<char> v;
		v.push_back('a');
		v.push_back('b');
		v.push_back('c');
		v.push_back('d');
		v.push_back('e');

		//segv
		// std::cout<<*std::find(v.begin(),v.end(),5)<<"\n";
		// std::cout<<*(easyfind(v,5))<<"\n";
	}
		std::cout<<"\n";
	{
		//test3
		std::cout<<"test3\n";

		std::list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		l.push_back(5);

		//segv
		// std::cout<<*std::find(l.begin(),l.end(),11116)<<"\n";
		// std::cout<<*easyfind(l,11116)<<"\n";
	}
}
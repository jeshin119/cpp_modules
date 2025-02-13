#include <iostream>
#include <list>
#include <string>
#include "MutantStack.hpp"

int main(){
	{
		//test1
		//subject test

		std::cout<<"***MutantStack***\n";
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl; mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	{
		std::cout<<"***List***\n";
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl; lst.pop_back();
		std::cout << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737); //[...] lst.push(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		// std::stack<int> s(lst);
	}
	{
		//test2
		MutantStack<std::string> ms;
		ms.push("mon");
		ms.push("tue");
		ms.push("wed");
		ms.push("thu");
		ms.push("fri");
		const MutantStack<std::string> c_ms = ms;

		//iter
		MutantStack<std::string>::iterator it = ms.begin();
		for(; it != ms.end(); it++){
			std::cout << *it<<" ";
		}
		std::cout<<"\n";

		//const_iter
		MutantStack<std::string>::const_iterator c_it = c_ms.begin();
		for(; c_it != c_ms.end(); c_it++){
			std::cout << *c_it<<" ";
		}
		std::cout<<"\n";

		//reverse_iter
		MutantStack<std::string>::reverse_iterator r_it = ms.rbegin();
		for(; r_it != ms.rend(); r_it++){
			std::cout << *r_it<<" ";
		}
		std::cout<<"\n";

		//const_reverse_iter
		MutantStack<std::string>::const_reverse_iterator cr_it = c_ms.rbegin();
		for(; cr_it != c_ms.rend(); cr_it++){
			std::cout << *cr_it<<" ";
		}
		std::cout<<"\n";
	}
}
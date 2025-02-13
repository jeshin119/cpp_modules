#include <iostream>
#include "iter.hpp"

template <typename T>
void plus(T& t){
	t++;
}

template <typename T>
void prt(T& t){
	std::cout<<t<<" ";
}

void prtInt(int& n){
	std::cout<<n<<" ";
}

int main(){
	//test1
	{
		int n[10];
		for(int i=0;i<10;i++){
			n[i]=i;
		}
		//before
		::iter(n, (size_t)10, prt<int>);
		std::cout<<"\n";

		::iter(n, (size_t)10, plus<int>);

		//after
		::iter(n, (size_t)10, prtInt);
		std::cout<<"\n";
	}
	// test2
	{
		int n[10][10];
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				n[i][j] = i*10 + j;
			}
		}
		//print the array
		::iter(n[0], (size_t)100, prt<int>);
		std::cout<<"\n";
	}	
	// test3
	{
		std::string s[5]={"mon","tue","wen","thu","fri"};
		::iter(s, 5, prt<std::string>);
		std::cout<<"\n";
	}
}
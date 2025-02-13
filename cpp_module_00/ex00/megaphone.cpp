#include <iostream>
#include <cctype>
int main(int ac, char **av){
	if (ac == 1){
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<"\n";
		return 0;
	}
	for(int i=1; av[i]!=0 ;i++){
		for(int j=0; av[i][j]!=0; j++){
			std::cout<<static_cast<char>(toupper(av[i][j]));
		}
	}
	std::cout<<"\n";
	return 0;
}
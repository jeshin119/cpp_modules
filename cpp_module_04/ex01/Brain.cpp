#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
    std::cout<<"Brain()\n";
}
Brain::Brain(const Brain& rhs){
    std::cout<<"Brain(const Brain& rhs)\n";
    _deppCopyIdeas(rhs);
}

Brain::~Brain(){
    std::cout<<"~Brain()\n";
}

void	Brain::setIdea(int i, const std::string& idea){
	_ideas[i]=idea;
}

void	Brain::prtIdeas(){
	for(int i=0;i<100;i++){
		if(_ideas[i].size()){
			std::cout<<"Ideas["<<i<<"]: "<<_ideas[i]<<"\n";
		}
	}
}

Brain& Brain::operator=(const Brain& rhs){
    std::cout<<"operator=(const Brain& rhs)\n";
    if (this==&rhs)
        return (*this);
    _deppCopyIdeas(rhs);
    return (*this);
}

void Brain::_deppCopyIdeas(const Brain& rhs){
    for(int i=0;i<100;i++){
        if (rhs._ideas[i].size()){
            _ideas[i] = rhs._ideas[i];
        }
    }
}
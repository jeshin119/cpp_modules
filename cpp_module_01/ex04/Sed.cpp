#include "Sed.hpp"

Sed::Sed(){}
Sed::~Sed(){}

void	Sed::sed(){
	_setInfile();
	_setString();
	_setOutfile();
	_substitude();
}

void	Sed::_setInfile(){
	std::cout<<"Put infile name\n>> ";
	std::getline(std::cin,_infileName);
	if (std::cin.eof())
		throw (std::runtime_error("EOF"));
	_inFile.open(_infileName);
	if (!_inFile)
		throw (std::runtime_error("Open Infile"));
}

void	Sed::_setOutfile(){
	_outfileName = (_infileName + ".replace");
	_outFile.open(_outfileName);
	if (!_outFile){
		throw (std::runtime_error("Open Outfile"));
	}
}

void	Sed::_setString(){
	std::cout<<"Put s1\n>> ";
	std::getline(std::cin,_s1);
	if (_s1.size() == 0)
		throw (std::runtime_error("EMPTY S1"));
	if (std::cin.eof())
		throw (std::runtime_error("EOF"));
	std::cout<<"Put s2\n>> ";
	std::getline(std::cin,_s2);
	if (std::cin.eof())
		throw (std::runtime_error("EOF"));
}

void	Sed::_substitude(){
	std::string line;
	std::string::size_type pos;

	while (getline(_inFile,line)){
		pos = 0;
		while ((pos=line.find(_s1,pos))!=std::string::npos){
			line.erase(pos,_s1.length());
			line.insert(pos,_s2);
			pos+=_s2.length();
		}
		_outFile<<line<<"\n";
	}
}

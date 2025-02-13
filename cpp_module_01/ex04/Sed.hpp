#ifndef __SED_H__
#define __SED_H__

#include <string>
#include <iostream>
#include <fstream>

class Sed{
public:
	Sed();
	~Sed();
	void	sed();
private:
	std::string		_infileName;
	std::string		_outfileName;
	std::string		_s1;
	std::string		_s2;
	std::ifstream	_inFile;	
	std::ofstream	_outFile;	

	void	_substitude();
	void	_setInfile();
	void	_setOutfile();
	void	_setString();
};
#endif
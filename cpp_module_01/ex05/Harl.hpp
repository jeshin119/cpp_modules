#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>
#include <string>

class Harl{
public:
	Harl();
	~Harl();
	void	complain(std::string level);
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};
#endif
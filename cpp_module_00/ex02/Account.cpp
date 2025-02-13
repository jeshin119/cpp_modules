#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( void ){}
Account::Account( int initial_deposit ){
	_displayTimestamp();
	std::cout<<"index:"<<_nbAccounts<<";";
	std::cout<<"amount:"<<initial_deposit<<";";
	std::cout<<"created"<<"\n";
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount+=_amount;
	_nbDeposits=0;
	_nbWithdrawals=0;
}
Account::~Account( void ){
	_displayTimestamp();
	std::cout<<"index"<<_accountIndex<<";";
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"closed"<<"\n";
}
int Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout<<"accounts:"<<Account::getNbAccounts()<<";";
	std::cout<<"total:"<<Account::getTotalAmount()<<";";
	std::cout<<"deposits:"<<Account::getNbDeposits()<<";";
	std::cout<<"withdrawals:"<<Account::getNbWithdrawals()<<"\n";
}
void	Account::_displayTimestamp( void ){
	std::time_t now=std::time(0);
	std::tm *ltm=std::localtime(&now);
	std::cout<<"[";
	std::cout<<ltm->tm_year+1900;
	std::cout<<std::setfill('0')<<std::setw(2)<<ltm->tm_mon;
	std::cout<<ltm->tm_mday;
	std::cout<<"_";
	std::cout<<ltm->tm_hour;
	std::cout<<ltm->tm_min;
	std::cout<<ltm->tm_sec;
	std::cout<<"] ";
}
void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	std::cout<<"deposit:"<<deposit<<";";
	_amount+=deposit;_totalAmount+=deposit;_nbDeposits++;_totalNbDeposits++;
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"nb_deposits:"<<_nbDeposits<<"\n";
}
bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"p_amount:"<<_amount<<";";
	std::cout<<"withdrawal:";
	if (_amount < withdrawal){
		std::cout<<"refused\n";
		return false;
	}
	std::cout<<withdrawal<<";";
	_amount-=withdrawal;_totalAmount-=withdrawal;_nbWithdrawals++;_totalNbWithdrawals++;
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"nb_withdrawals:"<<_nbWithdrawals<<"\n";
	return true;
}
int		Account::checkAmount( void ) const{
	return _amount;
}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";";
	std::cout<<"amount:"<<_amount<<";";
	std::cout<<"deposits:"<<_nbDeposits<<";";
	std::cout<<"withdrawals:"<<_nbWithdrawals<<"\n";
}
#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit) {
  Account::_accountIndex = _nbAccounts;
  Account::_amount = initial_deposit;
  Account::_nbDeposits = 0;
  Account::_nbWithdrawals = 0;
  Account::_nbAccounts += 1;
  Account::_totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_accountIndex << ";amount:" <<
  Account::_amount << ";created" << std::endl;
  return ;
}

Account::~Account(void)
{
  Account::_nbAccounts -= 1;
  Account::_totalAmount -= Account::_amount;
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_accountIndex << ";amount:" <<
  Account::_amount << ";closed" << std::endl;
  return;
}

int Account::getNbAccounts(void) {
  return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
  return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
  return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
  return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
  Account::_amount += deposit;
  std::cout << ";deposit:" << deposit << ";amount:" << Account::_amount;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits += 1;
  Account::_nbDeposits += 1;
  std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
  if (withdrawal > Account::_amount)
  {
    std::cout << ";withdrawal:refused" << std::endl;
    return (false);
  }
  std::cout << ";withdrawal:" << withdrawal;
  Account::_amount -= withdrawal;
  Account::_nbWithdrawals += 1;
  std::cout << ";amount:" << Account::_amount << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals += 1;
  return (true);
}

int Account::checkAmount(void) const {
  return (Account::_amount);
}

void Account::displayStatus(void) const {
  Account::_displayTimestamp();
  std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
  time_t      actualTime = time(NULL);
  struct tm   *thisTime = localtime(&actualTime);
  char        timestamp[32];
  strftime(timestamp, sizeof(timestamp), "[%Y%d%m_%H%M%S] ", thisTime);
  std::cout << timestamp;
}

int             Account::_nbAccounts = 0;
int             Account::_totalAmount = 0;
int             Account::_totalNbDeposits = 0;
int             Account::_totalNbWithdrawals = 0;

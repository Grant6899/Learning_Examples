/*************************************************************************
	> File Name: bankaccount.h
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 22:49:25 2017
 ************************************************************************/

#ifndef _BANKACCOUNT_H
#define _BANKACCOUNT_H

#include<iostream>

class BankAccount{
private:    
    std::string Depositor_Name_;
    std::string Account_Num_;
    double balance_;

    // No need to declare default ctor, cp ctor, assignment overloading and dtor
    // Because complier can create them and shallow copy works for this class
public:
    BankAccount(std::string Depositor_Name, std::string Account_Num, double balance);
    void Display();
    void Deposit(double depo);
    void Withdraw(double withdraw);

};


#endif

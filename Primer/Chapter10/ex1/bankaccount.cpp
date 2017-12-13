/*************************************************************************
	> File Name: bankaccount.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 22:58:58 2017
 ************************************************************************/

#include<iostream>
#include"bankaccount.h"

using namespace std;

BankAccount::BankAccount(std::string Depositor_Name, std::string Account_Num, double balance) : Depositor_Name_(Depositor_Name), Account_Num_(Account_Num), balance_(balance){    
};

void BankAccount::Display(){
    cout<<"Account Info:\n";
    cout<<"    Depositor Name: "<<Depositor_Name_<<endl;
    cout<<"    Account Number: "<<Account_Num_<<endl;
    cout<<"    Balance: $"<<balance_<<endl;
}

void BankAccount::Deposit(double depo){
    balance_+=depo;
}

void BankAccount::Withdraw(double withdraw){
    balance_-=withdraw;
}

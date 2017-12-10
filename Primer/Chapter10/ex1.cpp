/*************************************************************************
	> File Name: ex1.cpp
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 23:05:25 2017
 ************************************************************************/

#include<iostream>
#include"bankaccount.h"

using namespace std;


int main(){
    BankAccount* bp = new BankAccount("Grant", "001", 0);
    cout<<"Open an account:\n";
    bp->Display();
    cout<<"Deposit $100:\n";
    bp->Deposit(100);
    bp->Display();
    cout<<"Withdraw $40:\n";
    bp->Withdraw(40);
    bp->Display();

    return 0;
}

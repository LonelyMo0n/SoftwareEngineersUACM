//============================================================================
// Name        : PracticaHerencia.cpp
// Author      : Acxel Martin Elizalde Camacho
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;


class Person{
private:
    string name, ap1, ap2;

public:
    Person(){}
    Person(string nam, string ap_1, string ap_2){
        this->name=nam;
        this->ap1=ap_1;
        this->ap2=ap_2;
    }


    string getName(){
        return this->name;
    }
    string getAp1(){
        return this->ap1;
    }
    string getAp2(){
        return this->ap2;
    }

    //TODO: print info by class person
        void printInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"First surname: "<<ap1<<endl;
            cout<<"Double sourname: "<<ap2<<endl;
        }
};

class Account : Person{
private:
    string numAccount;
    float balance, minBalance;
public:
    Account(){}
    Account(string name, string ap1, string ap2, string numAcc, float bal, float minbal)
    : Person(name, ap1, ap2){
        this->numAccount=numAcc;
        this->balance=bal;
        this->minBalance=minbal;
    }
    void printInfo(){
            cout<<"Name: "<<Person::getName()<<endl;
            cout<<"First surname: "<<Person::getAp1()<<endl;
            cout<<"Double surname: "<<Person::getAp2()<<endl;
            cout<<"Number Account: "<<numAccount<<endl;
            cout<<"Balance: "<<minBalance<<endl;
            cout<<"Minimum balance: "<<minBalance<<endl;
        }

    bool withdraw(double amount){
    		balance -= amount;
    		cout<<"Retirando fondos: "<<amount<<endl;
    	}

    	bool deposit(double amount){
    		balance += amount;
    		cout<<"Deposito de fondos: "<<amount<<endl;
    	}
};

class SavingAccount : Account{
private:
	float interesMensual;


};













int main(){


    Person p1("Acxel", "Elizalde", "Camacho");
    p1.printInfo();



    return 0;
}

#include<iostream>
#include<string>

using namespace std;


struct AccountData
{

    string name;
    int acc;
    float bal;
    float withdro;
    float depo;

    void deposit()
    {
        bal += depo;
        cout << "Amount Deposited Successfully." << endl;
    }

    void withdraw()
    {
        if(withdro > bal)
        {
            cout << "Insufficient Balance." << endl;
        }

        else
        {
            bal -= withdro;
            cout << "Amount Withdrawn Successfully." << endl;
        }
    }

    void display()
    {
        cout << "Account Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc << endl;
        cout << "Balance: " << bal << endl;
    }

};


int main()
{
    AccountData p1;

    getline(cin,p1.name);
    cin >> p1.acc;
    cin >> p1.bal;
    cin >> p1.withdro;
    cin >> p1.depo;

    p1.deposit();
    p1.withdraw();
    p1.display();



}
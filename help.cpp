#include<iostream>
using namespace std;

struct Data
{

    string name;
    int accno;
    int exp;
    int basic;

    void increment()
    {
        if(exp>=10)
        {
            basic = basic + basic*0.1;
        }

        else if (exp>=5 and exp <=9)
        {
            basic = basic + basic*0.05;
        }

        else
        {
            basic = basic + basic*0.02;
        }
    }

    void display()
    {
        cout << basic << endl;
    }



};


int main()
{
    struct Data emp[100];

    int n ;
    cin >> n;

    for(int i = 0 ; i<n ; i++)
    {
        cin >> emp[i].name >> emp[i].accno >> emp[i].exp >> emp[i].basic;
    }

    for(int i = 0 ; i<n ; i++)
    {
        emp[i].increment();
        emp[i].display();
    }


}
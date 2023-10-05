#include<iostream>

using namespace std;

class Sale
{

    float tax;
    float cost;
    float total;

    public:

    Sale(){

        tax = 0.5;
        cin >> cost;

        calculate();
        display();

    }

    void calculate()
    {
        total = cost + (cost*tax);
    }

    void display()
    {
        cout << "Tax is " << tax*100 << endl;
        cout << "Total is " << total << endl;
    }

};


int main()
{
    Sale s1;

}
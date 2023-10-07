#include<iostream>

using namespace std;

class Complex
{

    int real;
    int imag;

    public:

    void get_data()
    {
        cout << "Enter Real Part:";
        cin >> real;

        cout << "Enter Imaginary Part: ";
        cin >> imag;
    }

    Complex operator +(Complex c) 
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display_data()
    {
        cout << real << " + " << imag << "i " << endl;
    }

};

int main()
{
    Complex c1,c2,c3;

    c1.get_data();
    c2.get_data();

    c3 = c1+c2;

    c3.display_data();

}
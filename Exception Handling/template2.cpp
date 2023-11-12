#include<iostream>

using namespace std;

template <typename X>

class Weight
{
    public:

    X kg;

    void setdata(X inp)
    {
        kg = inp;
    }

    void showdata()
    {
        cout << "Weight: " << kg << endl;
    }

};

int main()
{
    // int 
    Weight<int>obj1;
    obj1.setdata(500);
    obj1.showdata();

    //double
    Weight<double>obj2;
    obj2.setdata(69.6969);
    obj2.showdata();

    //char
    Weight<char>obj3;
    obj3.setdata('X');
    obj3.showdata();

}
#include<iostream>

using namespace std;

class Weight
{
    private:
    int kg;

    public:

    Weight()
    {
        kg = 0;
    }

    Weight(int x)
    {
        kg = x;
    }

    void printdata()
    {
        cout << "Weight in KG is: " << kg << endl;
    }

    void operator ++()
    {
        ++kg;
    }

    void operator ++(int)
    {
        kg++;
    }

    void operator --()
    {
        --kg;
    }
    
    void operator --(int)
    {
        kg--;
    }
};


int main()
{

    Weight obj;

    obj++; // obj.operator --();
    obj.printdata();
    ++obj;
    obj.printdata();

    obj--;
    obj.printdata();
    --obj;
    obj.printdata();

}
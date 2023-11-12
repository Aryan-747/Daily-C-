#include<iostream>

using namespace std;

template <class ABC>

ABC great(ABC n1 , ABC n2)
{
    if(n1>n2)
    {
        return n1;
    }

    else
    {
        return n2;
    }

}

int main()
{
    cout << great(10,15) << endl;
    cout << great(5.99,5.98) << endl;

}
#include<iostream>

using namespace std;

template <typename t1>

class arrayer
{

    public:
    
    int n;

    void opt()
    {   
        t1 a[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void opt2()
    {
        t1 b[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> b[i];
        }

        for(int i=0 ; i<n ; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }   

};



int main()
{
    arrayer <int> obj1;
    arrayer <string> obj2;

    cin >> obj1.n;
    obj2.n = obj1.n;
    obj1.opt();
    obj2.opt2();
}
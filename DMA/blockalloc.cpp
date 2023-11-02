#include<iostream>

using namespace std;

int main()
{
    int *ptr = new int[1000];

    int i=0;

    int test;

    while(1)
    {
    cin >> test;
    if(test<0)
    {
        break;
    }
    ptr[i] = test;
    i++;
    }

    for(int k=0 ; k<i ; k++)
    {
        cout << ptr[k] << " ";
    }

    cout << endl;

    delete []ptr;
}
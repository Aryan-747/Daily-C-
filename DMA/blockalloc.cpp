#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int *ptr = NULL;

    ptr = new int[10];

    for(int i=0 ; i<n ; i++)
    {
        cin >> ptr[i];
    }

    cout << sizeof(ptr) << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;

    delete []ptr;
}
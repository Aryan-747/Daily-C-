#include<iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;


    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    
    int enter;

    cin >> enter;

    int pos;

    cin >> pos;

    n++;

    for(int i=pos; i<n ; i++)
    {
        a[i+1] = a[i];
    }

    a[pos-1] = enter;

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }



}
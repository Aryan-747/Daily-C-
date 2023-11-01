#include<iostream>

using namespace std;


void fibo(int n)
{

    int n1 =0;
    int n2 =1;

    int i= 0;

    cout << 0 << " ";
    while(i<n-1)
    {

        int next = n1 + n2;
        cout << next << " ";
        n2 = n1;
        n1 = next;
        i++;
    }

}


int main()
{

    int n;

    cin >> n;

    fibo(n);

}
#include<iostream>

using namespace std;

int main()
{
    int *pointer;

    pointer = new int(55);

    cout << pointer << endl;
    cout << *pointer << endl;

    delete pointer;

}
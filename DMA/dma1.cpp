#include<iostream>

using namespace std;

int main()
{
    int *pointer = NULL;

    pointer = new int(500);

    cout << pointer << endl;
    cout << *pointer << endl;

    delete pointer;

}
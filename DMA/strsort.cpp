#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string names[n];

    for(int i=0 ; i<n ;i++)
    {
        cin >> names[i];
    }


    for(int i=1 ; i<n ; i++)
    {
        string key = names[i];
        int j = i-1;

        while(j>=0 && names[j]>key)
        {
            names[j+1] = names[j];
            j--;
        }
        names[j+1] = key;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << names[i] << " ";
    }
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string name;
    string gender;

    cin >> name;
    cin >> gender;

    transform(name.begin(), name.end() , name.begin(), ::toupper);

    transform(gender.begin(), gender.end() , gender.begin() , ::toupper);

    cout << name << endl;
    cout << gender << endl;

}
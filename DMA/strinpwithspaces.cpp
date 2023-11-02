#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{   
    char str[1000];
    
    cin.getline(str,1000);

    for(int k=0 ; k<strlen(str); k++)
    {
        cout << str[k];
    }
}
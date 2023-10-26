#include<iostream>
#include<cstring>

using namespace std;


bool ispallindrome(char s[],int length)
{
    char check[100];
    int count = 0;

    for(int i=0 ; i<length ; i++)
    {
        check[i] = s[i];
    }

    for(int i=0 ; i<length ; i++)
    {
        if(check[i] == s[i])
        {
            count++;
        }
    }

    if(count == length)
    {
        return true;
    }

    else
    {
        return false;
    }

}


void reverse(char s[], int length)
{

}


int main()
{
    char str[100];

    cin.getline(str,sizeof(str));

    for(int k=0 ; k<strlen(str) ; k++)
    {
        cout << str[k];
    }

    int length = strlen(str);

}
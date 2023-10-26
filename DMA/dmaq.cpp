#include<iostream>
#include<cstring>

using namespace std;


bool ispallindrome(char s[],int length)
{
    char check[100];
    int count = 0;

    int k = length-1;
    
    for(int i=0 ; i<length ; i++)
    {   
        check[i] = s[k];
        k--;
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
    
    cout << "Reversed String: ";
    for(int i=length-1 ; i>=0 ; i--)
    {
        cout << s[i];
    }
    cout << endl;

}


int main()
{
    char str[100];

    cin.getline(str,sizeof(str));

    int length = strlen(str);

    bool checker;

    checker = ispallindrome(str,length);

    if(checker)
    {
        cout << "Entered String is a Palindrome." << endl;
    }

    else
    {
        cout << "Entered String is not a Palindrome." << endl;
    }

    reverse(str,length);

}
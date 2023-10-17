#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{

    string str;
    
    int count = 1;
    int wc = 0;
    int check = 0;

    getline(cin,str);

    string temp;

    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    cout << "Total Number Of Words: " << count << endl;

    while(count>0)
    {   
    int i = 0;
    for(; i<str.length() ; i++)
    {
        if(str[i] == ' ')
        {
            break;
        }
        
        temp = temp + str[i];
    }

    cout << temp << " " << wc << endl;

    temp = "";
    wc = 0;

    count--;
    }


}
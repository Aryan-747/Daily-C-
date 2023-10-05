#include<iostream>
#include<string>

using namespace std;

class StringManipulator{

    public: 
    
    string str;

};


int main()
{

    StringManipulator s1;

    getline(cin, s1.str);

    for(int i = 0 ; s1.str[i] != '\0' ; i ++)
    {
        cout << s1.str[i] << endl;
    }

}
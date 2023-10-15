#include<iostream>
#include<string>

using namespace std;

void count_occurence(string str)
{
    int count = 0;
    string word = "";
    int demo = 0;
    int chc = 0;

    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            demo++;
        }
    }

    while(demo)
    {

    for(int i = chc ; i<str.length() ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n')
        {   
            chc = i+1;
            break;
        }

        word = word + str[i];
    }

    bool wordfound = true;

    for(int i=0 ; i<str.length() ; i++)
    {
        for(int j=0 ; j<word.length() ; j++)
        {
            if(word[j] != str[i+j])
            {
                wordfound = false;
                break;
            }
        }

        if(wordfound == true)
        {
            count++;
        }
    }

    cout << "Occurence of word " << endl;

    cout << word << " " <<count << endl;

    word = "";

    wordfound = true;
  
    demo--;
    }


}


int main()
{
    string str;

    getline(cin,str);

    count_occurence(str);


}
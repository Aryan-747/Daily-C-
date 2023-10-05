#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    fstream myf;

    myf.open("Aryan.txt",ios::in);

    if(myf.is_open())
    {   
        string line;

        cout << endl << "File Opened Successfully." << endl << endl;

        while(getline(myf,line))
        {
            cout << line << endl;
        }

        myf.close();

        cout << endl <<"File Closed Successfully." << endl;
    }



}
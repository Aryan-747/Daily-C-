#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream myfile;

    myfile.open("Aryan.txt",ios::out); // Writing

    if(myfile.is_open())
    {
        cout << "File Opened Successfully" << endl;

        myfile << "Hello World" << endl;
        myfile << "Hello world123" << endl; 

        myfile.close();
        cout << "File Closed Successfully" << endl;
    }

    myfile.open("Aryan.txt",ios::app); // Appending

    if(myfile.is_open())
    {
        cout << "File Opened Successfully" << endl;

        myfile << "This has been appended." << endl;

        myfile.close();
        cout << "File Closed Succesfully" << endl;
    }
    
}
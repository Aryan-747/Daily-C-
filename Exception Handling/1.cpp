#include<iostream>

using namespace std;

int main()
{

    int nume;
    int dene;

    cin >> nume >> dene;

    try
    {
        if(dene == 0)
        {
            throw(dene);
        }

        else
        {
            int res = nume/dene;

            cout << res << endl;
        }
    }

    catch(int)
    {
        cout << "Divison By Zero Error Encountered." << endl;
    }

}
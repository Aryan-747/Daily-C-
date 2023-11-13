#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> a1(10,69);

    cout << "Front: " << a1.front() << endl;
    cout << "Back: " << a1.back() << endl;
    /*
    cout << "Size: " << a1.size() << endl;
    cout << "Capacity: " << a1.capacity() << endl;
    */
    a1.push_back(54);

    cout << "Size: " << a1.size() << endl;
    cout << "Capacity: " << a1.capacity() << endl;

    cout << "Front: " << a1.front() << endl;
    cout << "Back: " << a1.back() << endl;


}
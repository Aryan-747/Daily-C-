#include<iostream>
#include<vector>
#define MAX 100
using namespace std;

int main()
{   
    int count , sum = 0;

    vector<int>  arr(MAX);
    cout << "Enter the number of elements:" << endl;
    cin >> count;

    for(int i = 0 ; i<count;i++){
        arr[i] = i;
        sum += arr[i];
    }

    cout << "Array sum: " << sum << endl;

}
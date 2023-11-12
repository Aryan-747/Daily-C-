#include<iostream>
#include<queue>

using namespace std;

template <class T>

class Q
{
    public:

    queue<int> q1;
    queue<double> q2;

    void showq1( queue <int > q1)
    {
        queue<int> temp = q1;

        cout << "Queue Elements: ";
        while(!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    void showq2( queue <double> q2)
    {
        queue<double> temp = q2;
        cout << "Queue Elements: ";
        while(!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    void d1( queue <int> q1)
    {
        q1.pop();

        cout << "Elements of integer queue after dequeing: ";
        while(!q1.empty())
        {
            cout << q1.front() << " ";
            q1.pop();
        }
        cout << endl;

    }

    void d2( queue <double> q2)
    {
        q2.pop();

        cout << "Elements of double queue after dequeing: ";
        while(!q2.empty())
        {
            cout << q2.front() << " ";
            q2.pop();
        }
        cout << endl;
    }

};

int main()
{

    Q <int>quad1;
    Q <double>quad2;

    int n1;
    cin >> n1;

    for(int i=0 ; i<n1 ; i++)
    {
        int pus;
        cin >> pus;

        quad1.q1.push(pus);
    }

    int n2;
    cin >> n2;

    for(int i=0 ; i<n2 ; i++)
    {
        double pus;
        cin >> pus;

        quad2.q2.push(pus);
    }

    quad1.showq1(quad1.q1);
    quad1.d1(quad1.q1);
    quad2.showq2(quad2.q2);
    quad2.d2(quad2.q2);

}
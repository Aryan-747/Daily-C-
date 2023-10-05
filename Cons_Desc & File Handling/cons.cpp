#include<iostream>

using namespace std;

class Cars
{

    private:
    string cname;
    string mname;
    string ftype;
    float mil;
    float price;

    public:

    
    Cars() // Default Cons..
    {

        cname = "X";
        mname = "X";
        ftype = "X";
        mil = 0;
        price = 0;
    }

    Cars(string name , string model , string fueltype , float mileage , float cost) // Parameterized Cons....
    {
        cname = name;
        mname = model;
        ftype = fueltype;
        mil = mileage;
        price = cost;
    }


    Cars(Cars &obj) // Copy Constructor...
    {
        cname = obj.cname;
        mname = obj.mname;
        ftype = obj.ftype;
        mil = obj.mil;
        price = obj.price;
    }


    void display()
    {
        cout << "Company: " << cname << endl;
        cout << "Model: " << mname << endl;
        cout << "Fuel Type: " << ftype << endl;
        cout << "Mileage: " << mil  << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }



};


int main()
{
    Cars obj1;
    Cars obj2("Hyundai","i30","Petrol",15,2000000);
    Cars obj3 = obj1;

    obj1.display();
    obj2.display();
    obj3.display();
}
#include <iostream>
using namespace std;

int main()
{
    string color, name,cele;

    cout<<"Enter color:";
    
    getline(cin,color);
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter cele:";
    getline(cin,cele);

    cout<<"Name is "<<name<<endl;
    cout<<"Color is "<<color<<endl;
    cout<<"Celebrity is "<<cele<<endl;
	return 0;
}
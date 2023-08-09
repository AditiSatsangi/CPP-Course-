#include <iostream>
using namespace std;

int main()
{
	int age= 3;
    string name ="Red";
    double gpa= 9.8;
    cout<<"Age: "<<&age<<endl;
    cout<<"Name: "<<&name<<endl;
    cout<<"Gpa: "<<&gpa<<endl;
    int *pAge=&age;
    double *pgpa= &gpa;
    string *pname= &name;
    cout<<*pAge<<endl;
    cout<<pAge;
    cout<<*pname<<endl;// Dereferencing pointer
    cout<<*pgpa<<endl;
    cout<<pgpa<<endl;   //get pointing value like gpa 9.8 will print.
    cout<<*&gpa<<endl;
    cout<<&*&gpa<<endl;   //get address
	return 0;
}


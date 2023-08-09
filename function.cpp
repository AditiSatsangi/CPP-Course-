#include <iostream>
using namespace std;

void Hii(string);

int main()
{   
    string name;
    cout<<"Enter name:"<<endl;
    cin>>name;
    
	Hii(name);
	return 0;
}

void Hii(string name){

  cout<< "Hello World"<<endl;
    cout<< "Hello "<<name<<endl;
}
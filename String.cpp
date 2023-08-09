#include <iostream>
using namespace std;

int main()
{
	cout<<"GIRFF"<<endl;
    cout<<"Man\n";
    string phase= "kindness";
    cout<<phase.length()<<endl;
    cout<<phase[2]<<endl;
    phase[2]= 'J';
    cout<<phase<<endl;

    cout<<phase.find("k")<<endl;  //To find the string element or the part of the phase
    string yi = "Good and excellent";
    string subyi = yi.substr(3,8);
    cout<<yi.substr(1,2)<<"\n";

  cout<<subyi<<endl;

	return 0;
}
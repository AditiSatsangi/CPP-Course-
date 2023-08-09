#include <iostream>
using namespace std;

string day(int n){
    string dayy;

    switch(n){
       case 0: 
             dayy = "Sunday"; 
             break;
       case 1: dayy = "Monday"; 
             break;

       case 2: dayy = "Tuesday"; 
              break;
       case 3: dayy = "Wednesday";
             break;
       case 4: dayy = "Thursday";
             break;
       case 5: dayy = "Friday";
             break;
       case 6: dayy = "Saturday";
             break;
       default:
        dayy="Wrong choice";
        break;
    }
   return dayy;
}

int main()
{
    int n=5;
	cout<<day(4);
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int n=5;
    int guess=0;
    int guesscount=0;
    bool outguess= false;
    int guesslimit=4;

    while(n!= guess&& !outguess){
        if(guesscount<guesslimit){
        cout<<"Enter guess:";
        cin>>guess;
        guesscount++;

        }else{
            outguess= true;
        }
    }

    if(outguess==false){
    cout<<"You win.";
    }else{
        cout<<"OUT of guess";
       
    }
	return 0;
}

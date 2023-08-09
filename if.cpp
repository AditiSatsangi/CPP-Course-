#include <iostream>
using namespace std;

int main()
{
	bool isMale= true;
    bool isTAll= true; 
        if(isMale&& isTAll){
        
        cout<<"You are TAll Male.";
    }
    else if(isMale && !isTAll){
        cout<<"You are short male.";
    }
    else if(!isMale && isTAll){
        cout<<"You are tall female.";
    }
    else{
        cout<<"You are not Male and not tall.";
    }
	return 0;
}
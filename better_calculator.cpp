#include <iostream>
using namespace std;

int main()
{
	int n1,n2,n3,n4;
    char op;
    cout<<"Entr num 1:";
    cin>>n1;
    cout<<"Entr num 2:";
    cin>>n2;
    cout<<"Entr op:";
    cin>>op;
    int r;

    if(op=='+'){
        r= n1+n2;
    }else if(op=='-'){
         r= n1-n2;
    }else if(op=='*'){
         r= n1*n2;
    }else if(op=='/'){
         r= n1/n2;
    }
    else{
        cout<<"The operator is not approprite\n";

    }
    cout<<r<<"\n";
	return 0;
}
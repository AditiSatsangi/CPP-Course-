#include <iostream>
using namespace std;

int getmax(int n1,int n2,int n3){
    int r;
    if(n1>=n2&& n1>=n3){
        r= n1;
    }
    else if(n2>=n3&& n2>=n1){
      r= n2;
    }
    else{
        r= n3;
    }
    return r;

}
int main()
{
	int n=0;
    int n1,n2,n3;
    cout<<"Enter n1,n2,n3:";
    cin>>n1 >>n2>>n3;
    //cout<<"THe n1,n2 and n3 are " <<n1<<n2<<n3;
    int k= getmax(n1,n2,n3);
    cout<<"\n";
    cout<<k;



	return 0;
}
#include <iostream>
using namespace std;

double cube(int n){
    int r= n*n*n;
    return r;

}

int main()
{
	int n;
    int ans=0;
    cout<<"Enter n: ";
    cin>>n;
    cout<<cube(n)<<endl;
	return 0;
}
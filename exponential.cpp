#include <iostream>
using namespace std;

int power(int pownum,int basenum){
   int r=1;
   for(int i=0;i<pownum;i++){
    r=r*basenum;

   }
   return r;

}
int main()
{
	cout<<power(3,2);
	return 0;
}

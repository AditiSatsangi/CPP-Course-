#include <iostream>
using namespace std;

int main()
{
	int numberGrid [3][2]={
        {2,4},{1,8}, {1,2} };
         cout<<numberGrid[0][1]<<endl;

         for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cout<<numberGrid[i][j];
            }
            cout<<"\n";
         }
	return 0;
}



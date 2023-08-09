#include <iostream>
using namespace std;

class Book{
   public:
   string title;
   string author;
   int page;

   Book(string name){
    cout<< name <<endl;
   }
};
int main()
{
	/*string name= "NIke";
    double pi=3.14;
    char character= 'D';
    int c;
    */

    Book book1("Harry");
    book1.title= "VIsa";
    book1.author= "MIcy";
    book1.page= 400;

    Book book2("FUN");
    book2.title= "TITANIC";
    book2.author= "TAm";
    book2.page= 600;

    cout<<book2.title<<endl;
	return 0;

}

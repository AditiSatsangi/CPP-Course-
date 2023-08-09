#include <iostream>
using namespace std;
//ABstract class for unknow o]person
class AbstractEmployee{
   void AskPromotion();
};

//CLASS
class Employee:AbstractEmployee{
    private:
    string company;
    int age;

protected:
 string name;

    public:
    void setName(string Name){
     name = Name;
    }
    string getName(){
     return name;
    }
    void setCompany(string Company){
     Company = Company;
    }
    string getCompany(){
     return company;
    }
   
    void setAge(int Age){
        if(Age>18)
     age = Age;
    }
    int getAge(){
     return age;
    }
   
// Functuion
    void intro(){
        cout<<"Name is "<<name<<endl;
        cout<<"Company is "<<company<<endl;
        cout<<"Age is "<<age<<endl;
    }

//COnstructur
    Employee(string aname,string acompany,int aage){
        name= aname;
        age= aage;
        company= acompany;
    }
 void AskPromotion(){
    if(age>30){
        cout<<name<<" got promoted."<<endl;
    }
    else{
        cout<<"Sorry no promotion for "<<name<<endl;
    }
 }

 virtual void work(){
    cout<<name<<" is working."<<endl;
 }
};

class Developer: public Employee{
public:
  string FavProgramminglanguage;

  Developer(string aname,string acompany,int aage,string favProgramminglanguage):Employee(aname,acompany,aage){
      FavProgramminglanguage =favProgramminglanguage;
  }
   void bugClear(){
    cout<<name<<" clear bugs using "<<FavProgramminglanguage<<" mainly."<<endl;
   }
    void work(){
    cout<<name<<" is writing code in "<<FavProgramminglanguage<<endl;
 }
};

class Teacher: public Employee{
    public:
  string subject;
  void function(){
    cout<<name<<" is preparing "<<subject<<endl;
     }

Teacher(string aname,string acompany,int aage,string Subject):Employee(aname,acompany,aage){
    subject= Subject;

  }
   void work(){
    cout<<name<<" is teaching "<< subject<<endl;
 }

};
int main()
{
    Employee employee1=Employee("Sam","Amazon",12);
    Employee employee2=Employee("Aditi","GOOGLE",35);
   Developer d = Developer("Ami","Google",30,"python");
   //GET FUNCTION CALL 
    employee1.intro();
     employee2.intro();
     employee1.setAge(15);
     cout<<employee1.getName()<< " is "<< employee1.getAge()<<" year old"<<endl;
employee1.AskPromotion();
employee2.AskPromotion();
d.bugClear();
d.AskPromotion();
 Teacher t= Teacher("Swapy","APPLe",34,"CS");

t.function();
t.AskPromotion();
	t.work();
    d.work();

    Employee *e1 =&d;
    Employee *e2 =&t;
e1->work();
 e2->work();

}

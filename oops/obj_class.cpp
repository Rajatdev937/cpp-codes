#include <iostream>
using namespace std;

class clg {
public://access specifier


    //properties/attributes

    int id;//data members
    string name;//data members
    int batch;//data members
    float marks;//data members
    double points;//data members

    void display(){//member function
        cout<<"name:  "<<name<<endl;
        cout<<"batch: "<<batch<<endl;
        cout<<"points: "<<points<<endl;
        cout<<"marks:  "<<marks<<endl;
    }
    void result(){
     cout<<name<<"are pass"<<endl;
    }
};
int main() {
    //object 

 clg c1;
 clg c2;

 c1.name="Rajat";
 c2.name="Divyanshi";

 c1.id=590022841;
 c2.id=590022821;

 c1.batch=19;
 c2.batch=20;

 c1.points=1000;
 c2.points=2000;

 c1.marks=98.23;
 c2.marks=97.34;

 cout<<"---Student 1 details---"<<endl;
 c1.display();
 c1.result();
 
 cout<<"---student 2 details--"<<endl;
 c2.display();
 c2.result();

    return 0;
}
#include <iostream>
using namespace std;


class student{
    public:
   
    string name;

    void getname(){
        cout<<"enter the name: ";
        cin>>name;
    }
};

class result : public student{
 public:

int marks;

void getmarks(){
    cout<<"enter the marks: ";
    cin>>marks;
}

void display(){
    cout<<name<<" scored "<<marks<<" marks";
}
};

int main() {
    result r;
    r.getname();
    r.getmarks();
    r.display();
    return 0;
}
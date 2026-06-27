#include <iostream>
using namespace std;

class student{
private:
    int marks;

public:
    student(){
        marks = 50;
    }
friend void  show(student);
};

void show(student s){
cout<<s.marks;
}

int main() {
    student s1;
    show(s1);

    return 0;
}
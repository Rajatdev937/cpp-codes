#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1("Rajat", 18);

    Student s2 = s1;  

    s2.display();
}
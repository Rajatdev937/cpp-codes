#include <iostream>
using namespace std;

class office_emp {
  protected:
  int emp_id;
  int emp_email;

  public:
  string name;
  

  void getdetails(int i, int e, string n) {
    emp_id = i;
    emp_email = e;
    name = n;
  }
};

class office_hr: public office_emp{

    public:
     void showdetails(){
       cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Email: " << emp_email << endl;
     }
};

int main() {
    office_hr h;

    h.getdetails(101, 12345, "Rajat");
    h.showdetails();

    return 0;
}


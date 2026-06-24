#include <iostream>
using namespace std;

class test{

    public:
        test(){
          cout<<"constructor called\n";  
        };
        ~test(){
            cout<<"destructor called\n";
        }
};

int main() {
 
test t1;
test t2;
test t3;

    return 0;

}
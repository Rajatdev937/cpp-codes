#include <iostream>
using namespace std;

class myclass{
    public:
    myclass(){
        cout<<"helloo c++"<<endl;
        count++;
    }
    static int count;
};
int myclass::count=0;
int main() {
    myclass obj1;
    myclass obj2;
    return 0;
}
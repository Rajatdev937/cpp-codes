#include <iostream>
using namespace std;

class msg{
public:
    static void greet(){
      cout<<"Hello students !"<<endl;
    }
};
int main() {
    
msg::greet();
    return 0;
}
#include <iostream>
#include<list>
using namespace std;

int main() {
    
    cout<<"creating  a list"<<endl;

list<int>l1;
l1.push_back(10);
l1.push_back(20);
l1.push_front(30);
l1.push_front(50);

for(int x : l1){
    cout<<x<<endl;
}
    return 0;
};
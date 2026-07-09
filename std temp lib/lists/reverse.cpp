#include <iostream>
#include<list>
using namespace std;

int main() {
    
    list<int>l1;
    l1.push_front(12);
    l1.push_front(72);
    l1.push_front(62);
    l1.push_front(52);
    l1.push_front(32);

 cout<<"list before reversing"<<endl;
 for(int x : l1){
    cout<<x<<" ";
 }   
cout<<endl;
 l1.reverse();
 cout<<"list after reversing"<<endl;
 for(int x : l1){
    cout<<x<<" ";
 }
    return 0;
}
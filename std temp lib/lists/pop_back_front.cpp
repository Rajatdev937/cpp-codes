#include <iostream>
#include<list>
using namespace std;

int main() {
     
    list<int>l1;


   //pushing the elements of the list 
    l1.push_front(3);
    l1.push_front(5);
    l1.push_front(8);

cout<<"before removing the elements"<<endl;
for(int  x: l1){
    cout<< x<<" ";
}
//removing the elements from the list

l1.pop_front();
l1.pop_back();
cout<<endl ;
cout<<"After removing the elements"<<endl;
for(int  x: l1){
    cout<< x<<" " ;
}

    return 0;
}
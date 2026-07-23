#include <iostream>
#include<list>
using namespace std;

int main() {
    
    list<int>l1;

   l1.push_back(9);
   l1.push_back(8);
   l1.push_back(7);
   l1.push_back(6);
   l1.push_back(5);

   l1.clear();//clears all elements
   
if(l1.empty()){
    cout<<"list is empty"<<endl;
}
else{
    cout<<"list isnt empty"<<endl;
}

l1.clear();

    return 0;
}
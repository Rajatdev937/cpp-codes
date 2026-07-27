#include <iostream>
#include <list>
using namespace std;

int main() {
     
    list<int>l1;
    
    l1={10,20,30,40,50};

    //iterator 
    list<int> :: iterator it;
    for(it = l1.begin() ; it != l1.end() ; it++){
        cout<<*it<<" ";
    }

    return 0;
}
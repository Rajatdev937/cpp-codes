#include <iostream>
#include <list>
using namespace std;

int main() {
     
  list<int>l1;

    l1.push_back(10);
    l1.push_front(20);
    l1.push_front(40);

    for(auto it= l1.begin();it != l1.end() ; it++){
        cout<<*it<<" ";
    }

  return 0;
}
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int>s1;
  

    s1.insert(1);
    s1.insert(450);
    s1.insert(80);
    s1.insert(60);

    for(auto it=s1.begin() ; it!= s1.end();it++){
        cout<<*it<< " ";
    } 
     set<int,greater<int>>s1;

      for(auto it=s1.begin() ; it!= s1.end();it++){
        cout<<*it<< " ";
    } 
    return 0;
}
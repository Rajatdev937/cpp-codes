#include <iostream>
#include<set>
using namespace std;

int main() {
    
    set<int>s1;
    s1={2,6,88,5,4,76,8,23};
     auto it=s1.lower_bound(50);
    cout<<*it<<endl;

    set<int>s2;
    s2={40,50,60,50,80,3};
    auto it2=s1.lower_bound(70);
    if(it2 == s2.end()){
      cout<<"not founded"<<endl;
    }
    else{
        cout<<"founded"<<" "<<*it;
    }
    return 0;
}
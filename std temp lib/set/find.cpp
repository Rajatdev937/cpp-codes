#include <iostream>
#include<set>
using namespace std;

int main() {
     
    set<int>s1;
    s1={10,50,48,80,71,5};

    auto it = s1.find(48);

    if(it != s1.end()){
        cout<<"element  found"<<" "<<*it;
    }
    else{
        cout<<"element not found"<<endl;
    }

    return 0;
}
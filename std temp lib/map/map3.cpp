#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<string,int>m;

    m.insert({"apple",20});
    m.insert({"banana",40});
    m.insert({"orange",50});
    m.insert({"avacado",60});
    m.insert({"strawberry",90});

    auto it = m.find("orange");

    if( it !=m.end()){
      cout<<"found"<<endl;
      m.erase("orange");
    }
    else{
        cout<<"not founded"<<endl;
    }

    for(auto  p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int>m;

    m.insert({"one",1});
    m.insert({"two",2});
    m.insert({"third",3});
    m.insert({"four",4});
    m.emplace("five",5);


    m.erase("four");
  for(auto p : m){
    cout<<p.first<<" "
    <<p.second<<endl;
  }
    return 0;
}
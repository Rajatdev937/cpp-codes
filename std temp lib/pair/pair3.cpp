#include <iostream>
using namespace std;

int main() {
    
    pair<pair<string,int>,int>p;

  p= make_pair(make_pair("rohit",25),80);

   cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
    return 0;
}
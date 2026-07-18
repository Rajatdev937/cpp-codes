#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
for(int val : v1){
    cout<<val<<" " ;
}
cout<<v1.capacity()<<endl;

v1.pop_back();

for(int val : v1){
    cout<<val<<endl;
}
cout<<v1.capacity()<<endl;
    return 0;
}
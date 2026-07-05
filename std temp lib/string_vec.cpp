#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<char>v1;
    v1={'a','b','c','d','e'};
   
//for loop

for(char val : v1){
    cout<<val<<endl;
}
    return 0;
}
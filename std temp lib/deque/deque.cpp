#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int>d1;
    d1={1,2,3,4};

for(int value : d1){
    cout<<value<<" ";
}

    return 0;
}
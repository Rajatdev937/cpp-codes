#include <iostream>
#include <utility>
using namespace std;

int main() {
    
    pair<string,pair<int,int>>p1;
    p1.first="kali";

    p1.second.first=10;
    p1.second.second=20;


    cout<<p1.first<<" "<<p1.second.first <<" "<< p1.second.second << endl;
    return 0;
}
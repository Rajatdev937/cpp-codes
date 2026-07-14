#include <iostream>
#include<map>
using namespace std;

int main() {
    
    map<string,int>m;

    m["tv"]=10;
    m["camera"]=30;
    m["mobile"]=60;
    m["usb"]=80;

    for(auto p : m){
    cout<<p.first << " "<<p.second<<endl;
    }

    return 0;
}
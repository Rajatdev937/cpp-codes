#include <iostream>
using namespace std;

int  sum(int a=10,int b=4){
    return a+ b;
}

int main() {
    int x,y;
    cout<<"enter the value of x and y ;";
    cin>>x>>y;
    int result;
    result=sum(x,y);
    cout<<result;
    return 0;
}
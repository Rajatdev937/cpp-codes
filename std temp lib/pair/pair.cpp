#include <iostream>
#include <utility>
using namespace std;

int main() { 
    pair<int,string>p1; //first way to make a  pair
   p1.first=5;
   p1.second="hello";


   pair<string,int> p = make_pair("rajat",9);//second way to make a pair

   cout<<p1.first<<endl;
   cout<<p1.second<<endl;
 
   
    return 0;
}
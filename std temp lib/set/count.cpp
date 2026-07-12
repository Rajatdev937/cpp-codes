#include <iostream>
#include <set>

using namespace std;

int main() {
     set<int>s1;

     s1={10,9,23,56,6,70};
    

      if(s1.count(9) == 1){
        cout<<"element exist"<<endl;
      }
      else{
        cout<<"element doesnt exists"<<endl;
      }
    return 0;
}
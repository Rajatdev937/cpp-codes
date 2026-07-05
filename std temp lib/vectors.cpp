#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>v1={1,2,3}; //intializing  a vector
    
//printing the elements  of the vectors
    cout<<v1[0]<<endl; 
    cout<<v1[1]<<endl;
    cout<<v1[2]<<endl;

cout<<" "<<endl;
//method 2 

vector<int> v2(4,2);
cout<<v2[0]<<endl;
cout<<v2[1]<<endl;
cout<<v2[2]<<endl;
cout<<v2[3]<<endl;
    return 0;

}

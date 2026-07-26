#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;

    v1={10,20,30,40,50};

    vector<int> :: iterator it = v1.begin();

    for(it =v1.begin() ; it !=v1.end() ; it++){
        cout << *it << " ";
    }
    return 0;
}
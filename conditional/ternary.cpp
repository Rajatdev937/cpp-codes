//ternary ~
// ((condition)? b:c);

#include <iostream>
using namespace std;

int main() {
    
    int a=3;
    int b=6;
    int c=8;

    int result = (a > b) ? 
    ((a > c)? a : b) :
    ((a < c)? b : c );

    cout << result;
    return 0;
} 
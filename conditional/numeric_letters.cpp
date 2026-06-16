#include <iostream>
using namespace std;

int main() {
    char x;
    cout<<"enter a input(digit,character,special character): ";
    cin>>x;

    if(x>= '0' && x<= '9'){
        cout<<x <<" is a digit";
    }
    else if (x >= 'A' &&  x <= 'Z'){
        cout<<x<<" is a uppercase character";
    }
    else if(x >= 'a' && x <= 'z'){
        cout<<x<<" is a lowercase character";
    }
    else{
        cout<<x<<" is a special character";
    }
    return 0;
}
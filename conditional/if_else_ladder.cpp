#include <iostream>
using namespace std;


int result(int num1,int num2 ,char opr){
 if(opr=='+'){
        return num1 + num2 ;
    }
    else if(opr == '-'){
        return num1 - num2;
    }
    else if(opr == '*'){
        return num1 * num2;
    }
    else if(opr == '/'){
        return num1 / num2;
    }
    else{
        cout<<"invalid operator";
        return 0;
    }
}
int main() {
    int num1;
    int num2;
 
    char opr;
   

    cout<<"enter 1st number: ";
    cin>>num1;

    cout<<"enter 2nd number: ";
    cin>>num2;
     
    cout<<"\n";
    cout<<"choose the operator: ";
    cin>>opr;

  cout<<result(num1,num2,opr);
    return 0;
}
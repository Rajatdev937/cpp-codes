#include <iostream>
using namespace std;

   class bank{
    private:
        string holder_name;
        int acc_num;
        double deposit_amt;

    public:

        void getvalues(string n , int no , double s){
         holder_name= n;

         acc_num=no;

         deposit_amt=s;
        }
        void display(){
            cout<<"name: "<<holder_name<<endl;
            cout<<"acc_num: "<<acc_num<<endl;
            cout<<"deposit_amt: "<<deposit_amt<<endl;
        }
        
    };
int main() {
 
bank b1;
b1.getvalues("Rajat",1233957351,60000);
b1.display();
    return 0;
}
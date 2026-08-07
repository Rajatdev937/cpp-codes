#include <iostream>
using namespace std;

class father{
public :
 string name; 

  void getfather(){
    cout<<"enter your father name: ";
    cin>>name;
    
  }
  void showfather(){

cout<<"your father is "<<name<<endl;
  }
};
class mother{
public:
string name;

void getmother()
{
    cout<<"enter your mother name: ";
    cin>>name;
}
void showmother(){
    cout<<"your mother is"<<name<<endl;
}
};
class child: public father ,  public mother{
public:
 string name;

 void getchild(){
     cout<<"enter your child name: ";
    cin>>name;
}
void showchild(){
cout<<"child name is"<<name<<endl;
}
};

int main() {

child c1;
c1.getfather();
c1.getmother();
c1.getchild();

c1.showfather();
c1.showmother();
c1.showchild();

    return 0;
}
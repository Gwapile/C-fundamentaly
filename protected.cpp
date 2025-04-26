#include <iostream>
using namespace std;
class Number{
public:
  int a;
protected:
  int b;
public:
  int c;
  void show(){
    a = 23;
    b = 12;
    c = 0;
    cout<<b;

  }
};
class Event:public Number{
	public:
  void display(){
    a= 4;
    b =5;
    c= 6;
   // cout<<b;
  }
  	public:
  void  jackob(){
  		string name = "jackob asukile seleman";
  		cout<<name;
  }

};
int main(){
	Event E1;
	E1.show();
	E1.display();
	E1.jackob();
}
 


#include <iostream>
using namespace std;
class Method{
public:
	void show(){
		cout<<"james";
	}
};
class child:public Method{
public:
	void show(){
		cout<<"haha childen";
	}
};
int main(){
	Method M;
	child C;
	M.show();
	
};

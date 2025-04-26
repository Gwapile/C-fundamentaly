#include <iostream>
using namespace std;
/*single inheritance
class Addition{
	public:
		void add(){
			int x,y=30,z=10;
			x=y+z;
			cout<<"Add="<<x<<"\n";
		}
	
};
//derived class
class Substraction:public Addition{
	public:
		void sub(){
			int x,y=30,z=10;
			x=y-z;
			cout<<"Sub="<<x<<"\n";
		}
};
int main(){
	//
	Substraction obj;
	//we need to call class function
	obj.add();
	//we need to call derived class function
	obj.sub();
}*/

//multiple inheritance
class Addition{
	public:
		void add(){
			int x,y=30,z=10;
			x=y+z;
			cout<<"Add="<<x<<"\n";
		}
	
};
//second class
class Substraction{
	public:
		void sub(){
			int x,y=30,z=10;
			x=y-z;
			cout<<"Sub="<<x<<"\n";
		}
};
//derived class 
//here we need to inherit two class=Substraction and Addition
class Multiplication:public Addition,public Substraction{
	public:
		void Multiply(){
			int x,y=30,z=10;
			x=y*z;
			cout<<"Multiply="<<x<<"\n";
		}
};
int main(){
	//we create instance
	Multiplication obj;
	//we need to call class function
	obj.add();
	obj.sub();
	//we need to call derived class function
	obj.Multiply();
}











#include <iostream>
using namespace std;
//overriding inside method
class Vehicles{
	public:
		void speed(){
			cout<<"my speed is high"<<"\n";
		};
		void G(){
			cout<<"The long-term is Gwapile\n";
		}
};
class Car:public Vehicles{
	public:
		void speed(){
			cout<<"my speed is moderate"<<"\n";
		};
		void a(){
			cout<<"Gwapile\n";
		}
		void G(){
			cout<<"Gwapileweb\n";
		}
};
int main (){
	Vehicles v;
	v.speed();
	Car car1;
	car1.speed();
	car1.G();
	v.G();
	return 0;
};







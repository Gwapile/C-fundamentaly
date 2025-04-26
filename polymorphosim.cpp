#include <iostream>

using namespace std;

class Vehicles{
	public:
		void speed(){
			cout<<"my speed is high"<<"\n";
		};
};
class Car:public Vehicles{
	public:
		void speed(){
			cout<<"my speed is moderate"<<"\n";
		};
};
int main (){
	Vehicles v;
	v.speed();
	Car car1;
	
	
	return 0;
}







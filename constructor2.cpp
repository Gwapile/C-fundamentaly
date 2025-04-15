#include <iostream>
using namespace std;

class Car{
	public:
		string name;
		string brand;
		int model;
		 Car(string n, string b, int m){
		 	name=n;
		 	brand=b;
		 	model=m;
		 };
	};
		 int main(){
		//here we create car and we need to call the constructor
		Car Carone("IST","Toyota",1999);
	    Car Cartwo("BMW","XS",1999);

		
		//we need to print value
cout<<Carone.name<<""<<Carone.brand<<""<<Carone.model<<"\n";
cout<<endl;
cout<<Cartwo.name<<""<<Cartwo.brand<<""<<Cartwo.model<<"\n";

		 return 0;		 
}


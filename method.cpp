#include <iostream>
using namespace std;

 class Parent{
 	//we define data members
 	public:
 		string name;
 		int age;
 		/*define methods inside the class
 		void talk(){
 			cout<<"Good daddy"<<endl;*/
 			void talk();
		 };void Parent::talk(){
		 		cout<<"Name is:"<<name<<endl;
 	cout<<"Age is:"<<age<<endl;
		 }
 //};
 int main(){
 	//we create object
 	Parent parent1;
 	parent1.name="Gwapile Juma";
 	parent1.age=69;
 	parent1.talk();

 	cout<<"Name is:"<<parent1.name<<endl;
 	cout<<"Age is:"<<parent1.age<<endl;
	  }

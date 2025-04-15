#include <iostream>
using namespace std;
class Employee{
//we start create declare variable for attribute/properties/
	//access modifier
	public:
		//data members

	string name;
	int age;
	char gender;	 
};
int main(){
	//inside main function we create object or creating instance of class 
	//here we assign 
	Employee employee1;
	employee1.name="Vencha";
	employee1.age=24;
	employee1.gender='M';
	cout<<"Name of Employee1:"<<employee1.name<<endl;
	cout<<"Age of Employee1:"<<employee1.age<<endl;
	cout<<"Gender of Employee1:"<<employee1.gender<<endl;
	cout<<endl;
	//create another object that isemployee2 
	Employee employee2;
	employee2.name="Christina";
	employee2.age=22;
	employee2.gender='F';
	//print attributes
	
	cout<<"Name of Employee2:"<<employee2.name<<endl;
	cout<<"Age of Employee2:"<<employee2.age<<endl;
	cout<<"Gender of Employee2:"<<employee2.gender<<endl;
	return 0;
}



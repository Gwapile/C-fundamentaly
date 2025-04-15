#include <iostream>
using namespace std;

 class User{
 	public:
 		string name;
 		string gender;
 		int age;
 		/*we need to use constructor 
 		User(string x, string y, int z){
 			name=x;
 			gender=y;
 			age=z;
		 }*/
		 //we need to use constructor  
		 User(string x, string y, int z);
 			
 	
 	//we need to define constructor outside of the class
 	User::user(string x, string y, int z){
 			name=x;
 			gender=y;
 			age=z
 };
 //here we create object
 int main(){
 	//first user
 	User user1 ("Gwapile","Male",24);
 	User user2 ("Ven","Male",25);
 	User user3 ("Bri","Female",28);

 	/*user1.name="Vencha";
 	user1.gender="male";
 	user1.age=24;
 	cout<<"name is:"<<user1.name<<endl;
 	cout<<"Gender is:"<<user1.gender<<endl;
 	cout<<"Age is:"<<user1.age<<endl;
 	cout<<endl;
 	//output user two
 	cout<<"name is:"<<user2.name<<endl;
 	cout<<"Gender is:"<<user1.gender<<endl;
 	cout<<"name is:"<<user2.age<<endl;
 		cout<<endl;
 //output user three
 cout<<"name is:"<<user3.name<<endl;
cout<<"Gender is:"<<user3.gender<<endl;*/
//output inside class
 cout<<"name is:"<<user3.age<<endl<<"gender is:"
 <<user3.gender<<endl<<"age is:"<<user3.age<<endl;
 	return 0;
 	
 }


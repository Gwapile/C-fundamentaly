#include <iostream>

using namespace std;

class Student{
	private:
		double marks;
		public:
			void Setmarks(double m){
				marks=m;
			};
			double getmarks(){
				return marks;
			};
};
int main()


Student s1;
s1.Setmarks(80.5);
cout<<"The mark is:"<<s1.getmarks()<<\n;
return 0;









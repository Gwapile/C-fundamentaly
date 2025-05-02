# include<iostream>
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(8){}    
       void operator ++() {     
          num = num+2;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    Test test1;    
    ++test1;  // calling of a function "void operator ++()"    
    test1.Print();    
    return 0;    
} 

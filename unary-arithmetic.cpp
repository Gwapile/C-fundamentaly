#include<iostream>
using namespace std;

int main()
{
    int tina = 0 ,lilian = 14;

    // tina is assigned 11 now since lilian is updated here itself
    cout << "Pre-increment Operation" <<"\n";
    tina = ++ lilian;
    // lilian and tina have same values = 14
    cout <<"lilian ni "<< lilian <<" na tina ni "<< tina <<"\n";
    return 0;
}

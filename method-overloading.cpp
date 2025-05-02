#include <iostream>
using namespace std;

class Math {
public:
    // Overloaded method for two integers
    int add(int l, int k) {
        return l + k;
    }

    // Overloaded method for three integers
    int add(int f, int c, int m) {
        return f + c + m;
    }

    // Overloaded method for two doubles
    double add(double i, double e) {
        return i + e;
    }
};

int main() {
    Math group1;
    cout << "Sum of 2 and 3: " << group1.add(2, 3) <<"\n"; 
	// Calls first add
    cout << "Sum of 2, 3, and 4: " << group1.add(2, 3, 4) <<"\n";
	 // Calls second add
    cout << "Sum of 2.5 and 3.5: " << group1.add(2.5, 3.5) <<"\n"; 
	// Calls third add
    return 0;
}


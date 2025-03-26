#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
	
    void setX(int value) {
        x = value;
    }

    void displayX() {
        cout << "Value of x: " << x << endl;
    }
};
int main() {
    MyClass no;
    no.setX(10);
    no.displayX();

    return 0;
}


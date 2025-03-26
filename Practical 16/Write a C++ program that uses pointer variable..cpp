#include <iostream>
using namespace std;

int main (){
	int a = 3;
	int *ptr = &a;
	
	cout << "Value stored in a: " << a << endl;
	cout << "Address of a: " << &a<< endl;
	cout << "Address of a stored in ptr: " << ptr << endl;
	cout << "Value pointed towards ptr: " << *ptr << endl;
	
	*ptr = 40;
	
	cout << "Modified value of a: " << a;
	
	
	
}

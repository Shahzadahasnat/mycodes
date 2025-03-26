#include <iostream>
using namespace std;

int main(){
	int a = 4;
	int b = 6;
	
	cout<< "Value stored in a: " << a<< endl << endl;
	cout << "Address of a: " << &a << endl << endl;
	
	cout<< "Value stored in b: " << b<< endl << endl;
	cout << "Address of b: " << &b << endl << endl;
	
	int* ptr = &a;
	
	cout << "Pointer variable value, which stored the address of a: " << ptr << endl;
	cout << "Memory Address of ptr: " << &ptr << endl << endl;
	cout<< "Value stored in a: " << *ptr;
}

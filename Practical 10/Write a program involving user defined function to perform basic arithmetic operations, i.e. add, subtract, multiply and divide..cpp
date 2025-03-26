#include <iostream>
using namespace std;

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main (){
	sum(1, 3);
	sub(3, 1);
	mul(1, 3);
	div(6, 2);	
}

sum(int a, int b){
	int sum = a + b;
	cout << "sum of no is: " <<  sum<< endl;	
}

sub(int a, int b){
	int sub = a - b;
	cout << "sub of no is " <<sub<< endl;	
}
mul(int a, int b){
	int mul = a * b;
	cout << "product of no is " <<mul<< endl;	
}
div(int a, int b){
	int div = a / b;
	cout << "qoutient of no is " <<div;	
}

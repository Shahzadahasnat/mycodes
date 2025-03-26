#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter your obtained marks"<<endl;
	cin>>a;
	
	
	if(a>50){
		cout<<"you are pass \n";
		if(a>80){
			cout<<"you have A+ \n";
		}
		else if(a<80 && a>50){
			cout<<"you have just A grade \n";
		}
	}
	else {
		cout<<"you are phail";
	}
}

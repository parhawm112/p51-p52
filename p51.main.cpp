#include <iostream>

using namespace std;

int main() {
	 
	 
	int x;
	cout<<"please enter a value for x:";
	cin>>x;
	float y;
	
	if(x<6){
		cout<<"y=x-0%*6";
	}
	else if(x>=6 && x<8){
		cout<<"y=x-5%*x";
	}
	else if(x>=8 && x<10){
		cout<<"y=x-10%*x";
	}
	else if(x>=10 && x<14){
		cout<<"y=x-15%*x";
	}
	else if(x>=14 && x<18){
		cout<<"y=x-20%*x";
	}
	else if(x>=18 && x<25){
		cout<<"y=x-25%*x";
	}
	else{
		cout<<"y=x-35%*x";
	}
}
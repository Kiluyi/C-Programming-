//sum of digits of integer value
#include<iostream>
using namespace std;
int main(){
	int no,b,sum=0;
	cout<<"Enter any number\n";
	cin>>no;
	while(no!=0){
		b=no%10;
		sum=sum+b;
		no=no/10;
	}
	cout<<"Total sum of digits="<<sum;
}
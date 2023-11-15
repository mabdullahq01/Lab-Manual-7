#include<iostream>
using namespace std;

int main(){
	int sum=0, prod=1, i;
	int array[5];
	for(i=0; i<5; i++){
		cout<<"Enter Values for Array: ";
		cin>>array[i];
	}
	for(i=0; i<5; i++){
		sum=sum+array[i];
		prod=prod*array[i];
	}
	cout<<"Sum of All Elements of Array is: "<<sum<<endl;
	cout<<"Product of All Elements of Array is: "<<prod<<endl;
	
	return 0;
}
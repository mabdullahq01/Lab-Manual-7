#include <iostream>
using namespace std;

int main(){
	int i;
	int array[10];
	for(i=0; i<10; i++){
		cout<<"Enter Value: ";
		cin>>array[i];
	}
	for(i=0; i<10; i++){
		cout<<"Index Number "<<i<<" - "<<array[i]<<endl;
	}
	return 0;
}


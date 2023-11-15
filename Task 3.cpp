#include <iostream>
 using namespace std;
 int main()
 {
 	int n, count, count2;
 	cout<<"Enter Number of Rows: ";
 	cin>>n;
	int half = n/2;
	char diamond[n];
	 for (count=0; count<n; count++)
	 {
	 diamond[count] = ' ' ;
	 }
	for (count=0; count<=half; count++)
	 {
	 	for (count2=0; count2<n; count2++)
	 	{
	 		diamond[half+count] = '*';
	 		diamond[half-count] = '*';
	 		cout<<diamond[count2];
	 	}
	 	cout<<endl;
		}
	 for (count=0; count<n; count++)
	 {
	 	diamond[count] = '*' ;
		}
		for (count=half; count>0; count--)
	 {
	 		for (count2=0; count2<n; count2++)
	 {
		 diamond[half+count] = ' ';
		 diamond[half-count] = ' ';
		 cout<<diamond[count2];
		 }
		 cout<<endl;
	}
	return 0;
	 }
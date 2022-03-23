/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<iostream>
using namespace std;


int main()
{

 int n;
 cin>>n;
 char a[1000];
 for(int i=0;i<n;i++)
 {
	 cin>>a[i];
 }
 int flag=0;
 for(int i=0;i<n;i++)
 {
	 if((a[i]=='H')&& (a[i+1]=='H'))
	 {
		 
		 
			 flag=1;
			 break;
	 }
			
		 
		 else if (a[i]=='.')
		 {
			a[i]='B';
		 }
	 }
	 
 
 if(flag==1)
 {
	 cout<<"NO"<<endl;
 }
 else
 {
	 cout<<"YES"<<endl;
	 for(int i=0;i<n;i++)
	 {
		 cout<<a[i];
	 }
 }
 




   return 0;
}

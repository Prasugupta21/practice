


#include<iostream>
using namespace std;
 
 

int main()
{
	int n;
	cin>>n;
	int a[n];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			break;
		}
		
	
	if((a[n-1]%10)==0)
	{
        flag=1;
	}
    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
	else
    
  {
      cout<<"No"<<endl;
  }
	
   return 0;
}
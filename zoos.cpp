#include<iostream>
using namespace std;


int main()
{
  int c=0,b=0,n=20;
  char a[20];

  for(int i=0;i<n;i++)
{
  cin>>a[i];
}
    
  for(int i=0;i<n;i++)
  {
    
      if((a[i]=='z'))
      {
          c++;
      }

      else if((a[i]=='o'))
      {
          b++;
      }
     

  }
   if((2*c)==b)
      {
          cout<<"Yes"<<endl;
      }
      else 
      {
          cout<<"No"<<endl;
      }
         return 0;

}
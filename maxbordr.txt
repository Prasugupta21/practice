#include<iostream>
using namespace std;


int main()
{
   int t;

   cin>>t;

   while(t--)
   {
          int max=0,largest=0;



       int n,m;
       cin>>n>>m;
       char a[n][m];
        int d,e;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];


           }
       }

       for(int i=0;i<n;i++)
       {

           int b=0;
           for(int j=0;j<m;j++)
           {
             if(a[i][j]=='#')
             {
                 b++;
                 d=b;
                 if(d>max)
               {
                 max=d;
               }
             }
             else
             {
                 b=0;
             }



           }

       }
       cout<<max<<endl;



   }

   return 0;
}
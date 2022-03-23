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
        int d=0,e=0;
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
                
             }
             else
             {
                 if(b>d)
                 {
                     d=b;
                 }
                 b=0;
                 
             }
             
            

           }
           if(d>max)
           {
               max=d;
           }
       }
       for(int j=0;j<m;j++)
       {
        
           int b=0;
           for(int i=0;i<n;i++)
           {
             if(a[i][j]=='#')
             {
                 b++;
               
             }
             else
             {
                 if(b>e)
                 {
                     e=b;
                 }
                 b=0;
             }
            

           }
           if(e>largest)
           {
               largest=e;
           }
       }
            if(max>largest)
             {
                cout<<max<<endl;
             }
             else 
             {
                cout<<largest<<endl;
             }


       
   }
   return 0;
}
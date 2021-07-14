#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j=0,c=0,num;
    cin>>num;
   for(int i=1;c!=num+1;i++)
   {
       j++;
           if(j!=3)
           {
               for(int k=0;k<5;k++)
           {
               if(k==0 || k==4)
                cout<<"*";
               else
                cout<<" ";

           }
           }
                if(j==3)
                {
                   if(c==num)
                    break;
                   else
                   {
                        c++;
                    for(int l=0;l<5;l++)
                    {
                        cout<<"*";
                    }
                    j=0;
                   }
                }
           cout<<"\n";
    }
}


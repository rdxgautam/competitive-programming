#include<iostream>
using namespace std;
int main()
{
    int r,i,gb,pb,p,sum[10],rg,rp,cg,cp,tp,tg,wl=0;
    cin>>r;
    while(wl<r)
    {
        cg=0;
        cp=0;
        tp=0;
        tg=0;
        cin>>gb;
        cin>>pb;
        cin>>p;
    for( i=0;i<p;i++)
    {
        cin>>rg;
        if(rg==1)
        {
           cg++;
        }
        cin>>rp;
         if(rp==1)
        {
           cp++;
        }
    }
    if(wl%2==0)
    {
    tg=cg*gb;
    tp=cp*pb;
    sum[wl]=tg+tp;
    }
    else
    {
    tp=cp*gb;
    tg=cg*pb;
    sum[wl]=tg+tp;
    }
    wl++;
    }
    for(int k=0;k<r;k++)
    {
        cout<<sum[k]<<"\n";
    }
    return 0;
}

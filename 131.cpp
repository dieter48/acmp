/*
Task: "Perepis'";
Link: "http://acmp.ru/index.asp?main=task&id_task=131";
Author: "https://github.com/dieter48";
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,v,s,m=0,i,w=-1;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>v>>s;
    if((s==1)&(m<v))
    {
        m=v;
        w=i;
    }
}
cout<<w;
}

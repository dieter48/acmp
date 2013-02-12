/*
Task: "Ottepel'";
Link: "http://acmp.ru/index.asp?main=task&id_task=264";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int x,a=0,f=0,n,d;
cin>>n;
for(d=1;d<=n;d++)
{
    cin>>x;
    if(x<1) a=0; else a++;
    if(a>f) f=a;
}
cout<<f;
}

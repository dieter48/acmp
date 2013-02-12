/*
Task: "Sbor cherniky";
Link: "http://acmp.ru/index.asp?main=task&id_task=496";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,i,max,a1,a2,ai,x1,x2;
cin>>n>>a1>>a2>>ai;
x1=a1; x2=a2;
max=a1+a2+ai;
for(i=0;i<n-3;i++)
{
    a1=a2; a2=ai;
    cin>>ai;
    if(a1+a2+ai>max) max=a1+a2+ai;
}
if(a2+ai+x1>max) max=a2+ai+x1;
if(ai+x1+x2>max) max=ai+x1+x2;
cout<<max;
}

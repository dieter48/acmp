/*
Task: "Basketball";
Link: "http://acmp.ru/index.asp?main=task&id_task=61";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
int a,b,c,d,i;
using namespace std;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
for(i=0;i<4;i++)
{
scanf("%d%d",&a,&b);
c+=a;
d+=b;
}
if(c>d) cout<<"1";
else if(c<d) cout<<"2";
else cout<<"DRAW";
}

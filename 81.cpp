/*
Task: "Arbyzi";
Link: "http://acmp.ru/index.asp?main=task&id_task=81";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,x,max=0,min=32000,i;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>x;
    if(x>max) max=x;
    if(x<min) min=x;
}
cout<<min<<" "<<max;
}

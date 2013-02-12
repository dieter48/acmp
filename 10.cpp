/*
Task: "Uravnenie";
Link: "http://acmp.ru/index.asp?main=task&id_task=10";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,a,b,c,d;
cin>>a>>b>>c>>d;
for(i=-100;i<=100;i++)
    if ((a*i*i*i + b*i*i + c*i + d) == 0)
        cout<<i<<" ";
}

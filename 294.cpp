/*
Task: "Bolti i gaiki";
Link: "http://acmp.ru/index.asp?main=task&id_task=294";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int k1,l1,m1,k2,l2,m2;
cin>>k1>>l1>>m1>>k2>>l2>>m2;
l1*=k1/100; l1=k1-l1;
l2*=k2/100; l2=k2-l2;
if(l1>l2)l1+=l2,l2=l1-l2,l1-=l2;
l2=k2-l1;l1=k1-l1;
cout<<l1*m1+l2*m2;
}

/*
Task: "Gadanie";
Link: "http://acmp.ru/index.asp?main=task&id_task=23";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i,n,s=0;
cin>>n;
for(i=1;i<=n;i++) if(n%i==0) s+=i;
cout<<s;
}

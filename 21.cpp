/*
Task: "Zarplata";
Link: "http://acmp.ru/index.asp?main=task&id_task=21";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b,c;
cin>>a>>b>>c;
cout<<max(a,max(b,c))-min(a,min(b,c));
}

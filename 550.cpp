/*
Task: "Den' progrmmista";
Link: "http://acmp.ru/index.asp?main=task&id_task=550";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n;
cin>>n;
if((n%4==0)&&(n%100!=0)||(n%400==0)) cout<<"12"<<"/09/"; else cout<<"13"<<"/09/";
if(n<10) cout<<"0";
if(n<100) cout<<"0";
if(n<1000) cout<<"0";
cout<<n;
}

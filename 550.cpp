/*
Task: "Den' progrmmista";
Link: "http://acmp.ru/index.asp?main=task&id_task=550";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,sw;
cin>>n;
if((n%4==0)&&(n%100!=0)||(n%400==0)) sw=12; else sw=13;
cout<<sw<<"/09/"<<n;
}

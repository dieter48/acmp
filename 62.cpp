/*
Task: "Kletki";
Link: "http://acmp.ru/index.asp?main=task&id_task=62";
Author: "https://github.com/dieter48";
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char a,b;
cin>>a>>b;
if((a+b)%2==0) cout<<"BLACK"; else cout<<"WHITE";
}

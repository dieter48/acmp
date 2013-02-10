/*
Task: "Cvetochki";
Link: "http://acmp.ru/index.asp?main=task&id_task=504";
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
if((n%3)==1) cout<<"VGC"; else if((n%3)==2) cout<<"CVG"; else cout<<"GCV";
}

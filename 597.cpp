/*
Task: "Vnezemnie gosti";
Link: "http://acmp.ru/index.asp?main=task&id_task=597";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int r1,r2,r3;
cin>>r1>>r2>>r3;
if((r2+r3)<=r1) cout<<"YES"; else cout<<"NO";
}

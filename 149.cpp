/*
Task: "Razvorot";
Link: "http://acmp.ru/index.asp?main=task&id_task=149";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,i,m[1000];
cin>>n;
for(i=0;i<n;i++) cin>>m[i];
for(i=n-1;i>=0;i--) cout<<m[i]<<" ";
}

/*
Task: "Monetki";
Link: "http://acmp.ru/index.asp?main=task&id_task=106";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int n,m1=0,m0=0,f,x;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;
for(f=1;f<=n;f++)
{
    cin>>x;
    if(x==0) m0++; else m1++;
}
if(m0<m1) cout<<m0; else cout<<m1;
}

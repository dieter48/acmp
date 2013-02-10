/*
Task: "Tort";
Link: "http://acmp.ru/index.asp?main=task&id_task=539";
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
if(n>1)
{
    if(n%2==0) cout<<n/2; else cout<<n;
}
else cout<<"0";
}

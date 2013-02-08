/*
Task: "Konechnie avtomati";
Link: "http://acmp.ru/index.asp?main=task&id_task=35";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,a,b,i;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a>>b; cout<<19*b+(a+239)*(a+366)/2<<endl;
}
}

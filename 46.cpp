/*
Task: "Chislo E";
Link: "http://acmp.ru/index.asp?main=task&id_task=46";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char s[]="2.7182818284590452353602875";
int n;
cin>>n;
if(n==0) cout<<"3";
    else
{
    if(s[n+2]>'4') s[n+1]+=1;
    s[n+2]='\0';
    cout<<s;
}
}

/*
Task: "Chislo E";
Link: "http://acmp.ru/index.asp?main=task&id_task=66";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char a,s[]="qwertyuiopasdfghjklzxcvbnmq";
int i;
cin>>a;
for(i=0;i<26;i++) if(s[i]==a) cout<<s[i+1];
}

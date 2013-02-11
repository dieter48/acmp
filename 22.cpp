/*
Task: "Edinicy";
Link: "http://acmp.ru/index.asp?main=task&id_task=22";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,s=0;
cin>>n;
while(n)
{
    s+=n%2;
    n/=2;
}
cout<<s;
}

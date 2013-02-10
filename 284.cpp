/*
Task: "Podmassiv massiva";
Link: "http://acmp.ru/index.asp?main=task&id_task=284";
Author: "https://github.com/dieter48;
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,a[1001],m,b,d,i,j;
cin>>n;
for(i=1;i<=n;i++) cin>>a[i];
cin>>m;
for(i=1;i<=m;i++)
{
    cin>>d>>b;
    for(j=d;j<=b;j++) cout<<a[j]<<" ";
    cout<<endl;
}
}

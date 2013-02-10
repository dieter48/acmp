/*
Task: "Sortirovka vremeni";
Link: "http://acmp.ru/index.asp?main=task&id_task=119";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,i,m[100],a,b,c;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a>>b>>c;
    m[i]=a*3600+b*60+c;
}
sort(m,m+n);
for(i=0;i<n;i++) cout<<m[i]/3600<<" "<<(m[i]/60)%60<<" "<<m[i]%60<<endl;
}

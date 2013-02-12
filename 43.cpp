/*
Task: "Nuli";
Link: "http://acmp.ru/index.asp?main=task&id_task=43";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int m=-1,i=0;
char c;
while(cin>>c)
{
    if(c=='0') i++; else i=0;
    if(m<i) m=i;
}
cout<<m;
}

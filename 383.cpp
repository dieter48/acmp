/*
Task: "Krasivie chisla - 2";
Link: "http://acmp.ru/index.asp?main=task&id_task=383";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,x=1,sum,i,c;
cin>>n;
while(n>1)
{
    x++;
    sum=0;
    c=0;
    i=x;
    while(i)
    {
        sum+=i%10;
        c++;
        i/=10;
    }
    if(sum%c==0) --n;
    }
cout<<x;
}

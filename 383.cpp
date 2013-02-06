/*
Task: "Красивые числа - 2";
Link: "http://acmp.ru/index.asp?main=task&id_task=383";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,j,co,sum;
int i=1;
cin>>n;
while(n)
{
    j=i;
    co=0;
    sum=0;
    while(j)
    {
        sum+=j%10;
        j/=10;
        co++;
    }
    if(sum%co==0) --n;
    ++i;
}
--i;
cout << i--;
}

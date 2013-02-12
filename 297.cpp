/*
Task: "Kruglyashi";
Link: "http://acmp.ru/index.asp?main=task&id_task=297";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char c;
int i=0;
while(cin>>c)
    if(c=='0'||c=='6'||c=='9') i++;
    else if(c=='8') i+=2;
cout<<i;
}

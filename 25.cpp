/*
Task: "Bol'she - men'she";
Link: "http://acmp.ru/index.asp?main=task&id_task=25";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b;
cin>>a>>b;
if(a<b) cout<<"<";
    else if(a>b) cout<<">";
        else cout<<"=";
}

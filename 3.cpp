/*
Task: "Pyat'y pyat' - dvadcat' pyat'";
Link: "http://acmp.ru/index.asp?main=task&id_task=3";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n;
cin>>n;
if(n<10) cout<<pow(n,2);
    else cout<<((n/10)*(n/10+1))<<"25";
}

/*
Task: "Metro";
Link: "http://acmp.ru/index.asp?main=task&id_task=263";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,i,j;
cin>>n>>i>>j;
cout<<min(n-abs(i-j),abs(i-j))-1; ;
}

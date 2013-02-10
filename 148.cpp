/*
Task: "NOD";
Link: "http://acmp.ru/index.asp?main=task&id_task=148";
Author: "https://github.com/dieter48;
*/
#include <stdio.h>
#include <iostream>
using namespace std;

 int gcd(int a, int b) {
   return b? gcd(b, a % b) : a;
 }

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b;
cin>>a>>b;
cout<<gcd(a,b);
}

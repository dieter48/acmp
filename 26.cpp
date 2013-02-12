/*
Task: "Dve okrejnosti";
Link: "http://acmp.ru/index.asp?main=task&id_task=26";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int x1,x2,y1,y2,r2,r1;
double r;
cin>>x1>>y1>>r1>>x2>>y2>>r2;
r=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
if((r1+r2>=r)&(r+r2>=r1)&(r+r1>=r2)) cout<<"YES"; else cout<<"NO";
}

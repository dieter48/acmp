/*
Task: "Dlina otrezka";
Link: "http://acmp.ru/index.asp?main=task&id_task=529";
Author: "https://github.com/dieter48;
*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
cout<<fixed<<setprecision(5)<<sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

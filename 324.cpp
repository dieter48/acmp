/*
Task: "Chetiregznachniy palidrom";
Link: "http://acmp.ru/index.asp?main=task&id_task=324";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
string s;
cin>>s;
if((s[0]==s[3])&&(s[1]==s[2])) cout<<"YES"; else cout<<"NO";
}

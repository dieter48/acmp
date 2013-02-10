/*
Task: "V odnom shage ot shast'ya";
Link: "http://acmp.ru/index.asp?main=task&id_task=327";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
bool ch(int a)
{
    if((a/100000+a/10000%10+a/1000%10)!=(a/100%10+a/10%10+a%10)) return false;
    return true;
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,i,f;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>f;
    if(ch(f+1)||ch(f-1)) cout<<"Yes"; else cout<<"No";
    cout<<endl;
}
}

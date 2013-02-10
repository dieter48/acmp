/*
Task: "Avtobysnaya ekskyrsiya";
Link: "http://acmp.ru/index.asp?main=task&id_task=233";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,f,i,c=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>f;
    if(f<=437)
    {
        cout << "Crash " << i;
        c++;
        break;
    }
}
    if(c==0) cout << "No crash";
}

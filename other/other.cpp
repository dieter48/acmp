/*
В input.txt дано n-число последующих строк.
Далее идут оные в формате "ИмяУченика ФамилияУчениека Школа".
Вывести в output.txt количество учащихся 10 школы.

input.txt:			| output.txt
7					| 3
asd sdgg 10			|
adf dfhjj 11		|
fdgsh fdjj 12		|
sdgdh dhdj 10		|
sdgsg djdj 10		|
sdff djdgf 13		|

*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int r,n,res=0,i;
string a,b,c;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a>>b>>c;
    r=atoi(c.c_str());
    if(10==r) res++;
}
cout<<res;
}

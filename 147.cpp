/*
Task: "Chisla fibonachi";
Link: "http://acmp.ru/index.asp?main=task&id_task=147";
Author: "https://github.com/dieter48";
*/
#include <iostream>
#include <stdio.h>

/*vozvrashaet n chislo fibonachi; vremya O(log(n)); pamyat' O(1); */
int fib(int n){
  int a = 1, ta,
      b = 1, tb,
      c = 1, rc = 0,  tc,
      d = 0, rd = 1;
  while (n)
  {
    if (n & 1)
    {
      tc = rc;
      rc = rc*a + rd*c;
      rd = tc*b + rd*d;
    }
    ta = a; tb = b; tc = c;
    a = a*a  + b*c;
    b = ta*b + b*d;
    c = c*ta + d*c;
    d = tc*tb+ d*d;

    n >>= 1;

  }
  return rc;
}

using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n;
cin>>n;
cout<<fib(n);
}

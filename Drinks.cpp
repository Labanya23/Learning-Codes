//Codeforce
//practice 4 number

#include<stdio.h>
int main(){
  double p,b,c=0;
  int i,a;
  scanf("%d",&a);
  p=a*100.0;
  for(i=0;i<a;i++)
  {
      scanf("%lf",&b);
      c=c+b;
  }
  printf("%.12f",c/p*100.0);
  return 0;
  }
/*
3
50 50 100

output
66.666666666667
*/

#include <stdio.h>
float input()
{
  float n;
  printf("Enter the number to find square root:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt,t;
  sqrt=n/2;
  t=0;
  while(sqrt!=t)
  {
    t=sqrt;
    sqrt=((n/t)+t)/2;
  }
  return sqrt;
}
void output(float n,float sqrt)
{
  printf("The squareroot of %.3f is %.3f", n,sqrt);
}
int main()
{
  float n,sqrt;
  n=input();
  sqrt=my_sqrt(n);
  output(n,sqrt);
  return 0;
}


  



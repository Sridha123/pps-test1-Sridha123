#include<stdio.h>
void input(int*a,int*b,int*c)
{
  printf("Enter three numbers\n");
  scanf("%d %d %d",a,b,c);
}
void cmp(int a,int b,int c,int *l)
{
  if((a>b)&&(a>c))
  printf("A is *big\n");
  else if((b>a)&&(b>c))
  printf("B is *big\n");
  else if((c>a)&&(c>b))
  printf("c is *big\n");
}
void output(int*l)
{
  printf("big number is:%d\n",*l);
}
int main()
{
  int a,b,c,l;
  input(&a,&b,&c);
  cmp(a,b,c,&l);
  return 0;
}



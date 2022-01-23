#include<stdio.h>
#include<string.h>
void input_two_string(char*a, char*b)
{
  printf("Enter the 1st string: ");
  scanf("%s",a);
  printf("Enter the 2nd string: "); 
}
int cmp(char*a,char*b)
{
  int i,t;
  for(i=0; a[i] && (a[i] == b[i]); i++);
  t=a[i] - b[i];
  return t;
}
void output(char*a, char*b, int t)
{
  if(t < 0)
  {
    printf("%s is greater than %s\n", b,a);
  }
  else if(t > 0)
  {
    printf("%s is greater than %s\n", a, b);
  }
  else
  {
    printf("%s is equal to %s\n", b, a);
   }
 }
 int main()
  {
    char a[50], b[50];
    int t;
    input_two_string(a, b);
    t=cmp(a, b);
    output(a, b, t);
    return 0;
    }

   
  

  

  

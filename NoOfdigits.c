#include<stdio.h>
int main()
{
  int n,number;
  scanf("%d",&n);
  while(n!=0)
  {
      number+=1;
      n=n/10;
  }
  printf("%d",number);
  return 0;
}

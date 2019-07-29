#include<stdio.h>
int main()
{
  int N,K,i,sum=0;
  scanf("%d %d",&N,&K);
  int array[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&array[i]);
  }
  for(i=0;i<K;i++)
  {
      sum+=array[i];
  }
  printf("%d",sum);
  return 0;
}

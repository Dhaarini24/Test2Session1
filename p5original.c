#include<stdio.h>
int input_array_size()
{
  int x;
  printf("enter the number of inputs\n");
  scanf("%d",&x);
  return x;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
      a[1]=0;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=0;
  while(a[i]==0)
}
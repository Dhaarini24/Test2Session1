#include<stdio.h>
#include<math.h>
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
    }
  a[1]=0;
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=0;
  while(i<sqrt(n))
    {
      /* make the mulitples of i zero */
      while(a[i]==0 && i < sqrt(n))i++;
      for(int k=i+i;k<n;k+=i)
        a[k]=0;
      i++;
    }
  
}
void output(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("%d",a[i]); 
    }
  printf("%d",n);
}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}
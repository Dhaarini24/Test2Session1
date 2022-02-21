#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1)
{
  printf("enter the inputs\n");
  scanf("%f%f",x1,y1);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 float d1,d2,d3;
 d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
 d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
 if(d1+d2>d3 && d2+d3>d1 && d1+d3>d2)
 {
   return 1;
 }
 else
 {
   return 0;
 }
}
void output(int istriangle)
{
  if(istriangle==1)
  {
    printf("the 3 lines form a triangle");
  }
  else
  {
   printf("the 3 lines does not form a triangle");
  }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3);
  int n;
  n=is_triangle(x1,y1,x2,y2,x3,y3);
  output(n);
}
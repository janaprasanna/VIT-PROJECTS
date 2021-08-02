#include<stdio.h>
#include<math.h>
int main()
{
  float AB,BC,AC,a;
  int x1,y1,y2,x2,x3,y3;
  printf("enter the coordinates of x1 and y1 :");
  scanf("%d,%d",&x1,&y1);
  printf("\nenter the coordinates of x2 and y2 :");
  scanf("%d,%d",&x2,&y2);
  printf("\nenter the coordinates of x3 and y3 :");
  scanf("%d,%d",&x3,&y3);
  AB=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  BC=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  AC=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  a= AB+BC;
  if(a==AC)
  {
    printf("\nthey are collinear");
  }
  else
  {
    printf("\nthey are not collinear");
  }
  return 0;

}

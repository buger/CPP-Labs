#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void form (int MM[],int LL[],int CC[],int r1,int r2, int r3)
{
 for (i=0;i<r1;i++)
	{
   MM[i]=random(10)+1;
   printf("%d\n",MM[i]);
   }
for (j=0;j<r2;j++)
	{
   CC[j]=random(10)+1;
   }
for (k=0;k<r3;k++)
	{
   LL[k]=random(10)+1;
   }
  }
   void func (int M[],int L[],int C[],int r1,int r2, int r3)
{
int p1=1,p2=1,p3=1,p4=1;
float z=0,h=0,g=0;
int i,j,k;
for(i=0;i<r1;i++)
	{
   p1=p1*(M[i]-1);
  // printf("%d",M[i]);
  // printf("\n");
   p4=p4*M[i];
   }
for (j=0;j<r2;j++)
	{
   p2=p2*(C[i]-5);
   }
for (k=0;k<r3;k++)
	{
   p3=p3*L[i];
   }
h=p1+p2;
g=p3-p4;
z=h/g;
printf("gggggg %f\n",g);
printf("ffffff %f\n",h);
printf("Vivod p1 %d\n",p1);
printf("Vivod p2 %d\n",p2);
printf("Vivod p3 %d\n",p3);
printf("Vivod p4 %d\n",p4);
printf("Vivod Z %f\n",z);
}

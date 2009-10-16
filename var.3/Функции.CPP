 #include <iostream.h>
 #include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
const int r1=7;
const int r2=8;
const int r3=6;
void func (int M[r1],int L[r3],int C[r2]);

void main()
{randomize();
 int i,j,k;
int MM[r1],LL[r3],CC[r2];
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
func (MM,LL,CC);
getch();
}
 void func (int M[r1],int L[r3],int C[r2])
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

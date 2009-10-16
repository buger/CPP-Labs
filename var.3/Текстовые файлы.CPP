#include <stdio.h>
#include <stdlib.h>

void main()

{ FILE*ft,*zp;
int c='a',d,ch,j;
ft=fopen("inp.txt","w");
if(!ft) { puts("ne cozdat fail\n");
	 exit(1);
	 }

fprintf(ft,"fhjhhahfjahwiuoweiitudbcanvczxccdfee");
fclose(ft);

zp=fopen("g.txt","w");
for(j=0;j<5;j++)
{
d=0;
ft=fopen("inp.txt","r");
while((ch=fgetc(ft))!=EOF)
{if(c==ch)
{ d++;
printf("===%c",c);
}
}
fclose(ft);
fprintf(zp,"bykv(%c)-%d\n",c,d);
c++;
}

fclose(zp);
}


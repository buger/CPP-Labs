#include <stdio.h>
#include <stdlib.h>

main()

{
 FILE*f_out=fopen("Int.dat","w+b");
int i,e=0;
int arr[100],kon[200];
int number;
randomize();

if(! f_out) { puts("ne cozdat fail\n");
	     exit(1);
	     }
for(i=0;i<100;i++)
   { number=random(100)-50;
   fwrite(&number,sizeof(int),1,f_out);
   }
fclose(f_out);

f_out=fopen("Int.dat","r+b");
if(!f_out)
{ puts("ne proghest\n");
	     exit(1);
             }
fread(&arr,sizeof(int),100,f_out);
 e=0;
for(i=0;i<100;i++)
{ if(arr[i]%2!=0)
    { kon[e]=arr[i];
    e++;
    printf("e`111-%d,uu-%d\n",e,i);
    }
    //printf("gggggd%d\n",i);
    }
for(i=0;i<100;i++)
  {kon[e]=arr[i];
   e++;
  // printf("eeeeeee%d\n",e);
   }
fclose(f_out);

f_out=fopen("Int.dat","wb");
fwrite(&kon,sizeof(int),e,f_out);
fclose(f_out);
return 0;
}




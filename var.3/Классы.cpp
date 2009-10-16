#include<iostream.h>
#include<string.h>
#include<ctype.h>

class scl
		{
      char str[90];

      public:
      scl(char hello[90])
      {strcpy(str,hello);}

      scl(const scl&scl1);
      void printclass()
      	{
         cout<<str<<endl;
         }
      void slozenie(scl ps)

      {
      strcat(str,ps.str);
      }

    void  ymeniscenie ()
            {
            for(int i=strlen(str);i>=0;i--)
            str[i]=tolower(str[i]);
            }

      };


scl::scl(const scl&scl1)
		{
      strcpy(str,scl1.str);
      }

void main()

{
scl scl1("RRRRRRR"),scl3("!Q!Q!Q"),scl4("SUSCium");
scl1.printclass();
scl4.printclass();

//scl scl2(scl1);
//scl1.printclass();
//scl2.printclass();
cout<<"+++++++++++++++++++++++++++++++++++++++++=\n";
scl1.slozenie(scl3);
scl1.slozenie(scl4);
scl1.ymeniscenie();

scl1.printclass();
int k;
cin>>k;
}
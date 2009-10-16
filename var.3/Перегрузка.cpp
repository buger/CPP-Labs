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
      scl &operator+(scl o)

      {
      strcat(str,o.str);
      }

      		scl &operator++()
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
scl scl1("INTEL"),scl3("4"),scl4("poopPPPPm");
scl1.printclass();
scl4.printclass();

//scl scl2(scl1);
//scl1.printclass();
//scl2.printclass();
cout<<"__________________________________________\n";
scl1+scl4+scl3;
scl1++;
scl1.printclass();
int k;
cin>>k;
}

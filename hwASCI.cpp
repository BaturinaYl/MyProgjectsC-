//Homework #3
//Baturina Yelena
// Enter your name and get ASCI code 

#include <iostream>
#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
using namespace std;

int main()
    {
  	setlocale (LC_CTYPE,"");
	unsigned char fam[10], ch;
	//wchar_t name[1];
	//wchar_t sername[1];

	cout <<"Введите Ваши фамилию, имя, отчество :"<<endl;
	cin >>fam;
        cout<<"Фамилия: "<<endl;	
	for (int i=0; i<10; i++)
		{
			//if (fam[i]!=' ')
		//{
              //     int c = ascii_cod (fam[i]);
                        ch=fam[i];
			ch-=80;
			cout<<fam[i]+"#92"<< "= "<<(int)ch<<endl;
                        printf("%c \n", fam[i]);


 			//cout<<name<<"="<<(int)name[0]<<endl;
 			//cout<<sername<<"="<<(int)sername[0]<<endl;

//			printf("%c\n",fam[i]);
		}
	//	}
	return 0;	
}

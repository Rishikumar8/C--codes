#include<iostream>
#include<string.h>
using namespace std;
int main()
{
       char str1[]="Rishi";
       char str2[]="Rishi";
      // int l=strlen(str1);
       //cout<<"Length is "<<l;

      /* strcat(str1,str2);
       cout<<str1;*/
      
      /* strrev(str1);
       cout<<str1;*/

        int value = strcmp(str1,str2);
        if(value==0)
        {
            cout<<"String are equal";
        }
        else
        {
            cout<<"String are not equal";
        }




        return 0;

}

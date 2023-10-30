#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char Myname[20];
    cout<<"Enter Your Full Name:"<<endl;
    gets(Myname);
    cout<<"My name is "<<Myname<<endl;

    
   string Myaddress;
   cout<<"Enter Your Full Address:"<<endl;
   getline(cin,Myaddress);
   cout<<"My Address is "<<Myaddress;


    return 0;


}
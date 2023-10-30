#include<iostream>
using namespace std;
int main()
{
    string MyAddress="Learn coding";
    cout<<"Original Value "<<MyAddress<<endl;
    MyAddress.push_back('A');
    cout<<"Modified value: "<<MyAddress<<endl;
    MyAddress.pop_back();
    cout<<"Pop value:"<<MyAddress;



}
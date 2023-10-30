//write a c++ program  to print Multiplication table of a number using classes
#include<iostream>
using namespace std;
class A
{
    private:
    int n,i,r;
    public:
    void input()
    {
        cout<<"Enter Any Number:";
        cin>>n;
    }
    void output()
    {
        for(i=1;i<=10;i++)
        {
            r=n*i;
            cout<<n<<"*"<<i<<"="<<r<<endl;
        }
    }
};
int main()
{
        A obj;
        obj.input();
        obj.output();
        return 0;
}

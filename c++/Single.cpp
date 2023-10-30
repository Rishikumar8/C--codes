#include<iostream>
using namespace std;
class Base
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter Two numbers:"<<endl;
        cin>>a>>b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
class Derive:public Base
{
        private:
        int m,n;
        public:
        void getdata()
        {
            cout<<"Enter Values:"<<endl;
            cin>>m>>n;
        }
        void putdata()
        {
            cout<<m<<" "<<n<<endl;
        }

};
int main()
{
    Base obj1;
    Derive obj2;
    obj1.input();
    obj1.show();
    obj2.getdata();
    obj2.putdata();
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
int main()
{
      vector<int> vec1; //zero length integer vector
      vector<char> vec2(4); //4-element character vector
      vector<char> vec(vec2);// 4-element character vector from vec2
      vector<int> vec4(6,3); //6-element vector of 3s 

      
      int element ,size;
      cout<<"Enter the size of your vector"<<endl;
      cin>>size;
      for(int i=0;i<size;i++)
      {
        cout<<"Enter element to add to this vector:";
        cin>>element;
        vec1.push_back(element);
      }

      
    //  display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    //   vec1.insert(iter+2,566);
      display(vec1);
      


    //   vec1.pop_back();
    //   display(vec1);

      return 0;
}
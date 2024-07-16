#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4>a ={1,2,3,4};//Normal array

    array<int,4> b = {3,4,5,6};//STL array
        cout<<endl;
    for(int i =0;i<b.size();i++)
    {
        cout<<b.at(i)<<endl;
    }
    cout<<"last element: "<<b.back()<<endl;
    cout<<"first element: "<<b.front()<<endl;
    a.swap(b);
    for(int i =0;i<b.size();i++)
    {
      cout<<b.at(i)<<endl;
    }
    if(b.empty())
    {
        cout<<"array empty";
    }
    else{
        cout<<"array not empty"<<endl;
    }
    int ele=2,c=0;
    for(int i =0;i<b.size();i++){
        if(b[i]==ele){
                c++;
        }
    }
    cout<<"element found "<<c<<" times"<<endl;
}





#include<iostream>
using namespace std;
int main()
{
    string str1 = "Hello, ";
    string str2 = "World";
    string result = str1+str2;
    cout<<"Concatenated string : "<<result<<endl;

    string substr = "World";
    size_t found = result.find(substr);
    if(found!= string::npos)
     {
         cout<<"Substring found at  index: "<<found<<endl;
     }
     else{
        cout<<"Substring not found"<<endl;
     }

    return 0;

}





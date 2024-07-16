#include<iostream>
using namespace std;
int main()
{
    string str1 = "Hello,";
    string str2 = "World";
    string result = str1+str2;
    cout<<"Concatenated string : "<<result<<endl;
    cout<<"length of the string 1 is : "<<str1.length()<<endl;
    cout<<"length of the string 2 is : "<<str2.length()<<endl;
    cout<<"substring is : "<<str2.substr(2,3)<<endl;
    string substr = "World";
    size_t found = str1.find(substr);
    if(found!= string::npos)
     {
         cout<<"Substring found at  index: "<<found<<endl;
     }
     else{
        cout<<"Substring not found"<<endl;
     }
    int res = str1.compare(str2);
    if (res == 0) {
        cout << "Strings are equal" <<endl;
    } else if (res > 0) {
        cout << "String str1 is greater than str2" << endl;
    } else {
        cout << "String str1 is less than str2" <<endl;
    }
}





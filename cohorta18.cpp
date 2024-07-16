#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("chetna");
    s.push("Preeti");
    s.push("bhoomi");

    cout<<"top element: "<<s.top()<<endl;
    s.pop();
    cout<<"element after pop: "<<s.top()<<endl;

}

#include<iostream>

using namespace std;
void AutoDemo()
{
    auto x=10;
    cout<<"Value inside function: "<<x<<endl;
}

void RegisterDemo()
{
    register int c =0;
    for(register int i=0;i<10;++i)
    {
        c+=i;
    }
}
int main()
{
    auto x=20;
    AutoDemo();
    cout<<"Value outside function: "<<x<<endl;

    RegisterDemo();
}

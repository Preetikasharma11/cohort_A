#include<iostream>
using namespace std;
int main(){
 int a,b,c;
 cout<<"enter the no. of classes held: "<<endl;
 cin>>a;
 cout<<"enter the no. of classes attended: "<<endl;
 cin>>b;
 c=(a/b)*100;
    if(c>=75){
        cout<<"he/she/others is allowded"<<endl;
    }
else{
    cout<<"not allowded"<<endl;
}
    return 0;
}











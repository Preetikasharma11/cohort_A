#include <iostream>
using namespace std;

void rs_pound(){
float rupees;
cin>>rupees;
cout<<"money in pounds: "<<(rupees*0.0094)<<endl;
}
void pound_rs(){
float pound;
cin>>pound;
cout<<"money in rupees: "<<(pound*106.92)<<endl;
}
void rs_dollar(){
float rs;
cin>>rs;
cout<<"money in dollar: "<<(rs*0.012)<<endl;
}
void dollar_rs(){
float dollar;
cin>>dollar;
cout<<"money in rupees: "<<(dollar*83.50);
}
void rs_yuan(){
    float rs;
    cin>>rs;
    cout<<"money in yuan: "<<(rs*0.087);
}
void yuan_rs(){
float yuan;
cin>>yuan;
cout<<"money in rupees: "<<(yuan*11.47);
}
int main()
{
    int ch;
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        pound_rs();
    case 2:
        rs_pound();
    case 3:
        dollar_rs();
    case 4:
        rs_dollar();
    case 5:
        yuan_rs();
    case 6:
        rs_yuan();
    default:
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}





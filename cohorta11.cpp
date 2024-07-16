#include<iostream>
using namespace std;
int main()
{
    int n,n3,x=0,y=0,z=0;
    char n1,n4,n2;
    do{
    cout<<"enter your choice!!!"<<endl;
    cout<<"press 1 for car park!"<<endl<<"press 2 for bike park"<<endl<<"press 3 for rickshaw_park"<<endl;
    cin>>n;
    switch(n){
    case 1:
       cout<<"car parked"<<endl;
       x++;
       break;
    case 2:
       cout<<"bike parked"<<endl;
       y++;
       break;
    case 3:
        cout<<"rickshaw parked"<<endl;
        z++;
        break;
    default:
       cout<<"not a valid input???";
    }
    cout<<"do u want to park more(y/n): "<<endl;
    cin>>n1;
 }while(n1=='y'||n1=='Y');
  cout<<"total cars parked: "<<x<<endl;
  cout<<"total bikes parked: "<<y<<endl;
  cout<<"total rickshaw parked: "<<z<<endl<<"thanks!!please visit again"<<endl;
  do{
    cout<<"Press a for car removal"<<endl<<"Press b for bike removal"<<endl<<"press c for rickshaw removal"<<endl;
    cin>>n2;
    cout<<endl;
    switch(n2){
    case 'a':
        if(x==0){
            cout<<"no car available"<<endl;
        }
        else{
                cout<<"enter timings in minutes: "<<endl;
        cin>>n3;
    cout<<"car removed"<<endl;
    x--;
    if (n3 >= 60 && n3 <= 200) {
                    cout << "total price for 60 to 200 minutes is 200rs" << endl;
                } else if (n3 > 200 && n3 <= 600) {
                    cout << "total price for more than 200 minutes is 400rs" << endl;
                } else if (n3 < 60) {
                    cout << "total price is 100rs" << endl;
                } else {
                    cout << "sorry!! not more than 600 minutes !! if u want more please contact administrator!!!" << endl;
                }
                break;
        }
            case 'b': {
                if(y==0){
            cout<<"no bike available"<<endl;
        }
        else{
                cout<<"enter timings in minutes: "<<endl;
        cin>>n3;
                cout << "bike removed" << endl;
                y--;


                if (n3 >= 60 && n3 <= 200) {
                    cout << "total price for 60 to 200 minutes is 150rs" << endl;
                } else if (n3 > 200 && n3 <= 600) {
                    cout << "total price for more than 200 minutes is 300rs" << endl;
                } else if (n3 < 60) {
                    cout << "total price is 50rs" << endl;
                } else {
                    cout << "sorry!! not more than 600 minutes !! if u want more please contact administrator!!!" << endl;
                }
                break;
            }
            break;
            }
            case 'c': {
                if(z==0){
                    cout<<"no rickshaw available!!!"<<endl;
                }
                else{
                        cout<<"enter timings in minutes: "<<endl;
                cin>>n3;
                cout << "rickshaw removed" << endl;
                z--;

                if (n3 >= 60 && n3 <= 200) {
                    cout << "total price for 60 to 200 minutes is 130rs" << endl;
                } else if (n3 > 200 && n3 <= 600) {
                    cout << "total price for more than 200 minutes is 260rs" << endl;
                } else if (n3 < 60) {
                    cout << "total price is 40rs" << endl;
                } else {
                    cout << "sorry!! not more than 600 minutes !! if u want more please contact administrator!!!" << endl;
                }
                }
                break;
            }
            default:
                cout << "Invalid choice. Please enter 'a', 'b', or 'c'." << endl;
        }
    cout<<"do u want to remove any vechile(H,N): "<<endl;
    cin>>n4;
  }while(n4=='H'||n4=='h');
  cout<<"total cars left: "<<x<<endl;
  cout<<"total bikes left: "<<y<<endl;
  cout<<"total rickshaw left: "<<z<<endl<<"thanks!!please visit again";
return 0;
}





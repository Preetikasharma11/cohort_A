#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,4,1,5,2,4,9,1,1,4};
    int n=0;
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i]==arr[1])
        {
            n++;
        }
    }
    cout<<"total one : "<<n<<endl;
}


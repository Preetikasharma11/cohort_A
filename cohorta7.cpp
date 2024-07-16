#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{


    for(int i=0;i<n;i++){

            int small=i;
        for(int j=i+1;j<n;j++){
        if(a[small]>a[j])
            swap(a[small],a[j]);
    }
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={7,8,3,1,2};
    int n=5;
    cout<<"Original Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selection_sort(a,n);

    return 0;
}





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
        cout<<a[i]<<" "<<endl;
    }
}
void searching(int a[],int n){
int x,k;
cout<<"enter the element which u want to check: ";
cin>>x;
for(k=0;k<n;k++){
    if(a[k]==x){
        cout<<"element found at index: "<<k<<endl;
        break;
    }
}

if(k==n)
{

    cout<<"Not found"<<endl;
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
    searching(a,n);

    return 0;
}





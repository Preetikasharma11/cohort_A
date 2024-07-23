#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={1,2,3,4};

	for(int i:arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=arr.size()-1;i>0;i--)
	{
		for(int j=i;j<arr.size();j++){
			cout<<arr[j]<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	/*
	for(int i=0;i<arr.size();i++)
	{

		for(int n: arr)
		{
			cout<<n<<" ";
		}
		cout<<endl;
		int x=arr.back();
		arr.pop_back();
		arr.push_front(x);
	}*/

}







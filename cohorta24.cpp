#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> numbers = {1,2 ,5,10,13};
auto it = find_if(numbers.begin(),numbers.end(),[](int n){
return n%2==0;
});
if(it!=numbers.end()){
    cout<<"first even number found: "<< *it <<endl;
}
else{
    cout<<"no even number found"<<endl;
}
return 0;
}

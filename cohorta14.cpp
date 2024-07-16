#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<int> vec = {1, 9, 8, 4, 5};
 // Adding elements
vec.push_back(6); // Adds 6 to the end of the vector
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" "<<endl;
}

// Removing elements
vec.pop_back(); // Removes the last element
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" "<<endl;
}
// Resizing
vec.resize(5); // Resizes the vector to have 10 elements
vec.push_back(10);
vec.push_back(20);
vec.push_back(11);
vec.push_back(30);
vec.push_back(50);
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" "<<endl;
}
sort(vec.begin(), vec.end());
for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}
auto it = find(vec.begin(), vec.end(), 3);
if (it != vec.end()) {
    cout << "Found element: " << *it <<endl;
} else {
    cout << "Element not found" << endl;
}
}

#include <iostream>
using namespace std;

int main() {
int apple_count(5);
int orange_c(7);
int fruit_c(apple_count+orange_c);
//int bad_initialization(doesnt_exist3 + doesnt_exist4)
int narrowing_conversion_function(2.9);

 cout<<"number1: "<<apple_count<<endl;
 cout<<"n2:"<<orange_c<<endl;
 cout<<"n3:"<<fruit_c<<endl;
 cout<<narrowing_conversion_function<<endl;

 return 0;
}


#include <iostream>
using namespace std;

int main() {
int elephant_count;
int l_c{};
int dog_c={10};
int cat_count={15};
//can use expressions as initializer
int domesticated_animals{dog_c+cat_count};

 cout<<"number1: "<<elephant_count<<endl;
 cout<<"n2:"<<l_c<<endl;
 cout<<"n3:"<<dog_c<<endl;
 cout<<"n4:"<<cat_count<<endl;
 cout<<"domesticated animal count: "<<domesticated_animals<<endl;
 return 0;
}


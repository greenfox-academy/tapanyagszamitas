#include <iostream>
#include <string>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {

vector <int> int_vector;

for(int i = 0; i < 5; i++){
    int_vector.push_back(i);
    cout<< int_vector[i] << endl;
}


  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {

    // -at()
    // vector <int> my_vector = {1, 2, 3};
    // my_vector.at(1) = 5;
    // for (int i = 0; i < 3; i++) {
    //     cout << my_vector[i] << "\n";
    // }

    // -reserve()
    // vector <int> my_vector;
    // my_vector.reserve(10);
    // for (int i = 0; i < 10; i++) {
    //     cout << my_vector[i] << " ";
    // }

    // vector <int> my_vector = {1, 2, 3, 4};
    // my_vector.insert(my_vector.begin(), 52);
    // my_vector.insert(my_vector.end(), 52);
    // for (int i = 0; i < my_vector.size(); i++) {
    //     cout << my_vector[i] << " ";
    // }

    vector <int> my_vector = {1, 2, 3};
    int last_element = my_vector.back();
    cout << last_element;
    



    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even." << endl;
    } else {
        cout << "The number " << number << " is odd." << endl;
    }

    return 0;
}


/////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {

    std::cout<< "hello world" << std::endl;
    return 0;
}

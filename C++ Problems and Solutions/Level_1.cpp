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

////////////////////////////////////////////////////////////////////////

#include <iostream>

int main(){

    for (int i = 1; i<= 10; i++){
         std::cout << i << " ";
    }
       return 0;
}

////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number ";
    cin >> number;
    if(number % 2 == 0){

        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    cout << "counting from 1 to 5 using a for loop: ";
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }

    cout << "counting from 5 to 1 using a while loop: ";
    int i = 5;
    while(i >= 1){
        cout << i << " ";
        i--;
    }
    cout << endl;
    return 0;

}
///////////////////////////////////////////////////////////////////////////
# include <iostream>
# include <list>
# include <map>
using namespace std;

int main(){

    cout << "hello world" <<endl;

    for(int i = 0; i <= 7; i++)
        cout << i << " ";

    int ibo = 27;
    if(ibo < 79){
        cout << " yes correct" << " ";
    }else{

    cout<< "no wrong" << " ";
    }
}

// Задача: вывести следущее четное число после заданного числа.
// Через условные конструкции:
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    if ( num % 2 == 0){
        cout <<  num + 2;
    } else {
        cout << num + 1;
    }
    return 0;
}

// Через арифметику:
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << num + 2 - (num % 2);
    return 0;
}

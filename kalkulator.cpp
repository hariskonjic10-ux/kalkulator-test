//testna izmena

#include <iostream>
#include <string>
using namespace std;
int main() {
    int a,b;
    char znak;
    cin>>a;
    cin>>znak;
    cin>>b;
    
    switch(znak) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if(b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            case '%':
            if(b != 0) {
                cout << "Result: " << a % b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
    return 0;
}
//TO je opcija A
//sprememba
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
            case '^':
            {
                int result = 1;
                for(int i = 0; i < b; i++) {
                    result *= a;
                }
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
    return 0;
}
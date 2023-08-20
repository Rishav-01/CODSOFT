#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "<---------Calculator---------->" << endl;
    double a, b;
    char op;
    cout << "Enter Number a: ";
    cin >> a;
    cout << "Enter Number b: ";
    cin >> b;
    cout << "Type the operation you want to perform ";
    cin >> op;
    
    if(op == '+'){
        cout << "You have chosen Addition" << endl;
        cout << "Answer is " << a + b << endl;
    }
    else if(op == '-'){
        cout << "You have chosen Subtraction" << endl;
        cout << "Answer is " << a - b << endl;
    }
    else if(op == '*'){
        cout << "You have chosen Multiplication" << endl;
        cout << "Answer is " << a * b << endl;
    }
    else if(op == '/'){
        cout << "You have chosen Division" << endl;
        if(b == 0) cout << "Division by 0 is not possible";
        else cout << "Answer is " << a / b << endl;
    }
    else cout << "Enter valid operator";
}

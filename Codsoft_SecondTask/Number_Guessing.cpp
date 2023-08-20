#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int num = rand() % 100, count = 1;              // Generates random number between 1 - 100

    while(true){
        int x;
        cout << "Enter the Number: ";
        cin >> x;
        if(x == num){
            cout << "You Guessed the Number in " << count << " Moves !" << endl;
            break;
        }
        else if(x > num){
            count++;
            cout << "Lower The Number Please" << endl << endl;
        }
        else{
            cout << "Higher The Number Please" << endl << endl;
            count++;
        }
    }
    return 0;
}
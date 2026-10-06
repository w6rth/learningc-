#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {

    int so = 1;
    while (so >= 1){
        so = 0;
cout << endl; 
cout << "Welcome!" << endl;
cout << "Choose which program you would like to enter: "<< endl;
cout << "A. Addition " << endl;
cout << "B. Subtraction " << endl;
cout << "C. Multiplication " << endl;
cout << "D. Division " << endl;

char x;
cout << "Choose which program you would like to enter: "<< endl;
cin >> x;

string ans;

switch (x){ 
    case 'A':
    case 'a':{
        int n1, n2;
        cout << "Addition: Choose two numbers" << endl;
        cout << "First number: ";
            cin >> n1;
        cout << "Second number: ";
            cin >> n2;
            int add = n1 + n2;
        cout << "The answer is: " << add << endl;
        cout << "Would you like to try again? Yes or No: ";
        cin >> ans;
        if (ans == "yes" || ans == "Yes" || ans == "YES"){
            so = 1;
        }
        else if (ans == "no" || ans == "No" || ans == "NO"){
            so = 0;
        }
    break;
    }

    case 'B':
    case 'b':{
        int n1, n2;
        cout << "Subtraction: Choose two numbers" << endl;
        cout << "First number: ";
            cin >> n1;
        cout << "Second number: ";
            cin >> n2;
            int sub = n1 - n2;
        cout << "The answer is: " << sub << endl;

        cout << "Would you like to try again? Yes or No: ";
        cin >> ans;
        if (ans == "yes" || ans == "Yes" || ans == "YES"){
            so = 1;
        }
        else if (ans == "no" || ans == "No" || ans == "NO"){
            so = 0;
        }
    break;
    }

    case 'C':
    case 'c':{
        int n1, n2;
        cout << "Multiplication: Choose two numbers" << endl;
        cout << "First number: ";
            cin >> n1;
        cout << "Second number: ";
            cin >> n2;
            int mul = n1 * n2;
        cout << "The answer is: " << mul << endl;
        cout << "Would you like to try again? Yes or No: ";
        cin >> ans;
        if (ans == "yes" || ans == "Yes" || ans == "YES"){
            so = 1;
        }
        else if (ans == "no" || ans == "No" || ans == "NO"){
            so = 0;
        }
    break;
    }

    case 'D':
    case 'd':{
        int n1, n2;
        cout << "Division: Choose two numbers" << endl;
        cout << "First number: ";
            cin >> n1;
        cout << "Second number: ";
            cin >> n2;
        float div = (float) n1 / (float) n2;
        cout << "The answer is: " << div << endl;
       cout << "Would you like to try again? Yes or No: ";
        cin >> ans;
        if (ans == "yes" || ans == "Yes" || ans == "YES"){
            so = 1;
        }
        else if (ans == "no" || ans == "No" || ans == "NO"){
            so = 0;
        }
    break;
    }

    default:
        cout << "Invalid input." << endl;
        cout << "Would you like to try again? Yes or No: ";
        cin >> ans;
        if (ans == "yes" || ans == "Yes" || ans == "YES"){
            so = 1;
        }
        else if (ans == "no" || ans == "No" || ans == "NO"){
            so = 0;
        }
    break;
}
    }
    cout << "Thank you!" << endl;
    return 0;
}
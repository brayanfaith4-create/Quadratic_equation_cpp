#include <iostream>
#include <cmath>
using namespace std;

int quadratic_equation(){
    double X1, X2, D;
    double a, b, c, x;

    cout << "Enter a value for a:\n";
    cin >> a;
    cout << "Enter a value for b:\n";
    cin >> b;
    cout << "Enter a value for c:\n";
    cin >> c;

    D = b * b - 4 * a * c;

    if (a == 0){
        cout << "The quadratic equation is undefined:\n";
        int linear_equation;
        cout << "Hence solve the linear equation:\n";
        cout << "Enter the value for b to solve the linear equation:\n";
        cin >> b;
        cout << "Enter the value for c to solve the linear equation:\n";
        cin >> c;
        // bx - c = 0 => x = -c / b
        cout << "x = " << -c / b << endl;
    }
    else if (D == 0){
        cout << "The quadratic equation has real and equal roots:\n";
        cout << "roots: " << -b / (2 * a) << endl;
    }
    else if (D > 0){
        cout << "The quadratic equation has real and Distinct roots:\n";
        X1 = (-b + sqrt(D)) / (2 * a);
        X2 = (-b - sqrt(D)) / (2 * a);
        cout << "X1 = " << X1 << endl;
        cout << "X2 = " << X2 << endl;
    }
    else if (D < 0){
        cout << "The quadratic equation has complex and imaginary roots:\n";
    }
    return 0;
}

int main(){
    quadratic_equation();
    return 0;
}
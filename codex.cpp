#include <iostream>
#include <cmath>

void showmenu() {
    std::cout << "Welcome to calculator program.\n\n";
}

void addition() {
    double a, b;
    std::cout << "Please enter two number: ";
    std::cin >> a >> b;
    std::cout << "result=" << a + b << std::endl;
}

void subtraction() {
    double a, b;
    std::cout << "Please enter two number: ";
    std::cin >> a >> b;
    std::cout << "result=" << a - b << std::endl;
}

void multiplication() {
    double a, b;
    std::cout << "Please enter two number: ";
    std::cin >> a >> b;
    std::cout << "result=" << a * b << std::endl;
}

void division() {
    double a, b;
    std::cout << "Please enter the two number: ";
	std::cin >> a >> b;

    if (b == 0) {
        std::cout << "Cannot divide by zero!" << std::endl;
    }
    else {
        std::cout << "result=" << a / b << std::endl;
    }
}

int main() {
    showmenu();

    while (true) {
        char op;

        std::cout << "enter the operator (+,-,*,/.Q) \n\n";
        std::cin >> op;

        if (op == 'Q') {
            std::cout << "Thanks for using the calculator!" << std::endl;
            break;
        }


        switch (op) {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;

        default:
            std::cout << "Invalid input!" << std::endl;
        }
    }


    return 0;
}


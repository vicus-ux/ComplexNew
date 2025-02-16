#include "Complex.h"
#include <iostream>

int main() {
    Complex a(3.0, 4.0);
    Complex b(1.0, 2.0);


    std::cout << "Complex number a: " << a << std::endl;
    std::cout << "Complex number b: " << b << std::endl;

    // +
    Complex add = a.add(b);
    std::cout << "Add: " << add << std::endl;

    // -
    Complex sub = a.sub(b);
    std::cout << "Subtraction: " << sub << std::endl;

    // *
    Complex mult = a.mul(b);
    std::cout << "Multiplication: " << mult << std::endl;

    // /
    Complex div = a.div(b);
    std::cout << "Division: " << div << std::endl;

    // �����������
    Complex conjugate = a.conj();
    std::cout << "Conjugate of a: " << conjugate << std::endl;
    Complex conjuagate = b.conj();
    std::cout << "Conjugate of b:" << conjuagate << std::endl;

    // ������ � ��������
    std::cout << "Module of a: " << a.getAbs() << std::endl;
    std::cout << "Module of b: " << b.getAbs() << std::endl;
    std::cout << "Argument of a: " << a.getArg() << std::endl;
    std::cout << "Argument of b: " << b.getArg() << std::endl;

    Complex equal = a.equal(b);
    if (equal.getreal() == 1 && equal.getimag() == 1) {
        std::cout << "Equality of value: a = b" << std::endl;
    }
    else {
        std::cout << "Equality of value: a != b" << std::endl;
    }


    Complex res = a.compar(b);
    if (res.getreal() == 0) {
        std::cout << "Module a and b: a = b" << std::endl;
    }
    else if (res.getreal() == 1) {
        std::cout << "Module a and b: a > b" << std::endl;
    }
    else {
        std::cout << "Module a and b: a < b" << std::endl;
    }


    std::cout << "Dawn on the double:" << std::endl;

    Complex addDouble = a + 2.5; 
    Complex subDouble = a - 1.5; 
    Complex mulDouble = a * 3.5; 
    Complex divDouble = a / 2.0;

    std::cout << "a: " << a << std::endl;
    std::cout << "Addition a + 2.5: " << addDouble << std::endl;
    std::cout << "Subtraction a - 1.5: " << subDouble << std::endl;
    std::cout << "Multiplication a * 3.5: " << mulDouble << std::endl;
    std::cout << "Division a / 2.0: " << divDouble << std::endl;
    // output complex value
    /*Complex c;
    std::cout << "Enter a complex number (real and imaginary parts): ";
    std::cin >> c;
    std::cout << "You entered: " << c << std::endl;*/

    return 0;
}
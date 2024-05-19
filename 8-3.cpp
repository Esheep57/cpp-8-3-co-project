#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Complex
{
public:
    Complex(double real, double imaginary);
    Complex(double realPart);
    Complex();
    double get_real() const { return real; }
    double get_imaginary() const { return imaginary; }
    void set_real(double real);
    void set_imaginary(double imaginary);
    friend const Complex operator +(const Complex& number1, const Complex& number2);
    friend const Complex operator -(const Complex& number1, const Complex& number2);
    friend const Complex operator *(const Complex& number1, const Complex& number2);
    friend bool operator ==(const Complex& number1, const Complex& number2);
    friend ostream& operator <<(ostream& outputStream, const Complex& number);
    friend istream& operator >>(istream& inputStream, Complex& number);
private:
    double real;
    double imaginary;
};

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}
Complex::Complex(double realPart) : real(realPart), imaginary(0) {}
Complex::Complex() : real(0), imaginary(0) {}
void Complex::set_real(double real) { this->real = real; }
void Complex::set_imaginary(double imaginary) { this->imaginary = imaginary; }

const Complex operator +(const Complex& number1, const Complex& number2) {
    return Complex(number1.real + number2.real, number1.imaginary + number2.imaginary);
}

const Complex operator -(const Complex& number1, const Complex& number2) {
    return Complex(number1.real - number2.real, number1.imaginary - number2.imaginary);
}

const Complex operator *(const Complex& number1, const Complex& number2) {
    return Complex(number1.real * number2.real - number1.imaginary * number2.imaginary,
        number1.real * number2.imaginary + number1.imaginary * number2.real);
}

bool operator ==(const Complex& number1, const Complex& number2) {
    return (number1.real == number2.real && number1.imaginary == number2.imaginary);
}

ostream& operator <<(ostream& outputStream, const Complex& number) {
    outputStream << number.real;
    if (number.imaginary < 0) {
        outputStream << number.imaginary << "i";
    }
    else {
        outputStream << "+" << number.imaginary << "i";
    }
    return outputStream;
}

istream& operator >>(istream& inputStream, Complex& number) {
    double realPart;
    inputStream >> realPart;
    number.real = realPart;
    return inputStream;
}

int main() {
    Complex number1, number2(5, -7);
    cout << "Enter the real part of number1: ";
    cin >> number1;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;

    if (number1 == number2) {
        cout << "number1 is equal to number2." << endl;
    }
    else {
        cout << "number1 is not equal to number2." << endl;
    }

    Complex plus = number1 + number2;
    cout << number1 << " + " << number2 << " equals " << plus << endl;

    Complex minus = number1 - number2;
    cout << number1 << " - " << number2 << " equals " << minus << endl;

    Complex product = number1 * number2;
    cout << number1 << " * " << number2 << " equals " << product << endl;

    system("PAUSE");
    return 0;
}

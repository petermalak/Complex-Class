#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;
class Complex
{
public:
    Complex();
    Complex(double x,double y);
    void setReal(const double r);
    void setImag(const double im);
    void getImag();
    void getReal();
    Complex operator=(const Complex& other );
    Complex operator+ (const Complex &other);
    Complex operator- (const Complex &other);
    Complex operator* (const Complex &other);
    bool operator== (const Complex &c);
    friend ostream &operator << (ostream &out, Complex& c);
    friend istream &operator >>(istream &in, Complex& c);
    virtual ~Complex();

protected:
    double real;
    double imag;

private:


};

#endif // COMPLEX_H

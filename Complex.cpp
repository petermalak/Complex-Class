#include "Complex.h"
#include <iomanip>
#include <cassert>

using namespace std;

Complex :: Complex()
{
    real = 0 ;
    imag = 0 ;
}
Complex :: Complex(double x,double y)
{
    real = x ;
    imag = y ;
}


void Complex :: setReal( double r)
{
    r = real;

}
void Complex :: setImag( double im)
{
    im = imag;

}

Complex Complex :: operator=(const Complex& other )
{
    real = other.real;
    imag = other.imag;
    return *this;
}
Complex  Complex ::operator+ (const Complex &other)
{
    double newreal = real + other.real;
    double newimag = imag + other.imag;
    Complex temp (newreal, newimag);
    return temp;

}

Complex Complex :: operator- (const Complex &other)
{
    double newreal = real - other.real;
    double newimag = imag - other.imag;
    Complex temp (newreal, newimag);
    return temp;
}
Complex Complex :: operator* (const Complex &other)
{
    double newreal = ( real * other.real ) - ( imag * other.imag );
    double newimag = ( real * other.imag ) + ( imag * other.real );
    Complex temp (newreal, newimag);
    return temp;
}

std::ostream& operator<< (ostream& out, Complex &c)
{

    if(c.real == 0)
    {

        if(c.imag < 0)
        {
            out << c.imag << "i" << endl;
        }

        else if(c.imag == -1)
        {
            out << "-i" << endl;
        }

        else if(c.imag == 1)
        {
            out << "i" << endl;
        }

        else if(c.imag == 0)
        {
            out << c.real << endl;
        }

        else
        {
            out << c.imag << "i" << endl;
        }

    }

    else
    {
        if(c.imag < 0)
        {
            out << c.real << " - " << c.imag * -1 << "i" << endl;
        }

        else if(c.imag == -1)
        {
            out << c.real << " - i" << endl;
        }

        else if(c.imag == 1)
        {
            out << c.real << " + i" << endl;
        }

        else if(c.imag == 0)
        {
            out << c.real << endl;
        }

        else
        {
            out << c.real << " + " << c.imag << "i" << endl;
        }

    }
    return out;
}
std::istream &operator >> (istream &in, Complex& c )
{
    cout << "Enter the real part" << endl;
    in >> c.real;
    cout << "Enter the imagirnary part" << endl;
    in >>  c.imag;
    c.setReal(c.real);
    c.setImag(c.imag);
    return in;
}

bool Complex :: operator== ( const Complex &c)
{
    bool test = true;
    if (c.real!=real || c.imag!=imag )
    {
        test == false;
        return test;
    }
    return test;
}

Complex::~Complex()
{

}

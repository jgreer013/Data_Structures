/*
	Simple complex number class.
  Jeremiah Greer
	August 2015
*/
#include <ostream>
#include <cmath>

#include "Complex.h"

using namespace std;

// Fill in the class implementation here!
// Single param constructor (complex = 0)
Complex::Complex(const double& real) {
  this->real = real;
  this->complex = 0.0;
}

// Two param constructor (real and complex)
Complex::Complex(const double& real, const double& complex) {
  this->real = real;
  this->complex = complex;
}

// Get Real part
double Complex::getReal() const{
  return real;
}

// Get Complex part
double Complex::getImaginary() const{
  return complex;
}

// Return Conjugate
Complex Complex::conjugate() const{
  return Complex(real,complex*-1);
}

// Overload +
Complex Complex::operator+ (const Complex& right) {
  double rl = real + right.real;
  double cm = complex + right.complex;
  return Complex(rl,cm);
}

// Overload -
Complex Complex::operator- (const Complex& right) {
  double rl = real - right.real;
  double cm = complex - right.complex;
  return Complex(rl,cm);
}

// Overload *
Complex Complex::operator* (const Complex& right) {
  double rl = (real*right.real) - (complex*right.complex);
  double cm = (complex*right.real) + (real*right.complex);
  return Complex(rl,cm);
}

// Overload ==
bool Complex::operator== (const Complex& right) {
  double delt = 0.001;
  double rl = real - right.real;
  double cm = complex - right.complex;
  if (abs(rl) <= delt && abs(cm) <= delt) {
    return true;
  }
  else {
    return false;
  }
}

// Overload !=
bool Complex::operator!= (const Complex& right) {
  double delt = 0.001;
  double rl = real - right.real;
  double cm = complex - right.complex;
  if (abs(rl) <= delt && abs(cm) <= delt) {
    return false;
  }
  else {
    return true;
  }
}

// Overload <<
ostream& operator<< (ostream& out, const Complex& thing){
  out << "(" << thing.getReal() << " + " << thing.getImaginary() << "i)";
  return out;
}

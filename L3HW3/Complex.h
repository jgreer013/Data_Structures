#ifndef COMPLEX_H
#define COMPLEX_H

/*
	Simple complex number class.
	Jeremiah Greer
	August 2015
*/
#include <ostream>

using namespace std;

// Class to store and manipulate complex numbers.
class Complex{

  public:
  // No default constructor since a complex with no values doesn't make sense
  Complex(const double& real);     // Will have 0 complex
  Complex(const double& real, const double& complex);
  
  // Fill in the rest of the interface file here!
  double getReal() const;
  double getImaginary() const;
  
  Complex conjugate() const;
  
  Complex operator+ (const Complex& right);
  Complex operator- (const Complex& right);
  Complex operator* (const Complex& right);
  
  bool operator== (const Complex& right);
  bool operator!= (const Complex& right);
  
  private:
  double real;
  double complex;

};

ostream& operator<< (ostream& out, const Complex& thing);

#endif

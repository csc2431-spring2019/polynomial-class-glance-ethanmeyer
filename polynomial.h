#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial{
	size_t _degree;
	float* _coefficients;
public:
	Polynomial(size_t);
	Polynomial(size_t, const float*);
	Polynomial(const Polynomial&);
	~Polynomial();
	const Polynomial Sum(const Polynomial&)const;
	const Polynomial Subtract(const Polynomial&)const;
	const Polynomial Minus()const;
	const Polynomial Multiply(const Polynomial&)const;
	const Polynomial Divide(const Polynomial&)const;
	const Polynomial Derive()const;
	float Evaluate(float)const;
	float Integrate(float, float)const;
	const Polynomial& operator=(const Polynomial);
	string ToString()const;
	ostream& Write(ostream&)const;
	istream& Read(istream&);

};



#endif

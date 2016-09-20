// Lab Exercise 1: SimpleCalculator.h

#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H
 
// class SimpleCalculator definition
class SimpleCalculator {
	public:
		SimpleCalculator();
		void add(double, double);
		void subtract(double, double);
		void multiply(double, double);
		void divide(double, double);
		double getAnswer() const;
	private:
		double answer;
};  // end class SimpleCalculator

#endif
#include <.\Calculator.h>

float Calculator::summation(float& num1, float& num2) {
	return num1 + num2;
}
float Calculator::subtraction(float& num1, float& num2) {
	return num1 - num2;
}
float Calculator::multiplication(float& num1, float& num2) {
	return num1 * num2;
}
float Calculator::division(float& num1, float& num2) {
	return num1 / num2;
}
float Calculator::exponentiation(float& num1, float& num2) {
	float num1_ = num1, numst = num1;
	if (num2 == 0) {
		return 0;
	}
	for (int i = 1; i < num2; i++) {
		num1_ *= numst;
	}
	return num1_;
}
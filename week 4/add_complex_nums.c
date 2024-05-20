//write a c program to add two complex numbers using typedef
#include <stdio.h>

typedef struct complex {
    double real;
    double imaginary;
} complex;

complex addComplex(complex num1,complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    complex num1, num2, sum;
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf%lf", &num1.real, &num1.imaginary);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%lf%lf", &num2.real, &num2.imaginary);

    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers is : %.1lf+%.1lfi", sum.real, sum.imaginary);


}
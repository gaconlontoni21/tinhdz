#include <math.h>
#include <stdio.h>
#include <stdbool.h>
// The largest number
int maxofnumber(int number1, int number2){
	int max;
	if (number1 > number2){
		max = number1;
	}else max = number2;
	return max;
}

// The smallest number
int minofnumber(int number1, int number2){
	int min;
	if (number1 < number2){
		min = number1;
	}else min = number2;
	return min;
}

// The largest number in the array
int maxofarray(int array[]){
	int max = array[0];
	int array_size = *(&array + 1) - array;
	for (int i = 1; i < array_size; i++){
		if (max < array[i]){
			max = array[i];
		}
	}
	return max;
}

// The smallest number in the array
int minofarray(int array[]){
	int min = array[0];
	int i = 0;
	int array_size = 0;
	while (array[i] != '\0'){		//	Note: int array_size = *(&array + 1) - array;
		array_size++;		
		i++;
	}
	for (int i = 1; i < array_size; i++){
		if (min > array[i]){
			min = array[i];
		}
	}
	return min;
}

// Greatest common divisor
int gcd(int number1, int number2){
	if (number1 == 0 || number2 == 0){
		return number1 + number2;
	}
	while(number1 != number2){
		if (number1 > number2){
			number1 -= number2;
		}else number2 -= number1;
	}
	return number1;
}

// Least common multiple
int lcm(int number1, int number2){
	return (number1*number2)/gcd(number1, number2);
}

// Circumference of circle
float coc(float radius){
	float pi = 3.14;
	return 2*radius*pi;
}

// Acreage of circle
float aoc(float radius){
	float pi = 3.14;
	return pi*radius*radius;
}

// Circumference of rectangle
float cor(float length, float width){
	return (length+width)*2;
}

// Acreage of retangle
float aor(float length, float width){
	return length*width;
}

// Circumference of triangle
float cot(float a, float b, float c){
	return a+b+c;
}

// Acreage of triangle
float aot(float a, float b, float c){
	float p = cot(a,b,c)/2;
	float result = sqrt(p*(p - a)*(p - b)*(p - c));
	return result;
}

// Check Integer
bool checkInteger(float number){
	if (number == (int)number){
		return true;
	}else return false;
}
// Check Integer
bool checkFloat(float number){
	if (checkInteger(number) == true){
		return false;
	}else return true;
}


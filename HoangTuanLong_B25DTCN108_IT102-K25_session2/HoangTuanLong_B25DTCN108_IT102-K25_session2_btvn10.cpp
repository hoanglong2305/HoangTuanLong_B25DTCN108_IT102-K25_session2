#include<stdio.h>
#include<math.h>

int main () {
	int a = 1;
	int b = 2;
	int c = 3;
	
	double expression1 = sqrt(pow(a,2)+pow(b,2)) / (c + 1);
	double expression2 = (a * b) / c;
	double expression3 = sqrt(abs(a - b)+ pow(c,2));
	
	double S = expression1 + expression2 - expression3;
	printf("%.2f", S);
}

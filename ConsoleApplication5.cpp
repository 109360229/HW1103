#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
/*
int square(int y) {

	return y * y;
}


int main()
{

	for (int i = 1; i < 11; i++) {
		printf("%d\n", square(i));
	}

}
*/
int power(int x, int y) {

	for (int i = 1; i < y; i++) {
		x = x * x;
	}
	return x;
}
/*
int main()
{
	int X, Y;
	printf("x^y= ?\n");

	printf("Enter x: ");
	scanf_s("%d", &X);

	printf("Enter y: ");
	scanf_s("%d", &Y);

	printf("x^y= %d", power(X, Y));

}
*/
/*
int m(int a, int b, int c) {

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;

}

int main() {
	int a, b, c;
	printf("enter 3 integers:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("max: %d", m(a, b, c));
}
*/
/*
int main() {
	for (int x = 0; x <= 10; x++) printf("x^0.5= %.2f\n", sqrt(x));


}
*/
/*
int main() {
	char s1[60] = "welcome";
	char s2[60];
	int len;

	strcpy_s(s2, s1);
	printf("string2=%s\n", s2);

	len = strlen(s2);
	printf("length of string2= %d\n", len);
}
*/
/*
int main() {
	for (int i = 1; i < 21; i++) {

		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) printf("\n");
	}
}
*/
/*
int main() {
	unsigned seed;

	printf("enter seed: ");
	scanf_s("%u", &seed);

	for (int i = 1; i < 11; i++) {

		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) printf("\n");
	}
}
*/
/*
enum Status { C, WON, LOST };
int roll(void);

int main() {

	int sum, mypoint;
	enum Status gameStatus;

	srand(time(NULL));
	sum = roll();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = C;
		mypoint = sum;
		printf("point: \n", mypoint);
		break;
	}
	while (gameStatus == C)
	{
		sum = roll();
		if (sum == mypoint) gameStatus = WON;
		else
		{
			if (sum == 7) gameStatus = LOST;
		}
	}
	if (gameStatus == WON) printf("palyer wins\n");
	else
	{
		printf("palyer loss\n");
	}

}

int roll(void) {

	int d1, d2, w;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	w = d1 + d2;
	printf("player rolled %d +%d = %d\n", d1, d2, w);
	return w;
}
*/
long fac(long n);

int main()
{
	for (int i = 0; i <= 10; i++) {

		printf("%2d!= %1d\n", i, fac(i));
	}
}

long fac(long n) {

	if (n <= 1) return 1;
	else return(n * fac(n - 1));
}
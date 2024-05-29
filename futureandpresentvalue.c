#include <stdio.h>
#include <stdlib.h>


double power(double A, double B) //defining power function
{
	double num = A;
	double v = 1;
	while(v < B) {
		num = num * A;
		v++;
	}
	return num;
}


int main( int argc, char **argv ) //main function
{
 int a, n;
 double value, present, r, i;

 value = atof(argv[1]);  //initial investment amount
 a = atoi(argv[2]);  //amount added annually
 n = atoi(argv[3]);  //number of years
 r = atof(argv[4])/100;  //annual investment return
 i = atof(argv[5])/100;  //annual inflation rate
 
 int x;
 for(x=1; x<=n; x++) {     //loop that iterates n times and calculates the future and present values
	 value = value + a;
	 value = value * (1+r);    //future value
	 present = value/power((1+i), x); //present value 
 }
 
 // print statemnents
 printf("Future Value: $%.2f\n", value);
 printf("Present Value: $%.2f\n", present);
}

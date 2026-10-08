#include <stdio.h>
#include <math.h>
int main(void){
	double num1, num2, result;
	int choice;
	printf("Enter Number First:");
	scanf("%lf", &num1);
	printf("Enter Number Second:");
	scanf("%lf", &num2);
	printf("Chosse Any Operation:\n");
	printf("1. Power\n2. Square root\n 3.Absolute value\n4. Round/n:");
	printf("Enter Choice:");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			result = pow(num1, num2);
			printf("%2lf ^ %2lf = %2lf\n", num1, num2, result);
			break;
			case 2:
			if (num1 < 0);{
			printf("Error: Cannot Square root Of Negative Number.\n");
			} 
			break;
			case 3:
			result = fabs(num1);
			printf("Absolut value of %.2lf = %2lf\n", num1, result);
			break;
			case 4:
			result = round(num1);
			printf(" %.2lf rounded = %2lf\n", num1, result);
			break;
			default :
				printf("INVALID OPERATION CHOICE\n");
	}
}


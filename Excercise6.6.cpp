#include <stdio.h>

char line[100];
float hours;
float wage;
float overtime = 0.0;
float paycheck;

int main() {
	printf("Enter hours worked: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &hours);

	printf("Enter wage: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &wage);

	if (hours > 40.0) {
		overtime = (hours - 40.0) * 1.5;
		hours = 40.0;
		paycheck = (hours * wage) + (overtime * wage);
	} else {
		paycheck = hours * wage;
	}

	printf("Paycheck: $%0.2f\n", paycheck);

	return(0);
}


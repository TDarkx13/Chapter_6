#include <stdio.h>

char line[100];
int year;
int leap_year = 0;

int main() {
	printf("Enter a year: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

	if (year % 4 == 0) {
		leap_year = 1;

		if (year % 100 == 0) {
			if (year % 400 != 0) {
				leap_year = 0;
			}
		}

	}

	if (leap_year == 1) {
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}

	return(0);
}

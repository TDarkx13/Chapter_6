#include <stdio.h>

int percent_right;
char grade;
char modifier;
char line[100];

int main() {
	printf("Enter the percentage correct: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &percent_right);

	modifier = ' ';

	if (percent_right > 100) {
		printf("Error: out of bounds\n");
		return(1);
	} else if (percent_right < 0) {
		printf("Error: out of bounds\n");
		return(1);
	} else if (percent_right >= 91) {
		grade = 'A';
		if (percent_right >= 98) {
			modifier = '+';
		} else if (percent_right <= 93) {
			modifier = '-';
		}
	} else if (percent_right >= 81) {
		grade = 'B';
		if (percent_right >= 88) {
			modifier = '+';
		} else if (percent_right <= 83) {
			modifier = '-';
		}
	} else if (percent_right >= 71) {
		grade = 'C';
		if (percent_right >= 78) {
			modifier = '+';
		} else if (percent_right <= 73) {
			modifier = '-';
		}
	} else if (percent_right >= 61) {
		grade = 'D';
		if (percent_right >= 68) {
			modifier = '+';
		} else if (percent_right <= 63) {
			modifier = '-';
		}
	} else {
		grade = 'F';
	}

	printf("The grade is %c%c\n", grade, modifier);

	return(0);
}

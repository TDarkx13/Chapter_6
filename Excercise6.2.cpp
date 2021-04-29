#include <stdio.h>

float percent_right;
char grade;
char line[100];

int main() {
	printf("Enter the percentage correct: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &percent_right);

	if (percent_right >= 91.0) {
		grade = 'A';
	} else if (percent_right >= 81.0) {
		grade = 'B';
	} else if (percent_right >= 71.0) {
		grade = 'C';
	} else if (percent_right >= 61.0) {
		grade = 'D';
	} else {
		grade = 'F';
	}

	printf("The grade is %c\n", grade);

	return(0);
}

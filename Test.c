/*
 ============================================================================
 Name        : AgeinDays.c
 Author      : Me
 Version     :
 Copyright   : Your copyright notice
 Description : Age in days program, calculates age in days
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char buffer[BUFSIZ + 1]; // Space for the user to type in their age as a string of character

	int ageInYears; // Variable that will hold the user's age in numeric (integer) form
	int ageInDays; // Will hold the user's age in days

	setvbuf(stdout, NULL, _IONBF, 0); // Turn off output buffering. Required for automated testing.

	printf("Enter your age:\n");
	ageInYears = atoi(fgets(buffer, BUFSIZ, stdin));

	ageInDays = 365 * ageInYears;

	printf("%d years old is about %d days old.\n", ageInYears, ageInDays);

	return EXIT_SUCCESS;
}

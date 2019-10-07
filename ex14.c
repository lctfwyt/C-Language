#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
// int can_print_it(char ch);
// void print_letters(int len, char arg[]);

/* void print_arguments(int argc, char *argv[])
{
	int i = 0;
	
	for(i = 0; i < argc; i++) {
		len = strlen(argv[i]);
		print_letters(len, argv[i]);
	}
} */

void print_letters(char arg[])
{
	int i = 0;
	for(i = 0; i < strlen(arg); i++) {
		char ch = arg[i];
		
		// if(can_print_it(ch)) {
		if(isalnum(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	
	printf("\n");
}

/* int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
} */

int main(int argc, char *argv[])
{
	int i = 0;
	
	for(i = 0; i < argc; i++) {
		print_letters(argv[i]);
	}
	
	// print_arguments(argc, argv);
	return 0;
}

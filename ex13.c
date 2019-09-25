#include <stdio.h>

int main(int argc, char *argv[])
{
	/* if(argc != 2) {
		printf("ERROR: you need one argument.\n");
		// this is how you abort a program
		return 1;
	} */
	
	int j, i = 0;
	for(j = 1; j < argc; j++) {
		printf("argument %d: %s\n", j, argv[j]);
		
		for(i = 0; argv[j][i] != '\0'; i++) {
			char letter = argv[j][i];
			
			// switch upper case to lower
			if(letter >= 65 && letter <= 90) {
				letter = letter + 32;
			}
		
			switch(letter) {
				case 'a':
				// case 'A':
					printf("%d: 'A'\n", i);
					break;
				
				case 'e':
				// case 'E':
					printf("%d: 'E'\n", i);
					break;
				
				case 'i':
				// case 'I':
					printf("%d: 'I'\n", i);
					break;
				
				case 'o':
				// case 'O':
					printf("%d: 'O'\n", i);
					break;
				
				case 'u':
				// case 'U':
					printf("%d: 'U'\n", i);
					break;
					
				case 'y':
				// case 'Y':
					if(i > 2) {
						// it's only sometimes Y
						printf("%d: 'Y'\n", i);
						break;
					}
				
				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
		printf("\n");
	}
	
	return 0;
}

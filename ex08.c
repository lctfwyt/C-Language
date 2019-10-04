#include <stdio.h>

/* char full_name[] = {
	'Z', 'e', 'd',
	 ' ', 'A', '.', ' ',
	 'S', 'h', 'a', 'w', '\0'
}; */ // no error reported

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {
		'Z', 'e', 'd',
		 ' ', 'A', '.', ' ',
		 'S', 'h', 'a', 'w', '\0'
	};
	
	// WARNING: On some systems you may have to change the
	// %ld in this code to a %lu since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n",
			sizeof(areas));
	printf("The number of ints in areas: %ld\n",
			sizeof(areas) / sizeof(int));
	// areas[0] = 100;     // print 100
	// areas[1] = name[0]; // print 90 ('Z')
	printf("The first area is %d, the 2nd %d.\n",
			areas[0], areas[1]);
			// areas[10], areas[1]);
			// 11th is different each time
	
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n",
			sizeof(name));
	printf("The number of chars: %ld\n",
			sizeof(name) / sizeof(char));
	printf("The 4th char in name is %c, the 5th %c.\n",
			name[3], name[4]);
			// 4th is null
			// 5th starts from 1st of full_name, why?
	// name[0] = 'S';
	// printf("%s\n", name); // print "Sed"
	
	printf("The size of full_name (char[]): %ld\n",
			sizeof(full_name));
	printf("The number of chars: %ld\n",
			sizeof(full_name) / sizeof(char));
	printf("The 13th char in full_name is %c, the 14th %c.\n",
			full_name[12], full_name[13]);
			// 13th is null
			// 14th is different each time
	// full_name[1] = 'o';
	// printf("%s\n", full_name); // "Zod A. Shaw"
	
	printf("name=\"%s\" and full_name=\"%s\"\n",
			name, full_name);
	
	return 0;
}

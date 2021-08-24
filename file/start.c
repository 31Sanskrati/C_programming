#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* file;

	// open the file in read-only mode
	file = fopen("myFile.txt", "r");

	if (file == NULL) {
		printf("Error in opening file\n");

		// EXIT_FAILURE --> after this code will not run
		exit(1); 
	}

    printf("HAHAHA..");

	// EXIT_SUCCESS --> code wil run after this
	exit(0);
}

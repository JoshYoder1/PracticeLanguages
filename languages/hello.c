#include <stdio.h>

int main(){
	char name[20];

	printf ("What is your name? ");

	scanf("%s",name);

	printf("Hello, %s, from C! \n.", name);

	return(0); // Ends main

}

// run with "gcc ___" "./___"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	int random_array[10],copied[10];
	
	printf("Creating random_array...\n");
	for (int i = 0; i < 10; i++){
		random_array[i] = rand();
	}
	random_array[9] = 0;

	for (int i = 0; i < 10; i++){
		printf("Element %d of random_array is: %d \n", i, random_array[i]);
	}

	int * originalp = random_array;
	int * copyp = copied;

	printf("Creating copied...\n");
	for (int i = 9; i >= 0; i--){
		*copyp = *(originalp+i);
		printf("Element %d of copied is: %d \n", (9-i), *copyp);
		copyp++;
	}

	return 0;

}

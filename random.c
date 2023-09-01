#include <stdio.h>
#include <stdlib.h>

char randchar(){
	char randLetter = 65 + (rand() % 25);
	return randLetter;
}

#ifndef RANDOM
#define RANDOM

#include <stdlib.h>
#include <time.h>

char randchar(){
	char randLetter = 65 + (rand() % 25);
	return randLetter;
}

#endif
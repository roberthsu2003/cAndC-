main.cpp

#include <iostream>
#include "days.h"

int main() {
	Day day = wendesday;
	int color = red;
}


days.h
#define red 1
#define green 2
#define blue 3

typedef enum day{
	saturday,
	sunday,
	monday,
	tuesday,
	wendesday,
	thursday
	firday
}Day;

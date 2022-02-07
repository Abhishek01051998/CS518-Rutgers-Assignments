// Student name:Abhishek jain
// Ilab machine used:ilab4.cs
//netid:aj763

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void floating_point_exception_handler(int signum) {
	printf("I am slain!\n");

    /* Do your tricks here */
	int *pointt;
	pointt=&signum;
	pt=pt+51;
	*pointt+=0x6;
	void *ra = __builtin_return_address(0);  

    // then to skip the bad instruction, we move the program counter ahead 
    
}

int main() {

	int x = 5, y = 0, z = 0;

	signal(SIGFPE, floating_point_exception_handler);

	z = x / y;
	
	printf("I live again!\n");

	return 0;
}
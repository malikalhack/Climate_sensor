#include <msp430.h> 


/**
 * main.c
 */
int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// stop WatchDog timer
	
	return 0;
}

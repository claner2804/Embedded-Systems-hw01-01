

#include "bitoperations.h"
#include <stdio.h>


int main() {
	printf("SB(53, 3) = %u\n", SB(53, 3));
	printf("CB(53, 2) = %u\n", CB(53, 2));
	printf("ISB(53, 2) = %u\n", ISB(53, 2));
	printf("ISB(53, 3) = %u\n", ISB(53, 3));
	if (ISB(53,2)) {
		printf("Bit ist gesetzt\n");
	} else {
		printf("Bit ist nicht gesetzt\n");
	}
	printf("TB(53, 3) = %u\n", TB(53, 3));
	printf("TB(53, 2) = %u\n", TB(53, 2));


}
#ifndef ATKIN_H
#define ATKIN_H
#include <math.h>

#define  limit  1000000

    bool isPrime(long long i){
	int j;

	if(i < 0)
		i *= -1;
	if((i % 2 == 0 && i != 2) || i == 1)
		return false;
	for(j = 3; j <= sqrt(i); j += 2)
		if(i % j == 0)
			return false;
	return true;
    }
    
#endif

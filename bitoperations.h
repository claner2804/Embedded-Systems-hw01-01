
#ifndef BITOPERATIONS_H_
#define BITOPERATIONS_H_


#define SB(VALUE, POSITION)		(VALUE) | (1 << (POSITION))
#define CB(VALUE, POSITION)		(VALUE) & ~(1 << (POSITION))
#define ISB(VALUE, POSITION)	(VALUE) & (1 << (POSITION))
#define TB(VALUE, POSITION)		(VALUE) ^ (1 << (POSITION))



#endif /* BITOPERATIONS_H_ */
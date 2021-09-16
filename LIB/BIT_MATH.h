#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(BINARY_NUM ,BIT_NUM) ( (BINARY_NUM) |=( 1<<(BIT_NUM) ))

#define CLEAR_BIT(BINARY_NUM ,BIT_NUM) ( (BINARY_NUM) &= ~( 1<<(BIT_NUM) ))

#define TOGGLE_BIT(BINARY_NUM ,BIT_NUM) ( (BINARY_NUM) ^=( 1<<(BIT_NUM) ))

#define GET_BIT(BINARY_NUM ,BIT_NUM) (( (BINARY_NUM) >>(BIT_NUM) )&1)


#endif
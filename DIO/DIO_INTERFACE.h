/*
 * DIO_INTERFACE.h
 *
 *  Created on: Sep 10, 2021
 *      Author: Israa
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include"../LIB/STD_TYPES.h"

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define DIO_OUTPUT 1
#define DIO_INPUT  0

#define DIO_HIGH 1
#define DIO_LOW  0

//Direction Functions
void DIO_SetPortDirection(u8 PORT_NUM , u8 Direction);
void DIO_SetPinDirection(u8 PORT_NUM , u8 PIN_NUM , u8 Direction);

//OUTPUt Functions
void DIO_SetPortValue(u8 PORT_NUM , u8 Value);
void DIO_SetPinValue(u8 PORT_NUM , u8 PIN_NUM , u8 Value);

//INPUT Functions
u8 DIO_GetPortValue(u8 PORT_NUM );
u8 DIO_GetPinValue(u8 PORT_NUM , u8 PIN_NUM);


#endif /* DIO_INTERFACE_H_ */

/*
 * DIO_PROGRAM.c
 *
 *  Created on: Sep 10, 2021
 *      Author: Israa
 */

#include"../LIB/STD_TYPES.h"
#include"../LIB/BIT_MATH.h"

#include"DIO_PRIVATE.h"
#include"DIO_CONFIGRATION.h"

//Set Port Direction
void DIO_SetPortDirection(u8 PORT_NUM , u8 Direction)
{
	switch(PORT_NUM)
	{
		case 0:
			DDRA = Direction;
			break;

		case 1:
			DDRB = Direction;
			break;

		case 2:
			DDRC = Direction;
			break;

		case 3:
			DDRD = Direction;
			break;
		}
}

//Set a Specific Pin Direction
void DIO_SetPinDirection(u8 PORT_NUM , u8 PIN_NUM , u8 Direction)
{
	if (Direction == 1)
	{
		switch (PORT_NUM)
		{
			case 0:
				SET_BIT(DDRA , PIN_NUM);
				break;

			case 1:
				SET_BIT(DDRB , PIN_NUM);
				break;

			case 2:
				SET_BIT(DDRC , PIN_NUM);
				break;

			case 3:
				SET_BIT(DDRD , PIN_NUM);
				break;
		}
	}

	else if (Direction == 0)
	{
		switch (PORT_NUM)
		{
			case 0:
				CLEAR_BIT(DDRA , PIN_NUM);
				break;

			case 1:
				CLEAR_BIT(DDRB , PIN_NUM);
				break;

			case 2:
				CLEAR_BIT(DDRC , PIN_NUM);
				break;

			case 3:
				CLEAR_BIT(DDRD , PIN_NUM);
				break;
		}
	}
}

//Set a full Port Direction
void DIO_SetPortValue(u8 PORT_NUM , u8 Value)
{
	switch(PORT_NUM)
	{
		case 0:
			PORTA = Value;
			break;

		case 1:
			PORTB = Value;
			break;

		case 2:
			PORTC = Value;
			break;

		case 3:
			PORTD = Value;
			break;
	}
}

//Set a Specific Pin Value
void DIO_SetPinValue(u8 PORT_NUM , u8 PIN_NUM , u8 Value)
{
	if (Value == 1)
	{
		switch (PORT_NUM)
		{
			case 0:
				SET_BIT(PORTA , PIN_NUM);
				break;
			case 1:
				SET_BIT(PORTB , PIN_NUM);
				break;

			case 2:
				SET_BIT(PORTC , PIN_NUM);
				break;

			case 3:
				SET_BIT(PORTD , PIN_NUM);
				break;
			}
		}

	else if (Value == 0)
	{
		switch (PORT_NUM)
		{
			case 0:
				CLEAR_BIT(PORTA , PIN_NUM);
				break;

			case 1:
				CLEAR_BIT(PORTB , PIN_NUM);
				break;

			case 2:
				CLEAR_BIT(PORTC , PIN_NUM);
				break;

			case 3:
				CLEAR_BIT(PORTD , PIN_NUM);
				break;
					}
			}
}

//Get a read from a Full Port
u8 DIO_GetPortValue(u8 PORT_NUM )
{
	u8 Result = 0;
		switch(PORT_NUM)
		{
		case 0:
			Result = PINA;
			break;
		case 1:
			Result = PINB;
			break;
		case 2:
			Result = PINC;
			break;
		case 3:
			Result = PIND;
			break;
		}

		return Result ;

}

//Get a read from a Specific Pin
u8 DIO_GetPinValue(u8 PORT_NUM , u8 PIN_NUM)
{
	u8 Result = 0;
	switch(PORT_NUM)
	{
	case 0:
		Result = GET_BIT(PORTA , PIN_NUM);
		break;
	case 1:
		Result = GET_BIT(PORTB , PIN_NUM);
		break;
	case 2:
		Result = GET_BIT(PORTC , PIN_NUM);
		break;
	case 3:
		Result = GET_BIT(PORTD , PIN_NUM);
		break;
	}

	return Result ;
}


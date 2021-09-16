/*
 * LCD_Program.c
 *
 *  Created on: Sep 11, 2021
 *      Author: Israa
 */
#include"../LIB/STD_TYPES.h"
#include"../LIB/BIT_MATH.h"
#include"LCD_CONFIGRATION.h"
#include"LCD_PRIVATE.h"
#include"../DIO/DIO_INTERFACE.h"
#include<util/delay.h>

void LCD_SendCommand(u8 Command)
{
	//intiate for command so RS = 0 , RW = 0
	DIO_SetPinValue(DIO_PORTB , DIO_PIN0 , DIO_LOW);
	DIO_SetPinValue(DIO_PORTB , DIO_PIN1 , DIO_LOW);
	_delay_ms(1);
	//Set command value on Data Port
	DIO_SetPortValue(DIO_PORTA , Command );
	_delay_ms(1);
	//Activate Enable Pins
	DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , DIO_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , DIO_LOW);
	_delay_ms(1);
}

void LCD_SendCharacter(u8 Character)
{
	//intiat for command so RS = 1 , RW = 0
	DIO_SetPinValue(DIO_PORTB , DIO_PIN0 , DIO_HIGH);
	DIO_SetPinValue(DIO_PORTB , DIO_PIN1 , DIO_LOW);
	_delay_ms(1);
	//Set command value on Data Port
	DIO_SetPortValue(DIO_PORTA , Character );
	_delay_ms(1);
	//Activate Enable Pins
	DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , DIO_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , DIO_LOW);
	_delay_ms(1);
}

void LCD_INIT (void)
{
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN0 , DIO_OUTPUT);
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN1 , DIO_OUTPUT);
	DIO_SetPinDirection(DIO_PORTB , DIO_PIN2 , DIO_OUTPUT);
	DIO_SetPortDirection(DIO_PORTA , 0xFF);
	_delay_ms(50);

	//Function Set
	LCD_SendCommand(0b00111000);
	_delay_ms(5);
	//Display ON / OFF
	LCD_SendCommand(0b00001100);
	_delay_ms(5);
	//Display Clear
	LCD_SendCommand(0b00000001);
	_delay_ms(50);
	//Entry Mode
	LCD_SendCommand(0b00000110);
	_delay_ms(5);
}

void LCD_PrintString(u8 N , u8 Str[10] )
{
	for(u8 Counter = 1 ; Counter < N+1 ; Counter++ )
	{
		LCD_SendCharacter(Str[Counter]);
	}
}

/*void LCD_PrintNum(s23 Number)
{

}*/

/*
 * main.c

 *
 *  Created on: Sep 11, 2021
 *      Author: Israa
 */
#include"LIB/STD_TYPES.h"
#include"DIO/DIO_INTERFACE.h"
#include"LCD/LCD_INREFACE.h"

int main (void)
{
	LCD_INIT ();

	LCD_SendCharacter('I');
	LCD_SendCharacter('S');
	LCD_SendCharacter('R');
	LCD_SendCharacter('A');
	LCD_SendCharacter('A');

	while(1)
	{

	}
}


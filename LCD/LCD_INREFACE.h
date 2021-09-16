/*
 * LCD_INREFACE.h
 *
 *  Created on: Sep 11, 2021
 *      Author: Israa
 */

#ifndef LCD_LCD_INREFACE_H_
#define LCD_LCD_INREFACE_H_

#include"../LIB/STD_TYPES.h"

void LCD_INIT (void);
void LCD_SendCommand(u8 Command) ;
void LCD_SendCharacter(u8 Character);
void LCD_PrintString(u8 N , u8 Str[10] );
//void LCD_PrintNum (s23 Number);

#endif /* LCD_LCD_INREFACE_H_ */

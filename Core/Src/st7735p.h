/*
 * st7735p.h
 *
 *  Created on: May 10, 2023
 *      Author: naudh
 */
#include <stddef.h> // size_t
#include <stdint.h> // uint8_t

#ifndef SRC_ST7735P_H_
#define SRC_ST7735P_H_

void ST7735_Select();
void ST7735_Unselect();
void ST7735_Reset();
void ST7735_WriteCommand(uint8_t cmd);
void ST7735_WriteData(uint8_t* buff, size_t buff_size);
void ST7735_Delay(uint32_t ms);

#endif /* SRC_ST7735P_H_ */

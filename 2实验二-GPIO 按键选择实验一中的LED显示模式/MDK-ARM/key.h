#ifndef _KEY_H
#define _KEY_H

#include "main.h"

#define KEY1  HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin)//读取按键1
#define KEY2  HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin)//读取按键2

#define KEY1_PRES 	  1	//KEY1按下
#define KEY2_PRES	  2	//KEY2按下

unsigned char KEY_Scan(unsigned char mode);
#endif


#ifndef _KEY_H
#define _KEY_H

#include "main.h"

#define KEY1  HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin)//��ȡ����1
#define KEY2  HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin)//��ȡ����2

#define KEY1_PRES 	  1	//KEY1����
#define KEY2_PRES	  2	//KEY2����

unsigned char KEY_Scan(unsigned char mode);
#endif


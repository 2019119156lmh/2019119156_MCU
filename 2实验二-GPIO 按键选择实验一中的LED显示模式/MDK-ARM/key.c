//按键处理函数
//返回按键值
//mode:0,不支持连续按;1,支持连续按;
//0，没有任何按键按下
//1，KEY1按下
//2，KEY2按下
//注意此函数有响应优先级,KEY1>KEY2!!
#include "key.h"

unsigned char KEY_Scan(unsigned char mode)
{	 
	static unsigned char key_up=1;//按键按松开标志
	if(mode)key_up=1;  //支持连按		  
	if(key_up && (KEY1 == 0||KEY2 == 0))
	{
		HAL_Delay(10);//去抖动 
		key_up = 0;
		if(KEY1 == 0)return KEY1_PRES;
		else if(KEY2 == 0)return KEY2_PRES;
	}else if(KEY1 == 1&&KEY2 == 1)key_up=1; 	    
 	return 0;// 无按键按下
}

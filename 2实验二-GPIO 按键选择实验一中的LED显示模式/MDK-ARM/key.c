//����������
//���ذ���ֵ
//mode:0,��֧��������;1,֧��������;
//0��û���κΰ�������
//1��KEY1����
//2��KEY2����
//ע��˺�������Ӧ���ȼ�,KEY1>KEY2!!
#include "key.h"

unsigned char KEY_Scan(unsigned char mode)
{	 
	static unsigned char key_up=1;//�������ɿ���־
	if(mode)key_up=1;  //֧������		  
	if(key_up && (KEY1 == 0||KEY2 == 0))
	{
		HAL_Delay(10);//ȥ���� 
		key_up = 0;
		if(KEY1 == 0)return KEY1_PRES;
		else if(KEY2 == 0)return KEY2_PRES;
	}else if(KEY1 == 1&&KEY2 == 1)key_up=1; 	    
 	return 0;// �ް�������
}

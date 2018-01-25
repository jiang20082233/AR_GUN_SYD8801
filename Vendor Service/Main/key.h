#ifndef _KEY_H_
#define _KEY_H_

#include "ARMCM0.h"

//ע�ͣ�BIT12����Ϊ���룬������0ʱ�����ر��ԭ����
#define KEY0 BIT16
#define KEY1 BIT13
#define KEY2 BIT14
#define KEY3 BIT15

#define KEY0_GPI GPI_CTRL->GPI_16
#define KEY1_GPI GPI_CTRL->GPI_13
#define KEY2_GPI GPI_CTRL->GPI_14
#define KEY3_GPI GPI_CTRL->GPI_15

extern uint8_t key_sta;

void key_config(void);
uint8_t get_key(void);
void keylong_config(void);

#endif

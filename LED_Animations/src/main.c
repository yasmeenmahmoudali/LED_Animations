/*
 * main.c
 *
 *  Created on: Aug 17, 2020
 *      Author: Yasmeen Mahmoud
 */



#include  "STD_TYPES.h"
#include  "BIT_MATH.h"
#include  "RCC_interface.h"
#include  "RCC_private.h"
#include  "GPIO_interface.h"
#include  "GPIO_private.h"
#include "STK_interface.h"
#include "STK_private.h"
#include "LEDANIM_interface.h"

void main(void)
{   /* Initialize System Clock */
	RCC_voidInitSysClock();

	/* Enable Peripheral 2 on APB2 bus (GPIOA) */
	RCC_voidEnableClock(RCC_APB2  ,2);

	/* Initialize Systick */
	MSTK_voidInit();

    ALED_ANIMATION_voidInit();


	while(1)
	{
		ALED_ANIMATION();
	}
}




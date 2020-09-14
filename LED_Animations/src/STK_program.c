/********************************************************************************/
/* Auhor     : Yasmeen Mahmoud                                                  */
/* Date      : 26 August 2020                                                   */
/* Version   : V01                                                              */
/********************************************************************************/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

static u8 MSTK_u8ModeOfInterval;

void MSTK_voidInit(void)
{
	if(CLKSOURCE == AHB_DIVIDE_BY_8)
	{
		STK_CTRL = 0;   /* Clock = AHB/8  , Disable Systick , Disable Interrupt*/
	}
	else
	{
		STK_CTRL = 0x00000004;  /* Clock = AHB  , Disable Systick , Disable Interrupt*/
	}
		
	
}
/* synchronous */
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	/* Load ticks to load register */
	STK_LOAD = Copy_u32Ticks;

	/* Start Timer */
	SET_BIT(STK_CTRL,0);

	/* Wait till flag is raised */
	while(( STK_CTRL & (0x00010000)) == 0);

	/* Stop Timer */
	CLR_BIT(STK_CTRL,0);
	STK_LOAD =0;
	STK_VAL =0;

	
}
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks , void (*Copy_ptr) (void))
{
	/* Load ticks to load register */
	STK_LOAD = Copy_u32Ticks;

	/* Start Timer */
	SET_BIT(STK_CTRL,0);

    /* Save callback */
	CallBack = Copy_ptr;

	/* Set Mode to Single */
	MSTK_u8ModeOfInterval = MSTK_SINGLE_INTERVAL;

	 /* Enable Interrupt */
	SET_BIT(STK_CTRL,1);
}
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks , void (*Copy_ptr) (void))
{
	/* Load ticks to load register */
	STK_LOAD = Copy_u32Ticks;

	/* Start Timer */
	SET_BIT(STK_CTRL,0);

	/* Save callback */
	CallBack = Copy_ptr;
	
	/* Set Mode to Single */
    MSTK_u8ModeOfInterval = MSTK_PERIOD_INTERVAL;

	 /* Enable Interrupt */
	SET_BIT(STK_CTRL,1);


}
void MSTK_voidStopInterval(void)
{
	/* Disable STK Interrupt */
	CLR_BIT(STK_CTRL, 1);
	/* Stop Timer */
	CLR_BIT(STK_CTRL,0);
	STK_LOAD =0;
	STK_VAL =0;
}
u32 MSTK_u32GetElapsedTime(void)
{
	u32 Copy_Local ;
	Copy_Local = STK_LOAD - STK_VAL;
	return Copy_Local;
}
u32 MSTK_u32GetRemainingTime(void)
{
	return STK_VAL;
}


void SysTick_Handler(void)
{
	u8 Local_u8Temporary;

		if (MSTK_u8ModeOfInterval == MSTK_SINGLE_INTERVAL)
		{
			/* Disable STK Interrupt */
			CLR_BIT(STK_CTRL, 1);

			/* Stop Timer */
			SET_BIT(STK_CTRL, 0);
			STK_LOAD = 0;
			STK_VAL  = 0;
		}

		/* Callback notification */
		CallBack();

		/* Clear interrupt flag */
		Local_u8Temporary = GET_BIT(STK_CTRL,16);

}






      

	
	

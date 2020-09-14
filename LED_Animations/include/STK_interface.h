/********************************************************************************/
/* Auhor     : Yasmeen Mahmoud                                                  */
/* Date      : 26 August 2020                                                   */
/* Version   : V01                                                              */
/********************************************************************************/

#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H



/*  Apply Clock Choise from Confguration File 
	Disable SysTick interrupt
	Disable SysTick   */
void MSTK_voidInit(void);
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks);
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks , void (*Copy_ptr) (void));
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks , void (*Copy_ptr) (void));
void MSTK_voidStopInterval(void);
u32 MSTK_u32GetElapsedTime(void);
u32 MSTK_u32GetRemainingTime(void);


#define AHB_DIVIDE_BY_8       0
#define AHB_CLOCK             1

#endif

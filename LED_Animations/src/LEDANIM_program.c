/********************************************************************************/
/* Auhor     : Yasmeen Mahmoud                                                  */
/* Date      : 29 AUG 2020                                                      */
/* Version   : V01                                                              */
/********************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "LEDANIM_interface.h"
#include "LEDANIM_private.h"
#include "LEDANIM_config.h"

void ALED_ANIMATION_voidInit(void)
{
	/* Configure A0 as output 10MHZ push pull */
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN0, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN1, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN2, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN3, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN4, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN5, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN6, OUTPUT_SPEED_10MHZ_PP);
	GPIO_voidSetPinDirection(LED_ANIMATION_PIN7, OUTPUT_SPEED_10MHZ_PP);
	
	
	
}

void ALED_ANIMATION(void)
{
	/* ping pong  with dealy 200 MEC */
	 for(u8 i=0;i<4;i++)
	 {
		 /* Shifting Left */
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN0 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN0 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN7 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  /* Shifting Right */
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN7 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_LOW);
		  GPIO_voidSetPinValue ( LED_ANIMATION_PIN0 , GPIO_HIGH);
		  MSTK_voidSetBusyWait(200000);


	 }
	 GPIO_voidSetPinValue ( LED_ANIMATION_PIN0 , GPIO_LOW);

	 /* IN OUT  with delay 200 MSEC*/
	 for(u8 i=0;i<4;i++)
	 {
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue (LED_ANIMATION_PIN3 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN2 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN1 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_LOW);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN0 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN7 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN0 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN7 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN1 , GPIO_HIGH);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN6 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN1 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN6 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN2 , GPIO_HIGH);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN5 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN2 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN5 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN3 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(200000);
	 }
	 GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_LOW);
	 GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_LOW);
	 
	 
	 /* Flashing With delay 500MSEC */
	 for(u8 i=0;i<8;i++)
	 {
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN0 , GPIO_HIGH);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN1 , GPIO_HIGH);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN2 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN3 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN4 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN5 , GPIO_HIGH);
		 GPIO_voidSetPinValue ( LED_ANIMATION_PIN6 , GPIO_HIGH);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN7 , GPIO_HIGH);
		 MSTK_voidSetBusyWait(500000);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN0 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN1 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN2 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN3 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN4 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN5 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN6 , GPIO_LOW);
		 GPIO_voidSetPinValue (  LED_ANIMATION_PIN7 , GPIO_LOW);
		 MSTK_voidSetBusyWait(500000);

	 }

}

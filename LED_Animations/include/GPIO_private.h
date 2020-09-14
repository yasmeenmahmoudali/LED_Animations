/*******************************************************************/
/* Author       : Yasmeen Mahmoud                                  */
/* Version      :V01                                               */
/*Date          :17 August 2020                                     */
/*******************************************************************/



#ifndef  GPIO_PRIVATE_H
#define  GPIO_PRIVATE_H
/* Register Definations of  PORTA */
#define GPIO_PORTA_BASE_ADDRESS        0x40010800
#define GPIOA_CRL 				     *((u32*)0x40010800)
#define GPIOA_CRH					 *((u32*)0x40010804)	
#define GPIOA_IDR					 *((u32*)0x40010808)
#define GPIOA_ODR               	 *((u32*)0x4001080C)
#define GPIOA_BSR					 *((u32*)0x40010810)
#define GPIOA_BRR            		 *((u32*)0x40010814)
#define GPIOA_LCK					 *((u32*)0x40010818)

/* Register Definations of  PORTB */
#define GPIO_PORTB_BASE_ADDRESS	     0x40010C00
#define GPIOB_CRL      			*((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x00))
#define GPIOB_CRH				*((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x04))	
#define GPIOB_IDR				*((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x08))
#define GPIOB_ODR               *((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x0C))
#define GPIOB_BSR				*((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x10))
#define GPIOB_BRR               *((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x14))
#define GPIOB_LCK				*((u32*)(GPIO_PORTB_BASE_ADDRESS + 0x18))
/* Register Definations of  PORTC */		 
#define GPIO_PORTC_BASE_ADDRESS	     0x40011000
#define GPIOC_CRL      			*((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x00))
#define GPIOC_CRH				*((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x04))	
#define GPIOC_IDR				*((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x08))
#define GPIOC_ODR               *((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x0C))
#define GPIOC_BSR				*((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x10))
#define GPIOC_BRR               *((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x14))
#define GPIOC_LCK				*((u32*)(GPIO_PORTC_BASE_ADDRESS + 0x18))



#endif
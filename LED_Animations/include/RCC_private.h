/*******************************************************************/
/* Author       : Yasmeen Mahmoud                                  */
/* Version      :V01                                               */
/*Date          :8 August 2020                                     */
/*******************************************************************/

#ifndef  RCC_PRIVATE_H
#define  RCC_PRIVATE_H

/* Register Definations  */
#define  RCC_CR        *((u32*)0x40021000)   //for clk  select clk  
#define  RCC_CFGR      *((u32*)0x40021004)   //for clk   select clk for cpu
#define  RCC_CIR       *((u32*)0x40021008) 
#define  RCC_APB2RSTR  *((u32*)0x4002100C) 
#define  RCC_APB1RSTR  *((u32*)0x40021010) 
#define  RCC_AHBENR    *((u32*)0x40021014)  //for clk  enable/disble clk on differ peripherals
#define  RCC_APB2ENR   *((u32*)0x40021018)  //for clk
#define  RCC_APB1ENR   *((u32*)0x4002101C)  //for clk
#define  RCC_BDCR      *((u32*)0x40021020) 
#define  RCC_CSR       *((u32*)0x40021024)
#define  GPIOA_CRL     *((u32*)0x40010800)
#define  GPIOA_ODR	   *((u32*)0x4001080C)

 /* Clock Types  */
#define  RCC_HSE_CRYSTAL     0
#define  RCC_HSE_RC          1
#define  RCC_HSI             2
#define  RCC_PLL             3

/* PLL Options */
#define RCC_PLL_IN_HSI_DIV_2    0
#define	RCC_PLL_IN_HSE_DIV_2	1
#define	RCC_PLL_IN_HSE			2

/* PLL_MUL_VAL Sptions */


#endif

/********************************************************************************/
/* Auhor     : Yasmeen Mahmoud                                                  */
/* Date      : 26 August 2020                                                   */
/* Version   : V01                                                              */
/********************************************************************************/

#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

/* Base Address: 0xE000ED00  */


#define  STK_CTRL               *((u32*)0xE000ED00)     /* control and status */
#define  STK_LOAD               *((u32*)0xE000ED04) 	/*reload value */
#define  STK_VAL				*((u32*)0xE000ED08) 	/*crrent value */
#define  STK_CALIB				*((u32*)0xE000ED0C) 	/*calibration value */

static void(*CallBack) (void);
#define     MSTK_SINGLE_INTERVAL    0
#define     MSTK_PERIOD_INTERVAL    1
#endif

/*
 * main.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Eng Ahmed Tarek
 */
#include "STD_TYPES.h"
#include "HLCD_Interface.h"
#include "HKPD_Interface.h"




void main (void)
{
	HLCD_VoidInit();
	HKPD_Init();

	u8	x;

	while (1)
	{

		x=Get_PressKey();
		if(x!=50)
		{
			HLCD_SendNumber(x);

		}
	}




}

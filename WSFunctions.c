#include "WSFunctions.h"
#include <stdint.h>
#include <utils/uartstdio.h>

void hexDumpForWS(char *package, uint16_t packageLength)
{
	uint16_t charCntr;
	uint16_t lineCntr = 0;

	for(charCntr = 0; charCntr < packageLength; charCntr++)
	{
		if(charCntr % 16 == 0)
		{
			UARTprintf("\n%06x ", lineCntr);
			lineCntr += 16;
		}
		UARTprintf("%02x ", package[charCntr]);
	}
	UARTprintf("\n");
}

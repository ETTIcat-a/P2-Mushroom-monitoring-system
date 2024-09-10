/* definitions / defines file */
#define DEFS_H

#define SW_VERSION		13   /* i.e. major.minor software version nbr. */

#ifndef NULL
#define NULL  0
#endif
        
// logix ...
#define TRUE	1
#define FALSE	0 
#define DUMMY	0

#define wdogtrig()			#asm("wdr") // call often if Watchdog timer enabled

#define CR				0x0D
#define LF				0x0A  
#define pir PINB.1
        // PORTx is used for output and PINx is used for input
#define buton1 PIND.3
#define buton2 PIND.5
#define buton3 PIND.1
#define led_buton1 PORTD.4
#define led_buton2 PORTD.2
#define led_buton3 PORTD.0
       // test bit durations
#include "funct.h"


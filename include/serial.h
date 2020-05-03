#ifndef _SERIAL_H_
#define _SERIAL_H_

#define     BAUD_RATE       9600

uint8_t USART2_Init(void);
void transmit_USART2(char *msgBuffer);

#endif /*__SERIAL_H_*/

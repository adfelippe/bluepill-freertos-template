#include "lcd_1602.h"


void LCD_sendCMD(uint8_t cmd)
{
	HAL_GPIO_WritePin(RS_PORT, RS_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);

	//Nibble-High
	if(cmd&0b00010000){HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_RESET);}
	if(cmd&0b00100000){HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_RESET);}
	if(cmd&0b01000000){HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_RESET);}
	if(cmd&0b10000000){HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_RESET);}
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_SET);
	Delayus(1);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);
	Delayus(50);
	//Nibble-Low
	if(cmd&0b00000001){HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_RESET);}
	if(cmd&0b00000010){HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_RESET);}
	if(cmd&0b00000100){HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_RESET);}
	if(cmd&0b00001000){HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_RESET);}
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_SET);
	Delayus(1);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);
	Delayus(50);

	//gera um atraso maior se os comandos forem
	//limpa lcd, retorna lcd
	if((cmd==CLEAR_LCD)||(cmd==RETURN_LCD))
	{
		Delayms(5);
	}
}

void LCD_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	//habilita o clock de perif�rico APB2 para todas as portas configuradas
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_AFIO_CLK_ENABLE();

	//Configura individualmente as propriedades das sa�das
	//RS - PA0
	GPIO_InitStructure.Pin = RS_PIN;
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(RS_PORT, &GPIO_InitStructure);

	//EN - PA1
	GPIO_InitStructure.Pin = EN_PIN;
	HAL_GPIO_Init(EN_PORT, &GPIO_InitStructure);

	//D4 - PB5
	GPIO_InitStructure.Pin = D4_PIN;
	HAL_GPIO_Init(D4_PORT, &GPIO_InitStructure);

	//D5 - PB4
	GPIO_InitStructure.Pin = D5_PIN;
	HAL_GPIO_Init(D5_PORT, &GPIO_InitStructure);

	//D6 - PB3
	GPIO_InitStructure.Pin = D6_PIN;
	HAL_GPIO_Init(D7_PORT, &GPIO_InitStructure);

	//D7 - PB0
	GPIO_InitStructure.Pin = D7_PIN;
	HAL_GPIO_Init(D7_PORT, &GPIO_InitStructure);

	//� preciso desabilitar fun��es principais de grava��o que "tomam" determinados pinos do microcontrolador,
    //para usar esses pinos como portas de entrada e sa�da ou outras fun��es, observe na defini��o de pinos do datasheet
	//GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);

	HAL_GPIO_WritePin(RS_PORT, RS_PIN, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);


	Delayms(15); //gera atraso de 15ms para Vdd estabilizar

	 //Envia comando 0b0011XXXX como descrito no datasheet
	 //procedimento de reset atrav�s de software
	LCD_sendCMD(0x30);
	Delayms(50);
	LCD_sendCMD(0x30);
	Delayms(10);
	LCD_sendCMD(0x32);
	Delayms(50);
	LCD_sendCMD(0x20); //garante que ser� de 4 bits
	LCD_sendCMD(DISPLAY_TYP); //configura display 4 bits, 2 linhas
	LCD_sendCMD(LCD_OFF); //desliga o display
	LCD_sendCMD(LCD_ON | CURSOR_ON | CURSOR_BLINK); //liga display e cursor
	LCD_sendCMD(CLEAR_LCD); //limpa display LCD;
	LCD_sendCMD(DDRAM_INC); //incrementa a DDRAM sempre que um dado for enviado
}

void LCD_sendDATA(uint8_t data)
{
	HAL_GPIO_WritePin(RS_PORT, RS_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);

	//Nibble-High
	if(data&0b00010000){HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_RESET);}
	if(data&0b00100000){HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_RESET);}
	if(data&0b01000000){HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_RESET);}
	if(data&0b10000000){HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_RESET);}
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_SET);
	Delayus(1);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);
	Delayus(50);
	//Nibble-Low
	if(data&0b00000001){HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D4_PORT, D4_PIN, GPIO_PIN_RESET);}
	if(data&0b00000010){HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D5_PORT, D5_PIN, GPIO_PIN_RESET);}
	if(data&0b00000100){HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D6_PORT, D6_PIN, GPIO_PIN_RESET);}
	if(data&0b00001000){HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_SET);}
	else {HAL_GPIO_WritePin(D7_PORT, D7_PIN, GPIO_PIN_RESET);}
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_SET);
	Delayus(1);
	HAL_GPIO_WritePin(EN_PORT, EN_PIN, GPIO_PIN_RESET);
	Delayus(50);
}

void LCD_gotoxy(uint8_t col, uint8_t row)
{
	uint8_t cnt = 0;
	LCD_sendCMD(RETURN_LCD);
	if(row == 1)
	{
		LCD_sendCMD(CURSOR_L1);
		for(cnt = 0; cnt < col; cnt++)  LCD_sendCMD(CURSOR_RIGHT);
	}
	else if(row == 2)
	{
		LCD_sendCMD(CURSOR_L2);
		for(cnt = 0; cnt < col; cnt++)  LCD_sendCMD(CURSOR_RIGHT);
	}
}

void LCD_write(char *word)
{
	uint8_t character, cnt, repeat;
	cnt = 0;
	repeat = 1;
	while(repeat)  //enquanto n�o chega no delimitador \0
	{
	    character = (uint8_t) *(word + cnt);
	    LCD_sendDATA(character);
	    cnt++;
	    if(*(word + cnt)==0) repeat = 0;
	}
}

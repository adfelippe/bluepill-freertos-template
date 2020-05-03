//Includes de bibliotecas necess�rias
#include "stm32f1xx_hal.h"

// Wrapper for delay functions when using HAL Drivers
#define Delayus(X)  HAL_Delay(1)
#define Delayms(X)  HAL_Delay(X)

//Comando geral Clear display
#define CLEAR_LCD 0x01     //limpa o display lcd

//Comando geral Return home
#define RETURN_LCD 0x02   //retorna o cursor para o inicio

//Subgrupo display on/off control
//Combinar com lógica ou '|' na funçãoo envia comando
#define LCD_ON 0x0C      //liga display lcd
#define CURSOR_ON 0x0A   //liga o cursor
#define CURSOR_BLINK 0x09  //deixa o cursor piscando
#define LCD_OFF 0x08      //desliga display lcd

//Subgrupo cursor or display shift
#define CURSOR_LEFT 0x10 //desloca o cursor para a esq sem deslocar a palavra
#define CURSOR_RIGHT 0x14  //desloca o cursor para a direita sem deslocar a palavra
#define DISPLAY_LEFT 0x18 //desloca a palavra para a esquerda
#define DISPLAY_RIGHT 0x1C //desloca a palavra para a direita

//Subgrupo entry mode set
//Este grupo seta a dire��o de movimento do cursor
//e especifica o deslocamento durante a escrita e leitura
#define DDRAM_INC 0x06  //incrementa a mem�ria DDRAM sempre que um dado enviado
#define DDRAM_DEC 0x04  //decrementa a mem�ria DDRAM sempre que um dado enviado
#define SHIFT_INC 0x05  //faz o shift automatico para a direita
#define SHIFT_DEC 0x07  //faz o shift automatico para a esquerda

//Subgrupo function set
//Para esta vers�o de biblioteca s� trabalharemos com
//4 bits de dados, 2 linhas e matriz 5x8
#define DISPLAY_TYP 0x28

//Seta o endere�o da DDRAM
//Posiciona o cursor neste endere�o
#define CURSOR_L1 0x80  //posiciona o cursor no inicio da primeira linha
#define CURSOR_L2 0xC0  //posiciona o cursor no inicio da segunda linha

//Define os pinos e portas
#define RS_PIN	GPIO_PIN_0
#define RS_PORT	GPIOA
#define EN_PIN	GPIO_PIN_1
#define EN_PORT	GPIOA
#define D4_PIN	GPIO_PIN_5
#define D4_PORT GPIOB
#define D5_PIN	GPIO_PIN_4
#define D5_PORT	GPIOB
#define D6_PIN	GPIO_PIN_3
#define D6_PORT	GPIOB
#define D7_PIN	GPIO_PIN_0
#define D7_PORT	GPIOB

void LCD_sendCMD(uint8_t cmd);
void LCD_init(void);
void LCD_sendDATA(uint8_t data);
void LCD_gotoxy(uint8_t col, uint8_t row);
void LCD_write(char *word);

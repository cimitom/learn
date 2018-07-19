
#include "led.h"
#include "int.h"
#include "key.h"
#include "timer.h"
#include "uart.h"
#include "printf.h"

int main(void)
{
	uart_init();
	printf("hardware test!\n\r");
	
	//gic_irq_init();
	//printf("interrupt init ok!\n\r");
	
	//key_test_interrupt(); 
	
	//timer_test_interrupt(); 
	
	lcd_test();
	
	
	while(0)
	{
		led_mode(1);
		delay_s(1);
		led_mode(0);
		delay_s(1);		
	}
	
	return 0;
}

#include <mega32.h>
#include <delay.h>
#include <stdlib.h>
#include <alcd.h>
void main(void)
{
char i;
DDRA = 0xff;
lcd_init(16);
for(i = 0 ; i < 200 ; i++){
    PORTA = rand()%256;
    lcd_clear();
    lcd_putchar(PORTA);
    delay_ms(1000);

    }
}

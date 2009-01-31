#ifndef pindef_h

#define twi_port PORTC
#define twi_ddr DDRC
#define twi_scl_pin 0
#define twi_sda_pin 1

#define uart_port PORTD
#define uart_rx_pin 0

#define dev_detect_pin 2
#define dev_detect_port PORTC
#define dev_detect_ddr DDRC

#define LED_pin 3
#define LED_port PORTC
#define LED_ddr DDRC

#define power_detect_pin 3
#define power_detect_port PORTC
#define power_detect_ddr DDRC
#define power_detect_input PINC

#define adc_port PORTA
#define adc_ddr DDRA

#define green_bit 4
#define green_pin 0
#define green_in_reg PINA
#define green_in_preg PINAP
#define green_port PORTA
#define green_ddr DDRA

#define red_bit 6
#define red_pin 4
#define red_in_reg PINA
#define red_in_preg PINAP
#define red_port PORTA
#define red_ddr DDRA

#define yellow_bit 5
#define yellow_pin 2
#define yellow_in_reg PINA
#define yellow_in_preg PINAP
#define yellow_port PORTA
#define yellow_ddr DDRA

#define blue_bit 3
#define blue_pin 1
#define blue_in_reg PINA
#define blue_in_preg PINAP
#define blue_port PORTA
#define blue_ddr DDRA

#define orange_bit 7
#define orange_pin 3
#define orange_in_reg PINA
#define orange_in_preg PINAP
#define orange_port PORTA
#define orange_ddr DDRA

#define bass_bit 2

#define bass1_pin 5
#define bass1_in_reg PINA
#define bass1_in_preg PINAP
#define bass1_port PORTA
#define bass1_ddr DDRA

#define bass2_pin 6
#define bass2_in_reg PINA
#define bass2_in_preg PINAP
#define bass2_port PORTA
#define bass2_ddr DDRA

#define plus_bit 2
#define plus_pin 6
#define plus_in_reg PINA
#define plus_port PORTA
#define plus_ddr DDRA

#define minus_bit 4
#define minus_pin 7
#define minus_in_reg PINA
#define minus_port PORTA
#define minus_ddr DDRA

#define up_stick_pin 6
#define up_stick_in_reg PINA
#define up_stick_port PORTA
#define up_stick_ddr DDRA

#define down_stick_pin 6
#define down_stick_in_reg PINA
#define down_stick_port PORTA
#define down_stick_ddr DDRA

#define left_stick_pin 6
#define left_stick_in_reg PINA
#define left_stick_port PORTA
#define left_stick_ddr DDRA

#define right_stick_pin 6
#define right_stick_in_reg PINA
#define right_stick_port PORTA
#define right_stick_ddr DDRA

#define pindef_h
#endif
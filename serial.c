#include "serial.h"

void serial_init(struct serial uart)
{
	printf("port:%s,baudrate:%d,data_bits:%d,stop_bits:%d,verify_bits:%d\r\n",
			uart->port,uart->baudrate,uart->data_bits,
			uart->stop_bits,uart->verify_bits);

}

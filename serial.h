#ifndef __SERIAL_H__
#define __SERIAL_H__

struct serial
{
	char *port;
	unsigned int baudrate;
	unsigned int data_bits;
	unsigned int stop_bits;
	unsigned int verify_bits;
	struct queue qbuff;
	int (*get_char)(unsigned char data);
	int (*put_char)(unsigned char data);
	int (*put_buff)(unsigned char buff[],unsigned int len);
};

void serial_init(struct serial uart);
void reg_serial_get_char(int (*get_char)(unsigned char data));


#endif
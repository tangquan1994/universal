#ifndef __SERIAL_H__
#define __SERIAL_H__

struct serial
{
	char *port;
	unsigned int baudrate;
	unsigned int data_bits;
	unsigned int stop_bits;
	unsigned int verify_bits;
	struct queue *buff;
	int (*read)(unsigned char *buff,unsigned int len);
	int (*write)(unsigned char *buff,unsigned int len);
	int (*ioctl)(void);
};

void serial_init(struct serial *uart);


#endif

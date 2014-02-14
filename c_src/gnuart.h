
#include "erl_driver.h"

typedef struct {
    ErlDrvPort port;
} stct_port;

int uart_fd;

#define SYS_LOG "/var/log/messages"

int open_uart_fd(char * devname);

void write_to_log(char * function);

void configure_uart_fd();

void close_uart_fd();

unsigned char * read_uart_fd(int timeout);

int write_uart_fd(unsigned char * tx_buffer, size_t size_tx_buffer);
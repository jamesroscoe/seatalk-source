// signal and irq initialization are separate in order to accommodate
// level and bit timing testing during development of hardware interfaces
#define SEATALK_PORTS 2

int seatalk_init_hardware_signal(void);
int seatalk_init_hardware_irq(void);
void seatalk_exit_hardware_signal(void);
void seatalk_exit_hardware_irq(void);

int seatalk_get_hardware_bit_value(int seatalk_port);
void seatalk_set_hardware_bit_value(int seatalk_port, int bit_value);

void seatalk_initiate_hardware_transmitter(int seatalk_port, int bit_delay);

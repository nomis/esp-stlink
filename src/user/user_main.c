/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 3 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "driver/swim.h"
#include "driver/uart.h"
#include "serial.h"

void user_init(void) {
  swim_init();
  uart_init(BIT_RATE_115200, BIT_RATE_115200);
  uart0_sendStr("ESP-STLINK\r\n");
  serial_init();
}

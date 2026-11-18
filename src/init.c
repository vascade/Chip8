#include "chip8.h"
#include <string.h>

void chip8_init(Chip8 *chip8) {
    memset(chip8, 0, sizeof(Chip8));    // Allocates 
    chip8->pc = 0x200;
}
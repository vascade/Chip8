#include <stdio.h>
#include "chip8.h"

void chip8_load(Chip8 *chip8, const char *filename) {
    FILE *ptr = fopen(filename, "rb");

    fread(&chip8->memory[0x200], 1, sizeof(chip8->memory) - 0x200, ptr);
    fclose(ptr);
    
    for (int i=0; i < sizeof(chip8->memory); i++) {
        printf("%02hhx ", chip8->memory[i]);
    }
        
}
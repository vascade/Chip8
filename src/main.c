#include "chip8.h"

int main(int argc, char *argv[]) {
    Chip8 chip8;

    chip8_init(&chip8);
    chip8_load(&chip8, *argv);

    return 0;
}
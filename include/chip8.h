#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>
#include <stdbool.h>

#define MEMORY_SIZE 4096
#define STACK_SIZE 16

typedef struct {
    uint8_t memory[MEMORY_SIZE];

    uint16_t stack[STACK_SIZE];
    uint8_t sp;

    uint16_t pc;

    uint8_t registers[16];
    uint16_t index_register;

    uint8_t delay_timer;
    uint8_t sound_timer;

    bool keys[16];
} Chip8;

void chip8_init(Chip8 *chip8);
void chip8_load(Chip8 *chip8, const char *filename);

#endif
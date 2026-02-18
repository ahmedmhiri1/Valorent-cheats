#include <stdio.h>

// Global game offsets - Update these after every patch
const long VIEW_MATRIX = 0x72A1B0;
const long LOCAL_PLAYER = 0x12C4F10;
const long BONE_MATRIX = 0x310;

void print_offsets() {
    printf("--- CURRENT OFFSETS ---\n");
    printf("ViewMatrix: 0x%lx\n", VIEW_MATRIX);
    printf("LocalPlayer: 0x%lx\n", LOCAL_PLAYER);
    printf("-----------------------\n");
}
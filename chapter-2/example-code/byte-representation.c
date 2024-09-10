#import <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (int i = 0; i < len; i++)
        printf(" %.2x", start[i]);
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
    printf(" | int %i\n", x);
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
    printf(" | float %f\n", x);
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
    printf(" | pointer %p\n", x);
}

int main() {
    show_int(5);
    show_float(123.45);
    char l = 'h';
    show_pointer(&l);
}

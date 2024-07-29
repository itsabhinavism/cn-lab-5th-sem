#include <stdio.h>
#include <stdlib.h>

int main() {
    int the_int = 0x12345678; // Example input (you can change this)

    // Extract individual bytes
    int a = (the_int >> 24) & 0xff;
    int b = (the_int >> 16) & 0xff;
    int c = (the_int >> 8) & 0xff;
    int d = the_int & 0xff;

    // Store in character variables
    char char_a = (char)a;
    char char_b = (char)b;
    char char_c = (char)c;
    char char_d = (char)d;

    // Print the content
    printf("Byte a: %c\n", char_a);
    printf("Byte b: %c\n", char_b);
    printf("Byte c: %c\n", char_c);
    printf("Byte d: %c\n", char_d);

    return 0;
}

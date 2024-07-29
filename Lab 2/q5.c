#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int isLittleEndian()
{
    uint32_t num = 1;
    char *bytePtr = (char *)&num;
    return (*bytePtr == 1);
}

uint32_t swapEndianness(uint32_t num)
{
    return ((num & 0xFF) << 24) |
           ((num & 0xFF00) << 8) |
           ((num & 0xFF0000) >> 8) |
           ((num & 0xFF000000) >> 24);
}

int main()
{
    uint32_t inputNumber;
    printf("Enter a number: ");
    scanf("%u", &inputNumber);

    if (isLittleEndian())
    {
        printf("Host machine is little endian.\n");
    }
    else
    {
        printf("Host machine is big endian.\n");
    }

    char *bytePtr = (char *)&inputNumber;
    for (int i = 0; i < sizeof(uint32_t); ++i)
    {
        printf("Byte %d: 0x%02X\n", i, bytePtr[i]);
    }

    uint32_t convertedNumber = swapEndianness(inputNumber);
    printf("Converted number: %u\n", convertedNumber);

    return 0;
}

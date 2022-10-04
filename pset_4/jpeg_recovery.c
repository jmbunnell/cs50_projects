#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // If your program is not executed with exactly one command-line argument, it should remind the user of correct usage, and main should return 1.
    if (argc != 2)
    {
        printf("Only include 1 command-line argument!\n");
        return 1;
    }

    // Open memory card, ff the forensic image cannot be opened, inform the user as much, return 1.
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Image cannot be opened!\n");
        return 1;
    }

    // Declare variables
    unsigned char buffer[512];
    int count_images = 0;
    FILE *output = NULL;
    char *filename = malloc(8 * sizeof(char));

    // Repeat until end of card:
    while (fread(buffer, sizeof(char), 512, input))
    {

        // If start of new JPEG (always starts byte: 1. 0xff - 2. 0xd8 - 3. 0xff - 4. byte 0xe0 - 0xef) open new JPEG file
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Check if 1st file - closes file and (fixes memory leak)
            if (count_images > 0)
            {
                fclose(output);
            }

            // Write filenames (filenames: ###.jpg, starting at 000.jpg)
            sprintf(filename, "%03i.jpg", count_images);
            output = fopen(filename, "w");
            count_images++;
        }
        // If already found JPEG...
        if (output != NULL)
        {
            // Write 512 bytes until new JPEG is found
            fwrite(buffer, sizeof(char), 512, output);
        }
    }

    // Free memory and close files
    free(filename);
    fclose(output);
    fclose(input);

    return 0;
}

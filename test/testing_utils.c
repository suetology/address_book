#include "testing_utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genRandomInt(int min, int max)
{
        static unsigned seed_initialized = 0;
        if (!seed_initialized) {
                srand(time(NULL));
                seed_initialized = 1;
        }
        return (rand() % (max - min + 1)) + min;
}

char* genRandomString(int length) 
{
        static unsigned seed_initialized = 0;
        if (!seed_initialized) {
                srand(time(NULL));
                seed_initialized = 1;
        }

        const char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

        char* randomString = (char*)malloc((length + 1) * sizeof(char));
        if (randomString == NULL) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }

        for (int i = 0; i < length; i++) {
                int randomIndex = rand() % (sizeof(characters) - 1);
                randomString[i] = characters[randomIndex];
        }
        randomString[length] = '\0';

        return randomString;
}
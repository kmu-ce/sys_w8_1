/**
 *
 * This program prints out the provided command line argument string
 * in a diamond pattern.  For instance, if you provide "DAISY" as a
 * command-line argument, it will print out the following pattern:
 *
 * D
 * DA
 * DAI
 * DAIS
 * DAISY
 *  AISY
 *   ISY
 *    SY
 *     Y
 */

#include <stdio.h>
#include <string.h>
#include <error.h>

void diamond(char *str) {
    // TODO
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        error(1, 0, "Usage: ./diamond <TEXT>");
    } else {
        diamond(argv[1]);
    }
    
    return 0;
}

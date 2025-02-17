#include <string.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int hex2dec(const char *hexnum) {
    static int decout = 0;
    const int hexconst = strlen(hexnum) - 1;
    for (unsigned int k=0; k < strlen(hexnum); k++) {
        if (hexnum[k]=='A' || hexnum[k] == 'a') {
            decout += (10 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='B' || hexnum[k] == 'b') {
            decout += (11 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='C' || hexnum[k] == 'c') {
            decout += (12 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='D' || hexnum[k] == 'd') {
            decout += (13 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='E' || hexnum[k] == 'e') {
            decout += (14 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='F' || hexnum[k] == 'f') {
            decout += (15 * pow(16, (hexconst - k)));
        } else {
            char sym = hexnum[k];
            int isym = sym - '0';
            decout += (isym * pow(16, (hexconst - k)));
        }
    }
    return decout;
}

int main(int argc, char **argv) {
    if (argc==1) {
        printf("Usage: hex2dec (hexnum1) (hexnum2)\n");
    } else {
        for (unsigned int k=1; k < argc; ++k) {
            int decim = hex2dec(argv[k]);
            printf("%d ", decim);
        }
        printf("\n");
    }
    return 0;
}

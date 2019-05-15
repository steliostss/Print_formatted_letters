#include <stdio.h>
#include <tgmath.h>
#include <malloc.h>
#include <mem.h>



const int recognise_letter (char letter) {
    if (letter == 'a' || letter == 'A') return 1;
    else if (letter == 'b' || letter == 'B') return 2;
    else if (letter == 'g' || letter == 'G') return 3;
    else if (letter == 'd' || letter == 'D') return 4;
    else if (letter == 'e' || letter == 'E') return 5;
    else if (letter == 'z' || letter == 'Z') return 6;
    else if (letter == 'h' || letter == 'H') return 7;
    else if (letter == 'u' || letter == 'U') return 8;
    else if (letter == 'i' || letter == 'I') return 9;
    else if (letter == 'k' || letter == 'K') return 10;
    else if (letter == 'l' || letter == 'L') return 11;
    else if (letter == 'm' || letter == 'M') return 12;
    else if (letter == 'n' || letter == 'N') return 13;
    else if (letter == 'j' || letter == 'J') return 14;
    else if (letter == 'o' || letter == 'O') return 15;
    else if (letter == 'p' || letter == 'P') return 16;
    else if (letter == 'r' || letter == 'R') return 17;
    else if (letter == 's' || letter == 'S') return 18;
    else if (letter == 't' || letter == 'T') return 19;
    else if (letter == 'y' || letter == 'Y') return 20;
    else if (letter == 'f' || letter == 'F') return 21;
    else if (letter == 'x' || letter == 'X') return 22;
    else if (letter == 'c' || letter == 'C') return 23;
    else if (letter == 'v' || letter == 'V') return 24;
    else if (letter == '0' )                 return 25;
    else if (letter == '1' )                 return 26;
    else if (letter == '2' )                 return 27;
    else if (letter == '3' )                 return 28;
    else if (letter == '4' )                 return 29;
    else if (letter == '5' )                 return 30;
    else if (letter == '6' )                 return 31;
    else if (letter == '7' )                 return 32;
    else if (letter == '8' )                 return 33;
    else if (letter == '9' )                 return 34;
    else if (letter == '-' )                 return 35;
    else if (letter == ' ' )                 return 36;
    else return -1;
}

int main (char argc, char** argv) {
    char* input;
    FILE* fontfile;
    FILE* outfile;
    int length;
    int arguments = (int)argc;
    if (arguments <= 2 || arguments >4) {
        printf("error\n");
        return 1;
    }
    else {
        int length = strlen(argv[1]);
        input = malloc(length * sizeof(char));
        fontfile = fopen(argv[2], "r");
        input = argv[1];
    }
    int width = fgetc(fontfile);
    fgetc(fontfile);
    int height = fgetc(fontfile);
    char str[width];
    fgets(str, width, fontfile);
    outfile = fopen("outfile.txt", "w");
    for(int j=0; j<height; ++j){
        for(int i=0; i<length; ++i){
            int n = recognise_letter(input[i]);

        }
    }





    fclose(fp);
    return 0;
}
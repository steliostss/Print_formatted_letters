#include <stdio.h>
#include <stdbool.h>
#include <errno.h>
#include <mem.h>

int recognise_letters(char letter);
bool check_input_for_errors(int argc, char** argv, const char* fontfile_path, const char* outfile_path);
void print_letters(FILE* fontfile, const char* outfile_path, int current_line, int width);
void execute_program(char* input, FILE* fontfile, char* outfile_path);


int main(int argc, char** argv) {
    FILE* fontfile;
    char* fontfile_path = 0;
    char* outfile_path = 0;

    bool check = check_input_for_errors(argc, argv, fontfile_path, outfile_path);

    if (!check) return -1;

    fontfile = fopen(fontfile_path, "r");
    if (fontfile == NULL){
        printf("Error opening fontfile: %s\n", strerror(errno));
        return 1;
    }

    char* input = argv[1];

    execute_program(input, fontfile, outfile_path);

    return 0;
}

int recognise_letters(char letter){
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
    else if (letter == '.' )                 return 36;
    else if (letter == ' ' )                 return 37;
    else return 38;
}

bool check_input_for_errors(int argc, char **argv, const char *fontfile_path, const char *outfile_path) {
    if (argc <= 2){
        perror("Not enough arguments\n");
        return false;
    }
    else if (argc >= 5){
        perror("Too many arguments\n");
        return false;
    }
    else if (argc == 3) {
        fontfile_path = argv[2];
        outfile_path = "stdout";
        return true;
    }
    else {
        fontfile_path = argv[2];
        outfile_path = argv[3];
        return true;
    }
}

void print_letters(FILE* fontfile, const char* outfile_path, int current_line, int width) {
    char line[width];
    int line_counter = 0;
    FILE* outfile = NULL;
    if (outfile_path == "stdout") {
        outfile = stdout;
    }
    else  {
        outfile = fopen(outfile_path, "w");
    }
    while (fgets(line, width, fontfile)) {
        line_counter++;
        if (line_counter == current_line) {
            fprintf(outfile, "%s", line);
        }
    }
    fclose(outfile);
}

void execute_program(char *input, FILE *fontfile, char *outfile_path) {
    int width = fgetc(fontfile);
    fgetc(fontfile); //space between width and height
    int height = fgetc(fontfile);
    for(int j=0; j<height; ++j) {
        for(int i=0; i<width; ++i) {
            int n = recognise_letters(input[i]);
            int current_line = height*(n-1)+2+n+j;
            print_letters(fontfile, outfile_path, current_line, width);
        }
    }
}


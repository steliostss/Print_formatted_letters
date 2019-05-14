#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

int recognise_letter (char letter);
bool check_input_for_errors(int argc, char** argv, const char* fontfile_path, const char* outfile_path);
void print_letters (char* input, int width, int height, char* outfile_path);
char* find_letter_in_fontfile(FILE* fontfile, int letter_index, int offset, int width, int height);
void execute_program(char* input, FILE* fontfile, char* outfile_path);

int main(int argc, char** argv)
{
    FILE* fontfile; //specify a pointer to fontfile, which is the reference file for printing the letters
    FILE* outfile;  //specify a pointer to outfile
    char* fontfile_path = NULL;
    char* outfile_path  = NULL;

    bool check = check_input_for_errors(argc, argv, fontfile_path, outfile_path);
    
    //if something went wrong end the execution;
    if (!check) return -1;

    fontfile = fopen(fontfile_path, "r"); //open file in read mode -> "r"
    if (fontfile == NULL)
    { //check if file exists
        printf("Error opening fontfile. Errno = %d\n", errno);
        return 1;
    }

    //READ INPUT HERE
    char* input = argv[1];

    execute_program(input, fontfile, outfile_path);

    fclose(fontfile);
    return 0;
}

bool check_input_for_errors(int argc, char **argv, const char *fontfile_path, const char *outfile_path)
{
    if (argc <= 2)
    { //argc do not match requirements. Something is missing.
        perror("Not enough argc, try again\n");
        return false;
    }
    else if (argc >= 5)
    { //argc do not match requirements. We have excess.
        perror("Too many argc, try again\n");
        return false;
    }
    else if (argc == 3)
    { //argc are exactly 3 so only the fontfile is given. Print to stdout
        fontfile_path = argv[2];
        outfile_path = "stdout";
        return true;
    }
    else
    { //argc are exactly 4 so we have an outfile. Print in outfile.
        fontfile_path = argv[2];
        outfile_path = argv[3];
        return true;
    }
}

int recognise_letter (char letter) 
{
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

//This function prints letter according to width and height
void print_letters (char* input, int width, int height, char* outfile_path)
{
    //print to outfile or stdout depending on the contents of outfile_path
    if ( strncmp(outfile_path, "stdout", 1) != 0) {
        //outfile was given
        FILE* outfile = fopen(outfile_path, "w");
        if (outfile == NULL)
        { //check if file exists
            printf("Error opening outfile. Errno = %d\n", errno);
//            return 1;
            return;
        }
    }
    else {
        //outfile was not given, print in stdout
        return;
    }
}

/*
 * This function reads fontfile, jumps to the correct line according to letter_index
 * and then adds the offset to get the desirable line from the fontfile.
 * for example A with width=5 and height=5 is like that:
 *
 *      *****
 *      *   *
 *      *****
 *      *   *
 *      *   *
 *
 * and the call of the function is like that: find_letter (fontfile, 1, 2, 5, 5);
 * from the fontfile we want the 2nd line of 1st letter
 */
char* find_letter_in_fontfile(FILE* fontfile, int letter_index, int offset, int width, int height)
{
    return NULL;
}

void execute_program(char* input, FILE* fontfile, char* outfile_path)
{
    int height = fgetc(fontfile);
    int width  = fgetc(fontfile);



}


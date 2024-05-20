// write a program to put characters in a text file
#include <stdio.h>

int main() {
    char c;
    FILE *fp = fopen("abc.txt", "w");
    for(c = 'A'; c<='z'; c++) {
        fputc(c, fp);
    }
}
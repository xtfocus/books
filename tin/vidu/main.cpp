
#include<string.h>
#include <iostream>
char* strcpy(char* copyString, const char* stringCopy);
//size_t strlen(const char*string);
int main (int argc, char *argv[ ]) { /* Chung ta khai bao bien "string" kieu char trong do co chua 1 chuoi ky tu va mot bien "copy" voi kich thuoc 100 ky tu de bao dam co du cho trong */
char string[ ] = "Text", copy[100] = {0};
strcpy(copy, string); // Chung ta se sao chep nhung ky tu tu "string" sang "copy" // Neu khong co gi sai sot thi "copy" bay gio se giong nhu "string"
printf ("string is : %s\n", string); printf ("copy is : %s\n", copy); return 0; }

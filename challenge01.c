#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char str[20];
    char sent[100];
    /* Read input */
    printf("Enter a char:\n");
    scanf("%c\n", &ch);
    printf("Enter a string: \n");
    scanf("%s\n", str);
    printf("Enter a sentence: \n");
    scanf("%[^\n]s", sent);
    
    /* Print the input */
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sent);
    return 0;
}

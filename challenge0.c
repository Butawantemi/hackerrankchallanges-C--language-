#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	printf("Hello, World!\n");
    char s[100];
    scanf("%[^\n]%*c", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("%s", s); 
    return 0;
}

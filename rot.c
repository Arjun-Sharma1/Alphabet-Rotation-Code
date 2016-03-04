#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    if (argc != 2 || (n = atoi(argv[1])) < 0) {
        fprintf(stderr, "usage: rot n\n");
        return(1);
    }

    int c;

    while ((c = getchar()) != EOF) {
	int result = 0;
    if (c >= 'A' && c <= 'Z'){
		result=c + n;
		while (result > 'Z'){
			result -= 26;
		}
		c=result;
	}
	else if (c >='a' && c<='z'){
		result=c + n;
		while(result>'z'){
			result -=26;
		}
		c=result;
	}
        putchar(c);
    }

    return(0);
}

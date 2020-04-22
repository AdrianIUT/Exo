#include <stdio.h>
#include <stdlib.h>

void respace (unsigned char* A, char l1, char l2);

int main (int argc, char **argv, char **envv){
	unsigned char* C;
	C=malloc(1000*sizeof(double));
	C[0]='T';
	C[1]='E';
	C[2]='S';
	C[3]='T';
	C[4]=' ';
	C[5]='2';
	C[6]=' ';
	C[7]='1';
	C[8]='\0';
	C[9]='D';

	respace(C, argv[1][0], argv[2][0]);
	free(C);
	return 0;
}

void respace (unsigned char* A, char l1, char l2) {
        int i;
        i=0;
        while (A[i] != '\0'){
                if (A[i] == 'l1'){
                        A[i]=='l2';
                }
                i++;
        }
        printf("%s\n",A);
	printf("%d\n",l1);
        printf("%d\n",l2);
}

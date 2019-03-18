#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFERSIZE 512

void readFile(FILE *fp, char text[BUFFERSIZE], int isKey);
char *encrpytVigenere(char plainText[BUFFERSIZE], char key[BUFFERSIZE]);
void print(char text[BUFFERSIZE], char title[]);

int main(int argc, char *argv[]){

	FILE *keyFile;
	FILE *plainTextFile;
	char *cipher;
    char plainText[BUFFERSIZE+1];
    char key[BUFFERSIZE+1];
	// Check for command line input and open input file.
	if(argc==3){
        keyFile = fopen(argv[1], "r");
		if(keyFile==NULL){
			printf("File %s failed to open. Aborting.\n", argv[1]);
			return 1;
        }
        plainTextFile = fopen(argv[2], "r");
		if(plainTextFile==NULL){
			printf("File %s failed to open. Aborting.\n", argv[2]);
			return 2;
        }
    }
    else{
		printf("Incorrect number of input parameters. Please specify the name of the input file only.\n");
		printf("Syntax: ./a.out key1.txt plainText1.txt\n");
		return 1;
	}
    readFile(keyFile,key,1); //1 for key
    print(key, "Vigenere Key");
	readFile(plainTextFile,plainText,0); //0 for not the key
	print(plainText, "Plaintext");
    cipher = encrpytVigenere(plainText, key);
    print(cipher, "Ciphertext");
    free(cipher);

    return 0;
}

void readFile(FILE *fp, char text[], int isKey){
    char c;
    int index = 0, keySize;
    c=fgetc(fp);
    while(!feof(fp)&&(index!=BUFFERSIZE)){//returns 0 until end of file is reach
            if((c >= 'a') && (c <= 'z')){//if(islower(c)){
               text[index]=c;
               ++index;
            }
            else if((c >= 'A') && (c <= 'Z')){//if(isupper(c)){
                c=c+32;
                text[index]=c;
                ++index;
            }
            c=fgetc(fp);
    }
    keySize=index;
    while(index!=BUFFERSIZE){
        if(isKey) break;
        else text[index]='x';
        ++index;
    }
    if(isKey) text[keySize]='\0';
    else text[BUFFERSIZE]='\0';
}

char *encrpytVigenere(char plainText[], char key[]){
    int i, keySize=strlen(key);
    char *cipher=malloc(BUFFERSIZE * sizeof(char));
    for(i=0;i<BUFFERSIZE;i++)
        cipher[i]=(plainText[i]-'a'+ key[i%keySize]-'a')%26 + 'a';
    return cipher;
}

void print(char text[], char title[]){
    int i;
    printf("\n\n%s:\n",title);
    for(i=0;i<strlen(text);i++){
        if(i%80==0) printf("\n");
        printf("%c",text[i]);
    }
    printf("\n");

}

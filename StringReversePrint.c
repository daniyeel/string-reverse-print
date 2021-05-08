#include <stdio.h>

// Prototypes:
void ReadString(void);
void StringReverse(char *startSentence, char*endSentence, char sizeString);
void PrintString(char *startSentence);
void swap(char *pointer_a, char *pointer_b);

int main(void)
{
	ReadString();
	return 0;
}

void ReadString(void)
{
	char sentence[20]; // declare array, max. 20 characters (could be changed, see README)
	int temp;
	printf("Write a sentence (max. 20 characters):");
	scanf("%[0-9 a-z A-Z]", &sentence); // input sentence
	char *startSentence; // pointer to start of sentence
	startSentence = &sentence[0]; // adres of sentence points startSentence
	char sizeSentence = sizeof(sentence)-1;  
	char i; // char teller
	for( i = 0; i < sizeSentence; i++) // for-loop for sizeSentence
	{
		if( sentence[i] == '\0') 
		{
			sizeSentence = i;
		}
	}

char *endSentence = &sentence[sizeSentence-1]; 
StringReverse(startSentence, endSentence, sizeSentence); 
}

void StringReverse(char *startSentence, char*endSentence, char sizeString)
{
	printf("The input sentence is: %s \n", startSentence); // print input sentence
	char i; 
	
	for( i = 0; i < (sizeString)/2; i++)
	{
		swap(startSentence+i, endSentence-i);
	}
	
	PrintString(startSentence);
}

void swap(char *pointer_a, char *pointer_b) // swap function
{
int temp;
temp = *pointer_a;
*pointer_a = *pointer_b;
*pointer_b = temp;	
}

void PrintString(char *startSentence)
{
	printf("The reserved sentence is: %s \n", startSentence); // print out reversed sentence
}

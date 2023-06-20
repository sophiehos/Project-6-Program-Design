//Sophia Hostetler
//U27264415
//This program will look at a DNA sequence provided in a file and calculate the number of times that a STR is repeated

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count_repeats(char *sequence, char *STR);

int main()
{
	char file_name[101];
	char length[20001];
	char STR[20000];
	int result; 

//prompt user to enter file name

	printf("Enter the file name for the DNA sequence: ");
		scanf("%s", file_name);

	FILE *fp=fopen(file_name,"r");

//if statement to ensure there is not an error reading the file

	if(fp==NULL)
	{
		printf("Error opening file.");
		return 1;
	}
	
//prompt user to enter STR

	printf("Enter STR: ");
		scanf("%s", STR);

//while loop to read line of text

	while(fgets(length,20001,fp) !=NULL)

//call count_repeats function to get result 

	result=count_repeats(length,STR);

//print output

	printf("Output: %s is repeated %d times",STR,result);

//close file

	fclose(fp);	

return 0;
}
int count_repeats(char *sequence, char *STR)
{
  
	int count=0;
	char *p=sequence;

//while loop to update string and use of string library search function

	while((p=strstr(p, STR))!=NULL)
	{
		count++;
		p+=strlen(STR);
	}
	return count;
}

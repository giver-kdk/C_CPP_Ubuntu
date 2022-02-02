/*
This program takes question and answer input from user and stores in file.
Users can access the data by following ways:
* Get all the question-answers in one print
* Access particular question-answer by searching keywords

********************		Code By: Giver Khadka		  ******************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

#define CHAR_LIMIT 100 //Number of character to print in single line

void write_data();
void read_data();
void edit_data();
void store_loop();
int count_lines(FILE *fp);
void print_data(char topic[], FILE *fp, int line);
void search_engine(FILE *fp1, char word_group[50][50], int word_num, char file_name[], int new_line);
void split_string(char search[100], char group[50][50], int *num);
void descend_array(int array1[], int array2[], int size);
void dual_lineprint(FILE *fp, int line, int j);

int main()
{
	char choice;
start:
	printf("1) Write and store Files\t\t");
	//Stop program for half seconds
	Sleep(500);
	printf("2) Read and study Files\t\t");
	Sleep(500);
	printf("3) Edit and modify Files\n\n");
	Sleep(1000);
	printf("\t\t\t\tSelect your choice: ");
	//Clear buffer memory
	fflush(stdin);
	scanf("%c", &choice);
	switch (choice)
	{
	case '1':
		write_data();
		break;
	case '2':
		read_data();
		break;
	case '3':
		edit_data();
		break;
	default:
		printf("\n\n\t\t\t\t\tWrong Choice!!!\n\n");
		printf("Choose Again? (Y/N)");
		fflush(stdin);
		scanf("%c", &choice);
		if (choice == 'y' || choice == 'Y')
		{
			goto start;
		}
	}
}
void write_data()
{
	int i = 0;
	char file_name[50], choice, data, resume = 'y';
	printf("Write and Save Important Question Answers...Y/N?\n");
	scanf(" %c", &choice);

	if (choice == 'y' || choice == 'Y')
	{
	write:
		printf("Enter your File Name (With Extension): ");
		fflush(stdin); //Clear buffer memory to avoid new line(Enter) as string input
		gets(file_name);
		FILE *fp1 = fopen(file_name, "r"); //Read mode first to test file existance
		if (fp1 == NULL)
		{
			//If file doesn't exist, write data in new file
			FILE *fp = fopen(file_name, "w");
			store_loop(fp); //Data writing function
			fclose(fp);
		}
		else
		{
			//Error if file already exists
			printf("\n\t\tThere already exists a File with ID: %s\t\tTry different ID!\n", file_name);
			fclose(fp1);
			goto write;
		}
	}
	printf("\n\t\t\tData Stored Successfully!");
	getchar();
}
void read_data()
{
	int new_line = 0, word_num = 0;
	char file_name[50], choice;
	char search_word[100], word_group[50][50];
read:
	printf("\nEnter the File Name (With Extension) to study: ");
	fflush(stdin); //Clear buffer memory to avoid new line(Enter) as string input
	gets(file_name);
	FILE *fp1 = fopen(file_name, "r"); //Check file availability
	if (fp1 == NULL)
	{ //Error if file not available
		printf("\nNo such File available!\tPlease enter available File ID\n");
		goto read;
	}
	new_line = count_lines(fp1); //Count number of lines in file
	printf("\t\t\t\tHow do you want to access your question-answers?\n");
	Sleep(1000); //Stop program for 1 second
	printf("\t\t\t1. See all questions\t\t");
	Sleep(500);
	printf("2. Search by typing question\n\n");
	Sleep(500);
	printf("\t\t\t\tSelect your choice: ");
	scanf(" %c", &choice);
	switch (choice)
	{
	case '1':
		print_data(file_name, fp1, new_line);
		break;
	case '2':
	search:
		// Reset variables for every search
		word_num = 0;
		search_word[0] = '\0';
		word_group[0][0] = '\0';
		//Take search input and breakdown words
		split_string(search_word, word_group, &word_num);
		//Search input words in file and print
		search_engine(fp1, word_group, word_num, file_name, new_line);
		printf("\n\n\t\tDo you want to search again? (Y/N)");
		scanf(" %c", &choice);
		if (choice == 'y' || choice == 'Y')
		{
			goto search; //Research if required result not found
		}
		break;
	default:
		printf("\n\t\t\tInvalid Selection");
	}
	fclose(fp1);
	printf("\n\t\t\tPress any key to exit: ");
	getchar();
}
void edit_data()
{
	int i = 0, new_line = 0;
	char file_name[50], data, resume = 'y';
edit:
	printf("\nEnter the File Name (With Extension) to modify: ");
	fflush(stdin); //Clear buffer memory to avoid new line(Enter) as string input
	gets(file_name);
	FILE *fp1 = fopen(file_name, "r"); //Check file availability
	if (fp1 == NULL)
	{ //Error if file not available to edit
		printf("\nNo such File available!\tPlease enter available File ID\n");
		goto edit;
	}
	fclose(fp1);
	//Append mode if file available
	fp1 = fopen(file_name, "a");
	store_loop(fp1); //Add data in append mode
	fclose(fp1);
	printf("\n\t\t\tData added Successfully!");
	getchar();
}
void store_loop(FILE *fp1)
{ //Data writing function
	char resume = 'y', data;
	int i;
	while (resume == 'y' || resume == 'Y')
	{
		i++;
		printf("Enter your Question:");
		printf("\t\t(Press 'Enter' to finish question)\n\n");
		fflush(stdin);
		while (1)
		{
			data = getchar();
			putc(data, fp1); //Put input character in file
			if (data == '\n')
			{ //New line means turn for answer
				printf("\nWrite your answer:\n");
				fflush(stdin);
				while (1)
				{
					data = getchar();
					putc(data, fp1);
					if (data == '\n')
					{ //Another new line means turn for next question-answer
						goto resume;
					}
				}
			}
		}
	resume:
		printf("Do you want to add more...Y/N?");
		scanf(" %c", &resume); //Loop continues if resume is 'y' or 'Y'
	}
}
int count_lines(FILE *fp)
{
	char data;
	int new_line = 0;
	fseek(fp, 0, SEEK_SET);			 //Set cursor to initial position
	while ((data = getc(fp)) != EOF) //Continue data read until End Of File
	{
		if (data == '\n')
		{
			new_line++; //Count new lines
		}
	}
	fseek(fp, 0, SEEK_SET); //Reset cursor to initial position as before
	return (new_line);
}
void print_data(char topic[], FILE *fp, int new_line)
{ //Print everything in a file with question-answer format
	int count = 0, line_num = 0, i = 1;
	char data, bullet = '1';

	printf("Question Answers of %s are:\n\n", topic);
	printf("Question (%d) >>>>\n", i);
	while ((data = getc(fp)) != EOF) //loop until EOF
	{
		if (data == '\n')
		{
			count = 0;				  //'count' used to count number of characters printed from a single line
			line_num++;				  //Counts the number of lines printed
			if (line_num == new_line) //Checks if number of lines printed == total number of line
			{
				printf(" ");
			}
			//Flip turns for printing "Question" and "Ans"
			else if (bullet == '1')
			{ //Print "Ans" if previously "Question" was printed
				printf("\nAns:\t");
				bullet = '0';
			}
			else if (bullet == '0')
			{
				i++;
				printf("\n\nQuestion (%d) >>>>\t", i);
				bullet = '1';
			}
		}
		printf("%c", data);
		count++;
		if (count >= CHAR_LIMIT && data == ' ')
		{			   //Print new line if number of characters printed from single line exceeds limit
			count = 0; //Reset character counter for new line
			printf("\n");
		}
	}
}
void search_engine(FILE *fp1, char word_group[50][50], int word_num, char file_name[], int new_line)
{
	char file_word[50];
	char data;
	int i = 0, j = 0, k = 0, l = 0;
	int line_num = 1, match_num = 0, line[100] = {0}, match[100] = {0};
	while (1)
	{
		fflush(stdin);
		//Store character
		data = fgetc(fp1);
		//Check if data is new line or whitespace or doesn't belong to alphabet and numbers
		if (((data < 64 || data > 90) && (data < 97 || data > 122) && (data < 48 || data > 57)) || data == '\n')
		{
			file_word[i] = '\0'; //End the string to store a single word
			line[k] = line_num;	 //Store line number on array
			if (data == '\n')
			{
				line_num++; //Count line numbers read from file
				k++;		//Increment index for next line number
				j++;		//Increment index for next match number
				match_num = 0;
			}
			//Compare word from file and input word
			if ((strcmp(strlwr(file_word), strlwr(word_group[l]))) == 0)
			{
				match_num++;		   //Count number of matching words
				match[j] += match_num; //Addup matches until new line increments 'j'
			}
			if (data == EOF)
			{
				fseek(fp1, 0, SEEK_SET); //Reset cursor for searching next input word
				if (l == (word_num - 1))
				{
					goto one; //End search if all words are searched
				}
				j = 0;		  //Reset 'j' for next input word match
				k = 0;		  //Reset 'k' for next input word line number
				line_num = 1; //Reset line number for next input word
				l++;		  //Count number of input words searched
			}
			strcpy(file_word, "\0"); //Reset string to store next file word
			i = 0;					 //Sets index of file_word string to 0
		}
		else
		{
			file_word[i] = data; //Normally store characters
			i++;
		}
	}
one:
	//Sort the line and match array in descending order
	descend_array(line, match, new_line);

	for (i = 0; i < new_line; i++)
	{ //Check if first line number is even(means Answer line)
		if (line[i] % 2 == 0)
		{ //Check if the even line has matches or not
			if (match[i] != 0)
			{
				for (j = 0; j < new_line; j++)
				{ //Detect even(answer) line number's corresponding odd(question) line
					if (line[j] == line[i] - 1)
					{ //Check if the odd(question) line has matches or not
						if (match[j] != 0)
						{
							match[j] = 0; //Set match to 0 to avoid double printing of same question-answer
						}
					}
				}
			}
		}
		else
		{ //Similar test for odd(question) line number
			if (match[i] != 0)
			{
				for (j = 0; j < new_line; j++)
				{
					if (line[j] == line[i] + 1)
					{
						if (match[j] != 0)
						{
							match[j] = 0;
						}
					}
				}
			}
		}
	}
	printf("\nSorted Search results from %s file are :>>>>>>>>>>", file_name);
	j = 0; //Reset for reuse
	for (i = 0; i < new_line; i++)
	{
		if (match[i] != 0) //Print only if line has matches
		{
			j++; //Count question number
			dual_lineprint(fp1, line[i], j);
		}
	}
}
void split_string(char search[100], char group[50][50], int *num)
{
	int i;
	char *ptr1;
	//User Search Input
	printf("Type your question/answer:\t\t\t(Atleast type some matching keywords)\n");
	fflush(stdin);
	gets(search);
	//Convert all the non-alphabet and non-numeric characters to whitespace
	for (i = 0; search[i] != '\0'; i++)
	{
		if ((search[i] < 64 || search[i] > 90) && (search[i] < 97 || search[i] > 122) && (search[i] < 48 || search[i] > 57))
		{
			search[i] = ' ';
		}
	}
	i = 0;						//Reset for reuse
	ptr1 = strchr(search, ' '); //Check if there are multiple words separated by whitespace
	if (ptr1 != NULL)			//If whitespace detected, split the words
	{
		ptr1 = strtok(search, " "); //'ptr1' points to first splitted word from input sentence
		//Use loop for 'ptr1' to point to next words of sentence
		while (ptr1 != NULL)
		{
			(*num)++;				  //Count number of words splitted
			strcpy(group[i], ptr1);	  //Store current pointed word in string array
			ptr1 = strtok(NULL, " "); //Point to next occuring words from previous sentence
			i++;
		}
	}
	else //If no whitespace detected, simply store word
	{
		*num = 1; //Set number of words to 1
		strcpy(group[i], search);
	}
}
void descend_array(int array1[], int array2[], int size)
{ //Sorting array according to highest match found
	int i, j, temp1, temp2;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{							   // Comparing array2 means comparing match
			if (array2[i] < array2[j]) //If 'ith' element is less than 'jth' element then swap
			{
				temp1 = array1[j];
				temp2 = array2[j];
				array1[j] = array1[i]; //Swap equivalent line array
				array2[j] = array2[i]; //Swap main match array
				array1[i] = temp1;
				array2[i] = temp2;
			}
		}
	}
}
void dual_lineprint(FILE *fp, int line, int j)
{ //Auto detect answer and question line and print whole Question-Answer
	int count = 1, limit = 0, char_num = 0, line_num = 0;
	char data;
	//Printing starts from question(odd) line. So, check line
	if (line % 2 == 0)
	{ // Set the even(answer) line to odd(question) line
		line = line - 1;
	}
	printf("\n\nQuestion (%d) >>>>\n", j);
	while ((data = getc(fp)) != EOF) //Loop until EOF
	{
		if (data == '\n')
		{
			count++; //Count line numbers read
		}
		if (count == line) //If the matching line number is found, print
		{
			if (line == 1)
			{ //Reset cursor if match found in 1st line since, cursor moves 1 step forward due to 'getc' above
				fseek(fp, 0, SEEK_SET);
			}
			//Only print two lines(question-answer)
			while ((data = getc(fp)) != EOF)
			{
				if (data == '\n')
				{
					char_num = 0; //Reset character number counter for next line
					limit++;	  //Count lines printed
					if (limit == 2)
					{
						goto end; //Stop printing if 2 lines completed
					}
					printf("\nAns:"); //Print "Ans" after "Question" completed
				}
				printf("%c", data);
				char_num++; //Count charcters printed
				if (char_num >= CHAR_LIMIT && data == ' ')
				{
					char_num = 0; //Reset character number counter for next line
					printf("\n"); // Print new line if character limit exceeded
				}
			}
		}
	}
end:
	fseek(fp, 0, SEEK_SET); //Reset cursor for reuse
}

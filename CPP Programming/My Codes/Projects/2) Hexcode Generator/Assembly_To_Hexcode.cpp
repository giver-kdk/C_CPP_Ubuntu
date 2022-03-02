#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;
char fName[20];

void strupr(string &str);
// void strlwr(string &str);
char *get_name_of(string str);
void asm_to_hex(string instruct, string mnemonic, string operand1, string operand2)
{
	int row = 0, column = 0;
	string hexCode;
	if(operand1[0] == '\0' && operand2[0] == '\0')					// Zero Operand Instruction
	{
		row = 2;
		column = 19;
		cout << "No value in operand1 and operand2" << endl;
		string opCodeArray[row][column]
		{
			// Mnemonics with corresponding op-codes in an array
			{"RET","XCHG", "SPHL", "XTHL", "PCHL", "EI", "DI", "NOP", "HLT", 
			"RRC", "RLC", "RAR", "RAL", "CMA", "STC", "CMC", "DAA", "RIM", "SIM"},
			{"C9", 	"EB", 	"F9", 	"E3", 	"E9", 	"FB", "F3", "00", 	"76", 
			"0F",  "07",  "1F",	 "17", 	"2F",  "37",  "3F",	 "27", 	"20",  "30"}
		};
		for(int j = 0; j < column; j++)
		{
			if(mnemonic == opCodeArray[0][j])
			{
				hexCode = opCodeArray[1][j];		// Assign corresponging op-code 
			}
		}
	}
	else if((operand1[0] != '\0') && (operand2[0] == '\0'))			// One Operand Instruction
	{
		cout << "Value in operand1" << endl;
	}
	else if((operand1[0] != '\0') && (operand2[0] != '\0'))			// Two Operand Instruction
	{
		cout << "Value in operand1 and operand2" << endl;
	}
}













int main()
{
	enum programCounter{opCode, firstOperand, secondOperand};
	int i = 0, j = 0, k = 0, index = 0, mnemoNum = 0, op1Num = 0, op2Num = 0, programCounter = opCode;
	string instruction, file_name, mnemonic, operand1, operand2;
	instruction.resize(50);
	mnemonic.resize(20);						// Setting string size
	char data = 's';
	
	FILE *fp = fopen(get_name_of(file_name), "r");
	if(fp == NULL)
	{
		cout << "Error Opening file..." << endl;
		exit(0);
	}
	while((data = getc(fp)) != EOF)
	{
		if(data == '\n')
		{
			instruction[index] = ' ';
			instruction.push_back('\0');
			string program = instruction;
			instruction = "\0";
			strupr(program);										// Uppercasing instruction for flexibility
			programCounter = opCode;
			mnemonic = "\0";
			operand1 = "\0";
			operand2 = "\0";
			i = 0;
			j = 0;
			k = 0;
			index = 0;
			// String size decreases due to above initialization
			instruction.resize(20);
			mnemonic.resize(20);
			operand1.resize(20);
			operand2.resize(20);

			for(int l = 0; l < program.length(); l++)
			{
				if((program[l] == ' ') || (program[l] == ',') || (program[l] == '\t'))
				{
					if((program[l-1] != ',') && (program[l-1] != ' ') && (program[l-1] != '\t'))
					{
						if(programCounter == opCode)
						{
							mnemonic[i] = '\0';
							cout << "mnemonic: " << "*" << mnemonic << "*" << endl;
							programCounter++;
						}
						else if(programCounter == firstOperand)
						{
							operand1[j] = '\0';
							cout << "operand1: " << "*" << operand1 << "*"<< endl;
							programCounter++;
						}
						else if(programCounter == secondOperand)
						{
							operand2[k] = '\0';
							cout << "operand2: " << "*" << operand2 << "*" << endl;
							programCounter = opCode;
						}
					}

				}
				else
				{
					if(programCounter == opCode)
					{
						mnemonic[i] = program[l];
						i++;
					}
					else if(programCounter == firstOperand)
					{
						operand1[j] = program[l];
						j++;
					}
					else if(programCounter == secondOperand)
					{
						operand2[k] = program[l];
						k++;
					}
				}
			}
			// cout << "Mnemonic: " << mnemonic << "\t" << "Operand1: " << operand1 << "\t" << "Operand2: " << "*" << operand2 << "*" << endl;
			if(mnemonic[0] == '\0')
			{// Do nothing, if no instruction detected
				continue;
			}
			else
			{
				// User Defined Assembly to HexCode Function
				asm_to_hex(program, mnemonic, operand1, operand2);
			}
		}
		else
		{
			cout << "Data: " << data << endl;
			instruction[index] = data;
			index++;
		}
	}
	fclose(fp);
}

























void strupr(string &str)
{
	for_each(str.begin(), str.end(), [](char & ch) 
	{
        ch = ::toupper(ch);
    });
}
// void strlwr(string &str)
// {
// 	for_each(str.begin(), str.end(), [](char & ch) 
// 	{
//         ch = ::tolower(ch);
//     });
// }
char *get_name_of(string str)
{
	int i;
	cout << "Enter assembly file name: ";
	getline(cin, str);
	for(i = 0; i < str.length(); i++)
	{	// 'string' string's character value stored in 'char *' string's index
		fName[i] = str[i];				
	}
	fName[i] = '\0';
	return fName;
}
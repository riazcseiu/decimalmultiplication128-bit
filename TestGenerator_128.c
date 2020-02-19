/* ------------------------------------------------------------------ */
/* Decimal Number Multiplication Testing tools                       */
/* ------------------------------------------------------------------ */
/* Riaz ul haque Mian , DSL, NAIST   git version */
/* ----------------------------------------------------------------+- */
/*                                                 right margin -->|  */

// DecMulTimeMeasure.c -- first read string form text file as input
//  convert the string to decFloat 64 bit format decDobule,
// Multiply the Number together, and write  the result to another
// text file outplut.txt. 
//#define _CRT_SECURE_NO_DEPRECATE
#define  DECNUMDIGITS 34           // work with up to 34 digits
#include"decDouble.h"
#include <stdio.h>                 // for printf
#include <time.h>
#include <string.h>


	



int main() {




/*---------------------------------------------------------------------------------------*/
/*------------------------GENERATING TEST CODE BY ARRAY STRING---------------------------*/
/*------ Block must need to comment out beraore execute the method------------------------*/
/*------ If the file evaluation is open this block must be closed-------------------------*/	 
/*-----------------------------------------------------------------------------------------*/
  
//comment start -------------------------------------------------------------


FILE *ptr_file_read, *ptr_file_readB,*ptr_file_write , *Mptr_file_write,*Arrayptr_file_write;
	char buf[26]; //
	char bufB[26];
	char multiplicand[9000][26];
	char multiplaier[9000][26];
	int num;
	
	//-------------replace file name here -------------------

	    char fileNameA [40] = "128_mul_result_a.txt	";
		char fileNameB [40] = "128_mul_result_b.txt	";
	
        //-----------------------------------------------------  


printf("problem Writing Output.txt");

     ptr_file_read = fopen(fileNameA, "r"); //Name of the input file
	
	if (!ptr_file_read)
	{ 
		printf("problem reading inputA.txt file");
	    return 1;
	}
	ptr_file_readB = fopen(fileNameB, "r"); //Name of the input file
	if (!ptr_file_read)
	{
		printf("problem reading inputB.txt");
		return 1;
	}

	ptr_file_write = fopen("output.txt", "a+");

	if (!ptr_file_write)
	{
		printf("problem Writing Output.txt");
		return 1;
	}

	Mptr_file_write = fopen("Moutput.txt", "a+");

	if (!Mptr_file_write)
	{
		printf("problem Writing Moutput.txt");
		return 1;
	}

  Arrayptr_file_write = fopen("Arrayoutput.txt", "a+");

	if (!Arrayptr_file_write)
	{
		printf("problem Writing ArrayOutput.txt");
		return 1;
	}
	//while (fgets(buf, 100, ptr_file_read) != NULL) //read untill new line

	for (int i = 0; fgets(buf, 100, ptr_file_read) != NULL; i++) //read untill new line
	{
	    // buf[strcspn(buf, "\n")] = 0; //remove \n from string
	     buf[strcspn(buf, "\r\n")] = 0; 
		 strcpy(multiplicand[i], buf); // assign multiplicand max 100
	}
	        fclose(ptr_file_read); // complete all  cover all string
//now multiplicand[] has all the multiplicand which 
		   
	 //------- end reading form tex file 
			for (int i = 0; fgets(bufB, 100, ptr_file_readB) != NULL; i++) //read untill new line
			{
			    //	bufB[strcspn(bufB, "\n")] = 0; //remove \n from string
			     bufB[strcspn(bufB, "\r\n")] = 0; 
				strcpy(multiplaier[i], bufB); // assign multiplicand max 100
			}
			fclose(ptr_file_readB); // complete all  cover all string

		//step 2 calculation in both method

  
//generating code ---------------------------



for (int print = 0; print <2000; print++)
{
 printf("strncpy (multiplicand[%d],\"%s\", strlen(\"%s\")+1);\n",print,multiplicand[print],multiplicand[print]);
fprintf(Arrayptr_file_write,"strncpy (multiplicand[%d],\"%s\", strlen(\"%s\")+1);\n",print,multiplicand[print],multiplicand[print]);
//fprintf(Arrayptr_file_write, "%s \n", (double)( end_decimal- begin_decimal) / CLOCKS_PER_SEC);
}

for (int print = 0; print <2000; print++)
{
 fprintf(Arrayptr_file_write,"strncpy (multiplaier[%d],\"%s\", strlen(\"%s\")+1);\n",print,multiplaier[print],multiplaier[print]);
//fprintf(Arrayptr_file_write,"strncpy (multiplicand[%d],\"%s\", strlen(\"%s\")+1);\n",print,multiplicand[print],multiplicand[print]);
}


    
	  getchar();
  return 0;
 
  } // main 


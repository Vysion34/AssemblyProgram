// AssemblyProgram.cpp : Defines the entry point for the console application.

/* 
Dean Hartfield

2-10-2016

Module 06 Activity - An Assembly Program

Write an assembly program that loads two numbers from memory, 
calculates their sum, and stores the sum to the memory.
*/


#include "stdafx.h"
#include <iostream>
#include <assert.h>


int main()
{
	int a = 2;
	int b = 3;
	int sum;

	// Assembly code
	__asm
	{
		MOV EAX, a;  //move contents of variable a into EAX register
		MOV EBX, b;  //move contents of variable b into EBX register
		
		ADD EAX, EBX;  //add the contents of EBX into EAX

		MOV sum, EAX;  //move the contents of EAX register into sum variable
	}

	// Assert that we have the correct value then print the sum
	assert(sum == 5);
	std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;

	std::cout << std::endl;

	// Assembly code
	__asm
	{
		MOV EAX, 3;  //move the value 3 into EAX register
		MOV EBX, 7;  //move the value 7 into EBX register

		ADD EAX, EBX;  //add the contents of EBX into EAX

		MOV sum, EAX;  //move the contents of EAX register into sum variable
	}

	// Assert that we have the correct value then print the sum
	assert(sum == 10);
	std::cout << "Sum of 3 and 7 is " << sum << std::endl;

	std::cout << std::endl;
    return 0;
}

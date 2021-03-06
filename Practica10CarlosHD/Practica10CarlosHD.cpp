// Practica10CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"


int main()
{
	//Creating the list
	TList * list = new TList();
	int iTemp = 0;
	const char * strTemp = nullptr;

	printf("List created. Current size: %d", list->Size());
	
	// Pushing elements
	iTemp = list->Push("Uno");
	printf("\n\nAdded element (result %d). Current size: %d", iTemp, list->Size());
	iTemp = list->Push("Dos");
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());
	iTemp = list->Push("Tres");
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());
	iTemp = list->Push("Catorce");
	printf("\nAdded element (result %d). Current size: %d", iTemp, list->Size());


	// Iterating through elements
	printf("\n\nIterating starting first element:\n");
	strTemp = list->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = list->Next();
	}

	printf("\n\nList current size: %d", list->Size());

	//Pop elements
	strTemp = list->Pop();
	printf("\n\nPop element: %s", strTemp);
	delete []strTemp;
	strTemp = list->Pop();
	printf("\nPop element: %s", strTemp);
	delete[]strTemp;

	printf("\n\nList current size: %d", list->Size());

	// Iterating through elements after pop
	printf("\n\nAfter Pop");
	printf("\n\nIterating starting first element:\n");
	strTemp = list->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = list->Next();
	}

	//Reset
	list->Reset();
	printf("\n\nList size after reset: %d", list->Size());

	// Iterating through elements after reset
	printf("\n\nAfter Reset");
	printf("\n\nIterating starting first element:\n");
	strTemp = list->First();
	while (strTemp)
	{
		printf("\nNext element: %s", strTemp);
		strTemp = list->Next();
	}

	iTemp = list->Push("One");
	iTemp = list->Push("Two");

	// Destroying the list
	delete list;
	list = nullptr;

	printf("\n\nList destroyed.");

	printf("\n\nPress Enter to quit...");
	getchar();
}


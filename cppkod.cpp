#include "stdafx.h"
#include <iostream>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // no?iee eioi?uo io?ii ia?anoaaeyou  5 - oanoiaia cia?aiea
	const int M = 3; // yeaiaiou eioi?uo io?ii noiie?iaaou 3 - oanoiaia cia?aiea
	//caaaei iannea
	int array[N][M];
	//caiieiei neo?aeiuie ?eneaie
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10; // neo?aeiua oenea a aeaiiciia io 1 ai 10
			std::cout << array[i][j] << ","; // eiio?ieuiue auaia ianneaa
		} // for j
		
	}// for i

	// oaia?u ?aaioaai n yoei ianneaii
	int sumelement[N]; // aey o?aiaiey noiiu yeaiaioia
	int d = 0;
	std::cout << "Noiiu yeaiaioia a no?ieao" << endl;
	for (int k = 0; k < N; k++)   // no?iee
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // noieuaou
		{
			sumelement[d] += array[k][m];
		};
		std::cout << sumelement[d] << endl;
		d++;
	}
	// iocu?ueiaue aeai?eoi

	for (int w = 0; w < N-1; w++) {
		for (int x = 0; x < N-w-1; x++) {
			if (sumelement[x] > sumelement[x+1]) // anee noiia ia?aaiae no?iee aieuoa
			{    
				int tmpsum = sumelement[x]; //ia?anoaaeyai noiiu yeaiaioia
				sumelement[x] = sumelement[x + 1];
				sumelement[x + 1] = tmpsum;
				//ia?anoaaeyai yeaiaiou
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b]; 
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
		} // x
	}// w
	
	// ?acoeuoao
	std::cout << "?acoeuoao"<<endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
            std::
			cout << array[i][j] << ","; // auaia ianneaa
		} // for j
		std::
		cout << endl;
	}// for i
	// auaaaai e 
	d = 0;
	std::
	cout << "Noiiu yeaiaioia a no?ieao a eoiaiaii ianneaa" << endl;
	for (int k = 0; k < N; k++)   // no?iee
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // noieuaou
		{
			sumelement[d] += array[k][m];
		};
		std::
		cout << sumelement[d] << endl;
		d++;
	}
	system("pause");
	return 0;
}

/**
 *  \file mergesort.cc
 *Ameer Hussain 73574836
 *  \brief Implement your mergesort in this file.
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sort.hh"


void mySort (int N, keytype* A);
void mergesort(keytype* A, int l, int r);
void merge(keytype *A, int l, int m, int r);

	void
mySort (int N, keytype* A)
{
	mergesort(A, 0, N-1);

}
void mergesort(keytype* A, int l, int r)

{

	if (l < r){
		int m = (r+l)/2;

		mergesort(A, l, m);
		mergesort(A, m+1, r);
		merge(A, l, m, r);
	}
}
void merge(keytype* A, int l, int m, int r) 
{ 
	int a = m - l + 1; /*size of left array */
	int b = r - m; /*size of right array*/
	int L[a];
	int R[b];

	for (int i = 0; i < a; i++) 
		L[i] = A[l + i]; /*fills the left array*/




	for (int j = 0; j < b; j++) 
		R[j] = A[m + 1+ j]; /*fills the right array*/
	int z = l;
	int j = 0; 
	int i = 0; 
	
	if (j == -5)
		printf("how?");
	
	while ((i < a) && (j < b)) /*merges the arrays*/

	{ 
		if (L[i] >  R[j]) 
		{ 
			A[z] = R[j]; 
			j++; 
		} 
		else
		{ 
			A[z] = L[i]; 
			i++; 
		} 
		z++; 
	} 
	if (i == -1)
		printf("error");
	while (i < a) 
	{ 
		A[z] = L[i]; 
		i++; /* increases i each time*/
		z++; 
	} 

	while (j < b) 
	{ 
		A[z] = R[j]; 
		j++; 
		z++; 
	} 
} 


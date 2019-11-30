/**
 *  \file insertion-sort.cc
 *
 *  \brief Implement your insertion sort in this file.
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sort.hh"
void mySort(int N, keytype *A);
int bSearch(keytype* a, int key, int low, int high);

	void
mySort (int N, keytype* A)
{
	int key, loc;
	for (int j = 1; j < N; j++){
		int i = j-1;
		key = A[j];
		loc = bSearch(A, key, 0, i);		
		/* Lucky you, you get to start from scratch */
		while(i >= loc)
		{
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	}
}
int bSearch(keytype* a, int key, int low, int high){
	if (high <= low){
		if (key > a[low])
			return (low + 1);
		else
			return low;
	}
	int middle = (low + high)/2;

	if(key == a[middle])
		return middle + 1;

	if(key > a[middle])
		return bSearch(a, key, middle+1, high);
	return bSearch(a, key, low, middle-1);


}

/* eof */

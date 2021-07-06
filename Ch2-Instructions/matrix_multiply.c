#include<stdio.h>

void dgemm(int n, double* A, double* B, double* C)
{
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
		{
			double cij = C[i+j*n];
			for(int k=0; k<n; k++)
				cij += A[i+k*n]*B[k+j*n];
			C[i+j*n] = cij;
		}
}

// =================================================================
//
// File: activity.h
// Author: Maria del Pilar Davila Verduzco
// Date: 27 de agosto de 2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma=0;
	for (int i=0; i<n; i++)
		suma+=i;

	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	T(0), T(1)=1, T(n)= 1+T(n-1)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if(n==1){
		return 1;
	}
	if(n==0 || n<=0){
		return 0;
	}
	return n+sumaRecursiva(n-1);
}
// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n^2)
// =================================================================
// n(n+1)/2
unsigned int sumaDirecta(unsigned int n) {
	if (n==1)
		return 1;
	 
	return (n*(n+1)/2);
}

#endif /* ACTIVITY_H */

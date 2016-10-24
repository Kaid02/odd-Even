/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 07
Program : Write a program to print odd and even using ternary operator.
Date : 2016-10-25
*/
#include<stdio.h>
	int main(){
		int a;
	
	printf("\nEnter any number :\n");
	scanf("%d",&a);
	
	(a%2==0)?printf("%d is even",a):printf("%d is odd",a);
	
	return 0;
}	

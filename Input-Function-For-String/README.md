# Input Function for Strings

## Why do we need it ?
C has two function which is OK for getting a **string** input from user. These are __scanf__ and __gets__. But the problem is, they have got major problem to use for strings which could cause a leak or something.
Surpass that thing, we could write our own functions for inputs. But first things first, we need to find out what are the problems with other two : 

__scanf__
- You need to use **.n** to indicate that how much big, the array should be.
- Even if you use **.n**, there is a problem that no mechanism provided to fill the last index of array with __\0__. Null terminator is the signifier for arrays that its a string, if it stays at the last index.
- scanf stops when you put a whitespace between words, while reading the input. So if you put a whitespace, it gets the data until the whitespace and eliminate the rest of the string

__gets__
It has got more problems beneath the problems expressed above which are :
- If you give an input which does not correctly fit with the size of an array, it tries to override the memory location which does not belong to array.

## MATTERS TO NOTICE WHILE CREATING A DESIGN 
We have a got a few things to notice while creating a design for our special-purposed function. These are:

1) Compiler must not stop when it reads a whitespace.
2) Compiler must stop the getting input when it took an __EOF or \n__
3) Compiler must eliminate the characters when there is no more places to put character.
4) Compiler must return the number of character stays in array and should take two arguments which are pointer to a string and the length of string.


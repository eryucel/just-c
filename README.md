# just-c
## CONVERT YOUR CODE TO A REAL C CODE 
C/C++ code obfuscator. 
It converts the entire code into a pyramid-shaped compilable code consisting only of the character 'c'. 

## Example
### This program converts the following code 
```
#include <stdio.h>

int main ()
{
	printf ( "Hello, World!" );
	return 0;
}
```
### to this code
#### obfuscated.h
```
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#define c int
#define cc  main
#define ccc  ()
#define cccc {
#define ccccc 	printf
#define cccccc  (
#define ccccccc  "Hello, World!"
#define cccccccc  );
#define ccccccccc 	return
#define cccccccccc  0;
#define ccccccccccc }

#endif
```
#### obfuscated.c
```
#include "obfuscated.h"

c
cc
ccc
cccc
ccccc
cccccc
ccccccc
cccccccc
ccccccccc
cccccccccc
ccccccccccc

```
## Example2
### This code to
```
#include "stdio.h"

int Factorial (int);

int main ()
{
	int n, r, ans = 0;
	scanf ( "%d%d", &n, &r );
	ans = Factorial (n) / Factorial (n-r);
	printf ( "Permutation : %d", ans );
	return 0;
}

int Factorial ( int num )
{
	int ans = 1;
	for ( int i = 1; i <= num; i++ ){
		ans *= i;
	}
	return ans;
}
```
### this
#### obfuscated.h
```
#ifndef HEADER_FILE
#define HEADER_FILE

#include "stdio.h"
#define c int
#define cc  Factorial
#define ccc  (int);
#define cccc int
#define ccccc  main
#define cccccc  ()
#define ccccccc {
#define cccccccc 	int
#define ccccccccc  n,
#define cccccccccc  r,
#define ccccccccccc  ans
#define cccccccccccc  =
#define ccccccccccccc  0;
#define cccccccccccccc 	scanf
#define ccccccccccccccc  (
#define cccccccccccccccc  "%d%d",
#define ccccccccccccccccc  &n,
#define cccccccccccccccccc  &r
#define ccccccccccccccccccc  );
#define cccccccccccccccccccc 	ans
#define ccccccccccccccccccccc  =
#define cccccccccccccccccccccc  Factorial
#define ccccccccccccccccccccccc  (n)
#define cccccccccccccccccccccccc  /
#define ccccccccccccccccccccccccc  Factorial
#define cccccccccccccccccccccccccc  (n-r);
#define ccccccccccccccccccccccccccc 	printf
#define cccccccccccccccccccccccccccc  (
#define ccccccccccccccccccccccccccccc  "Permutation : %d",
#define cccccccccccccccccccccccccccccc  ans
#define ccccccccccccccccccccccccccccccc  );
#define cccccccccccccccccccccccccccccccc 	return
#define ccccccccccccccccccccccccccccccccc  0;
#define cccccccccccccccccccccccccccccccccc }
#define ccccccccccccccccccccccccccccccccccc int
#define cccccccccccccccccccccccccccccccccccc  Factorial
#define ccccccccccccccccccccccccccccccccccccc  (
#define cccccccccccccccccccccccccccccccccccccc  int
#define ccccccccccccccccccccccccccccccccccccccc  num
#define cccccccccccccccccccccccccccccccccccccccc  )
#define ccccccccccccccccccccccccccccccccccccccccc {
#define cccccccccccccccccccccccccccccccccccccccccc 	int
#define ccccccccccccccccccccccccccccccccccccccccccc  ans
#define cccccccccccccccccccccccccccccccccccccccccccc  =
#define ccccccccccccccccccccccccccccccccccccccccccccc  1;
#define cccccccccccccccccccccccccccccccccccccccccccccc 	for
#define ccccccccccccccccccccccccccccccccccccccccccccccc  (
#define cccccccccccccccccccccccccccccccccccccccccccccccc  int
#define ccccccccccccccccccccccccccccccccccccccccccccccccc  i
#define cccccccccccccccccccccccccccccccccccccccccccccccccc  =
#define ccccccccccccccccccccccccccccccccccccccccccccccccccc  1;
#define cccccccccccccccccccccccccccccccccccccccccccccccccccc  i
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccc  <=
#define cccccccccccccccccccccccccccccccccccccccccccccccccccccc  num;
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccccc  i++
#define cccccccccccccccccccccccccccccccccccccccccccccccccccccccc  ){
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccccccc 		ans
#define cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc  *=
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc  i;
#define cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc 	}
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc 	return
#define cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc  ans;
#define ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc }

#endif
```
#### obfuscated.c
```
#include "obfuscated.h"

c
cc
ccc
cccc
ccccc
cccccc
ccccccc
cccccccc
ccccccccc
cccccccccc
ccccccccccc
cccccccccccc
ccccccccccccc
cccccccccccccc
ccccccccccccccc
cccccccccccccccc
ccccccccccccccccc
cccccccccccccccccc
ccccccccccccccccccc
cccccccccccccccccccc
ccccccccccccccccccccc
cccccccccccccccccccccc
ccccccccccccccccccccccc
cccccccccccccccccccccccc
ccccccccccccccccccccccccc
cccccccccccccccccccccccccc
ccccccccccccccccccccccccccc
cccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
```

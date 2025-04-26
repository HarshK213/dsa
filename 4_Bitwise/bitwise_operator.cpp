#include <iostream>
#include <cmath>
using namespace std;

/*
BITWISE OPERATORS:-

1. Bitwise AND(&):
	0 & 0 = 0
	0 & 1 = 0
	1 & 0 = 0
	1 & 1 = 1

2. Bitwise OR(|):
	0 | 0 = 0
	0 | 1 = 1
	1 | 0 = 1
	1 | 1 = 1

3. Bitwise XOR(^):
	0 ^ 0 = 0
	0 ^ 1 = 1
	1 ^ 0 = 1
	1 ^ 1 = 0

4. Bitwise Left Shift Operator(<<):
	n << i 
	it shift the bits of n to left side i times.

	eg. 4 << 1
	    4 -> 100
	    after left shift by 1 place 
	    100_
	    we will fill empty space by 0
	    Therefore, final number is 1000 -> 8

	eg. 10 << 2
	    10 -> 1010
	    after left shift
	    1010__ -> 101000
	    101000 -> 40
	    
	    10 << 2 -> 40
	
	a << b = a*(2^b)

	

5. Bitwise Right Shift Operator(>>):
	similar to left shift only direction of shift is right.
	
	eg. 10 >> 1
	    1010 >> 1
	    101 -> 5

	eg. 8 >> 2
	    1000 >> 2
	    10 -> 2

	a >> b = a/(2^b)

*/







/*
Operator Precedense:-

_____________________________________
|       |             |             |                                                             |
| S.No. |  OPERATORS  | PRECEDENCE  |
|_______|_____________|_____________|
|   1.  | !,++,--     | R to L      |
|       |             |             |
|   2.  | *,/,%       | L to R      |
|       |             |             |
|   3.  | +,-         | L to R      |
|       |             |             |
|   4.  | <,<=,>=,>   | L to R      |
|       |             |             |
|   5.  | ==,!=       | L to R      |
|       |             |             |
|   6.  | &&          | L to R      |
|       |             |             |
|   7.  | ||          | L to R      |
|       |             |             |
|   8.  | =           | R to L      |
|_______|_____________|_____________|

*/






/*
Local scope & Global Scope 
*/


/*
Data Modifiers:-

1. long (8 bytes)
2. long long (>8 bytes)
3. short (2 bytes)
4. signed (4 bytes)
5. unsigned (4 bytes)
*/


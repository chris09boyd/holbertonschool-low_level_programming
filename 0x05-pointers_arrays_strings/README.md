Strings as arrays:
Before the string class, the abstract idea of a string was implemented with just an array of characters. For example, here is a string:

char label[] = "Single";
What this array looks like in memory is the following:

------------------------------
| S | i | n | g | l | e | \0 |
------------------------------
where the beginning of the array is at some location in computer memory, for example, location 1000.
Note: Don't forget that one character is needed to store the nul character (\0), which indicates the end of the string.
A character array can have more characters than the abstract string held in it, as below:

char label[10] = "Single";
giving an array that looks like:

------------------------------------------
| S | i | n | g | l | e | \0 |   |   |   |
------------------------------------------
(where 3 array elements are currently unused).

Since these strings are really just arrays, we can access each character in the array using subscript notation, as in:

cout << "Third char is: " << label[2] << endl;
which prints out the third character, n.
A disadvantage of creating strings using the character array syntax is that you must say ahead of time how many characters the array may hold. For example, in the following array definitions, we state the number of characters (either implicitly or explicitly) to be allocated for the array.

char label[] = "Single";  // 7 characters

char label[10] = "Single";
Thus, you must specify the maximum number of characters you will ever need to store in an array. This type of array allocation, where the size of the array is determined at compile-time, is called static allocation.

Strings as pointers:
Another way of accessing a contiguous chunk of memory, instead of with an array, is with a pointer.

Since we are talking about strings, which are made up of characters, we'll be using pointers to characters, or rather, char *'s.

However, pointers only hold an address, they cannot hold all the characters in a character array. This means that when we use a char * to keep track of a string, the character array containing the string must already exist (having been either statically- or dynamically-allocated).

Below is how you might use a character pointer to keep track of a string.

char label[] = "Single";
char label2[10] = "Married";
char *labelPtr;

labelPtr = label;
We would have something like the following in memory (e.g., supposing that the array label started at memory address 2000, etc.)
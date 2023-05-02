/*!
@file       q.h
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Assignment 8
@Assignment Pointers and Half-Open Ranges 
@date       13/11/2021
@brief      This header file contains declarations of the functions that allows the user to
            find a character in a string, find any character in a string, count the 
            occurence of the character and or the total occurence of the characters, 
            compare strings' byte sizes, exchange or swap elements in strings, and copies
            and replaces a set number of chracters with a defined offset.
*//*______________________________________________________________________________________*/

/*!
@brief  This function returns a pointer to the first occurrence of val in a half-open range
        of values. If no such element is found, the function returns NULL.

@param  begin, end is a function parameter of the pointer to data type char const
        val is a function parameter of type char

@return NULL if no occurence of val in pointer elements
        begin if val detected in pointer element
*//*_______________________________________________________________________________________*/
char const* find(char const *begin, char const *end, char val);

/*!
@brief  This function returns a pointer to the first occurence of any member of the array 
        whose first element is pointed to by pointer vals and has len number of elements 
        in a half-open range of values. If none found return NULL.

@param  begin, end is a function parameter of the pointer to data type char const
        val is a function parameter of type char
        len is a function parameter of type int

@return NULL if no occurence of val in pointer elements
        begin if val detected in pointer element
*//*_______________________________________________________________________________________*/
char const* find_any(char const *begin, char const *end, char const *vals, int len);

/*!
@brief  This function search from begin to end for 1 char of val (a, e, i, o, u), wherby the
        iteration is done through main, and returns the count of vals occurences in begin.

@param  begin, end is a function parameter of the pointer to data type char const
        val is a function parameter of type char
        count is declared of data type int

@return count
*//*_______________________________________________________________________________________*/
int count(char const *begin, char const *end, char val);

/*!
@brief  This function returns the total number of occurences of the seires of characters in
        the vals char const* according to the elements in begin.

@param  begin, end is a function parameter of the pointer to data type char const
        val is a function parameter of type char
        len is a function parameter of type int
        cnt, charcount is declared as type int

@return charcount
*//*_______________________________________________________________________________________*/
int count_any(char const *begin, char const *end, char const *vals, int len);

/*!
@brief  This function compares corresponding elements in the arrays whose first elements 
        are pointed to by begin1 and begin2 (both of which have len number of values) to
        determine if they contain the same values in the same order. If the contents of the
        two arrays are exactly similar, the function returns 0 . The function returns a 
        negative value when an element in the array whose first element is pointed to by 
        begin1 has a smaller value than the corresponding element in the array whose first 
        element is pointed to by begin2. Otherwise, the function returns a positive number.

@param  begin1, begin2 is a function parameter of the pointer to data type char const
        len is a function parameter of type int
        count, sum1, sum2 is declared as type int

@return int values (0; >0; <0) 
*//*_______________________________________________________________________________________*/
int compare(char const *begin1, char const *begin2, int len);

/*!
@brief  This function swaps the values in the two arrays whose first elements are pointed 
        to by begin1 and begin2 with both arrays containing len number of elements.

@param  begin1, begin2 is a function parameter of the pointer to data type char 
        len is a function parameter of type int
        count, sum1, sum2 is declared as type int

@return nothing 
*//*_______________________________________________________________________________________*/
void exchange(char *begin1, char *begin2, int len);

/*!
@brief  This function copies the len amount of elements in char array, src is pointing to.
        then assigned the corresponding elements pointed to by dst. There is a chance of 
        overlapping, which is to say:
        input 1 2 3 4 5
        dst is an offset pointing to 2; len is 2
        src is pointing to 1
        when this function executes, it should look like so  1 1 2 4 5.
        Where overlapping would result in: 1 1 1 4 5.

@param  dst, src is a function parameter of the pointer to data type char 
        len is a function parameter of type int

@return nothing 
*//*_______________________________________________________________________________________*/
void copy(char *dst, char *src, int len);



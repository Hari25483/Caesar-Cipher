# Caesar-Cipher
A sample Caesar Cipher program in C
Your task is to implement the earliest and simplest cipher called Caesar Cipher, in which each
letter in a text is shifted by a certain number of places down/up in the alphabet.
For example,
with a shift of 1, A would be replaced by B, B would become C, and so on.
Write a program which performs the Caesar encryption for a text. Your program should read the
input from the user from STDIN, perform the cipher operation and finally output the encoded
text to STDOUT.You are only allowed to use the <stdio.h> library for your implementation.
The first line of input contains the number of shifts.
From the second line onwards input contains the text (Note that text can have any number of
input lines

You must implement the following three functions to achieve this task.
● int rotateright (int ch)
This function rotates a specified alphabetic character one step to the right, and returns
the new character.
Non-alphabetic characters should be returned without change.
● int rotateleft(int ch)
This function performs the inverse of rotate_right().
● int encode(int ch, int shift)
This function performs the Caesar encryption for a single character by rotating the
specified number of times (shift).
The function should repeatedly call rotateright() or rotateleft() depending on whether
the shift is positive or negative. (If the shift is zero, the original character should be
returned.)

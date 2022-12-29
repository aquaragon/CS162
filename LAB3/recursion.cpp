//
//  recursion.cpp
//  Recursion
//
//  Created by jim bailey on 1/23/19.
//  This work by Jim Bailey is licensed under a Creative Commons Attribution 4.0 International License.
//

#include "recursion.h"
#include <iostream>

using namespace std;

bool isPalindrome(std::string word)
{
	return checkPalindrome(word, 0, word.length());
}
// this is your recursive palindrome program
// it might have different arguments, depending on how you solved the problem
bool checkPalindrome(std::string word,int start, int length)
{
	if (word[start] != word[length - 1])
		return false;

	if (start >= length)
		return true;

	return checkPalindrome(word, start + 1, length - 1);
}






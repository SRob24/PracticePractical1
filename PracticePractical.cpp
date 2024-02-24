// PracticePractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>
#include <string>
#include "Utility.cpp"

/* TODO: BEFORE YOU WRITE ANY CODE:
 * ====================================
 * Read through all of the TODOs. This will give you an overview
 * of how the program will be put together.
 *
 * Notes:
 * - The string, math, and iostreams headers have been included for you.
 * - The vector header HAS NO been provided for you. You will need to add it.
 * - Using the namespace std is optional, and not provided for you by default.
*/

// TODO: Write a method called FindAverage that takes an vector of doubles and returns a double

    // TODO: In the FindAverage method compute the average (the sum of all values divided by the number of values)
	//       of the values in the array parameter and return it.



int main()
{

    std::string greetings[] = {"Hello there!", "Welcome to the practice!", "Hi, user!",
                        "Hey, I am a program.", "You're running the best program ever!" };


    /* TODO: Display a random string from the Greetings array.
     * ========================================================
     * Notes:
     * - You may use the RandomInts() method within the provided Utility class.
     * - The correct usage is Utility::RandomInt(rangeLow, rangeHigh)
     *
     * For example:
     * - Utility::RandomInt(6,10);    will return a number between, and including, 6 and 10
     */


    std::cin.get();
    std::cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left

	/* TODO: Ask the user for a positive number and then print the square of that number.
	 * ===================================================================================
	 * Notes:
	 * - Make sure your program does not crash if the user enters bad input.
	 * - Make sure the user can keep entering input until they enter good input.
	 *
	 * References:
     * - https://www.geeksforgeeks.org/sqrt-sqrtl-sqrtf-cpp/
     * - https://cplusplus.com/reference/cmath/sqrt/
     * - https://www.geeksforgeeks.org/type-conversion-in-c/
	 */

    std::cin.get();
    std::cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left

     /* TODO: Create an vector of doubles. Use a random number (in the range of 3 to 6) for the size.
      * ==============================================================================================
      * For each element of the vector, ask the user to enter a value and store
      * it in the vector. The input does not have to be error checked.
      */


    // TODO: Call the FindAverage method (See above) passing in the vector of doubles and display the return value to the screen.
}

/* 	
Name: Spencer Owens
Class: F23 CS F301
Assignment: Final
Date Created: 2023-12-02
Date Updated: 2023-12-02
File Name: utility.hpp
File Function: 
*/

#ifndef FILE_UTILITY_HPP_INCLUDED
#define FILE_UTILITY_HPP_INCLUDED
//#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED

#include <iostream>
// For cin, cout, streamsize`
#include <limits>
// For numeric_limits
#include <fstream>

int getUserInput (std::string request, int range_a, int range_b, std::string choice_text);

// Function to pause console *Actually sucks*
void pauseConsole() {
  getUserInput("", 1, 1, "\nEnter 1 to continue: ");
}

// Function to get valid user input *Actually super annoying*
int getUserInput (std::string request, int range_a, int range_b, std::string choice_text) {
  int choice_t=-999;
  int error=0;
  while(true) {
    // Display menu, to allow user to select menu options, loop selection fail
    std::cout << request;
   
    // If invalid entry was detected
    if (error > 0) {
        std::cout << "\033[35mInvalid choice, please try again\033[0m\n";
        // Clear any error flags in cin
        std::cin.clear();
        // Consume any remaining input, including the newline character
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Display input text
    std::cout << choice_text;
    
    // Exit after multiple wrong input
    if (error == 3) {
      std::cout << "Too many invalid attempts.\n";
      std::cout << "Exiting application.\n\n";
      exit(0);
    }

    // Validate user input
    if (!(std::cin >> choice_t) || (choice_t < range_a || choice_t > range_b)) {
      error++;
      continue;
    }

    break;
  }
  return choice_t;
}

#endif // #ifndef FILE_UTILITY_HPP_INCLUDED
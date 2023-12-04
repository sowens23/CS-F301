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

void pauseConsole() {
  while (std::cin.get() != '\n') {}
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Please press 'Enter' to continue..." << std::flush;
  std::cin.get();
}

int getUserInput (std::string request, int range_a, int range_b, std::string choice_text) {
  int choice_t=-999;
  int error=0;
  while(true) {
    // Display menu, to allow user to select menu options, loop selection fail
    std::cout << request;
    if (error > 0) std::cout << "\033[35mInvalid choice, please try again\033[0m\n";
    std::cout << choice_text;
    std::cin >> choice_t;
    
    // Validate user input
    if (choice_t < range_a || choice_t > range_b) {
      error++;

      // Wrong input
      if (error == 3) {
        // Exit after multiple wrong input
        std::cout << "Too many invalid attempts.\n";
        std::cout << "Exiting application.\n\n";
        exit(0);
      }

      // Skip rest of the loop and reiterate
      continue;
    }

    break;
  }
  return choice_t;
}

#endif // #ifndef FILE_UTILITY_HPP_INCLUDED
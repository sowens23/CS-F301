/* 	
Name: Spencer Owens
Class: F23 CS F301
Date Created: 2023-10-11
Date Updated: 2023-11-12
File Name: calendar.cpp
File Function: 
*/

#include "drawcalendar.hpp"
#include "eventmanager.hpp"
#include "utility.hpp"

#include <iostream>
// For std::cin, std::cout, std::endl

void menu_Display(){
  // Clear the screen and move the cursor to the top-left corner
  std::cout << "\033[2J\033[1;1H";

  // Display Welcome Screen with options
  std::cout << "Welcome to the Calendar App!\n\n";

  // Using ANSI escape code for light red/magenta color
  std::cout << "\033[35m1.\033[0m View calendar\n";
  std::cout << "\033[35m2.\033[0m Manage events\n";
  std::cout << "\033[35m3.\033[0m \033[36mExit\033[0m\n\n";
  std::cout << "\033[0mPlease enter your choice: ";
}

void menu_Choice(int main_choice) {
  switch (main_choice) {
    case 1:
      // View Month Calender
      calendar_Main();
      break;
    case 2:
      // View this weeks event
      event_Main();
      break;
    case 3:
      // Exit
      std::cout << "Exiting application.\n";
      exit(0);
    default:
      std::cout << "Invalid choice. Please try again.\n";
  }
}

int main () {
  // Display menu, to allow user to select menu options
  int main_choice;
  EventTracker calendar_1;
  std::cout << calendar_1.hasEvents(20230312) << std::endl;
  while(true) {
    menu_Display();
    std::cin >> main_choice;
    menu_Choice(main_choice);
  }

  return 0;
}
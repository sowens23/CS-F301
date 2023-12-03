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
// For cin, cout, endl

void menu_Display(){
  // Clear the screen and move the cursor to the top-left corner
  cout << "\033[2J\033[1;1H";

  // Display Welcome Screen with options
  cout << "Welcome to the Calendar App!\n\n";

  // Using ANSI escape code for light red/magenta color
  cout << "\033[35m1.\033[0m View calendar\n";
  cout << "\033[35m2.\033[0m Manage events\n";
  cout << "\033[35m3.\033[0m \033[36mExit\033[0m\n\n";
  cout << "\033[0mPlease enter your choice: ";
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
      cout << "Exiting application.\n";
      exit(0);
    default:
      cout << "Invalid choice. Please try again.\n";
  }
}

int main () {
  // Display menu, to allow user to select menu options
  int main_choice;
  while(true) {
    menu_Display();
    cin >> main_choice;
    menu_Choice(main_choice);
  }

  return 0;
}
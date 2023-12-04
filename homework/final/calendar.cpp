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

std::string menu_Display(){
  std::string main_menu = "";
  // Clear the screen and move the cursor to the top-left corner
  main_menu += "\033[2J\033[1;1H";

  // Display Welcome Screen with options
  main_menu += "Welcome to the Calendar App!\n\n";

  // Using ANSI escape code for light red/magenta color
  main_menu += "\033[35m1.\033[0m View calendar\n";
  main_menu +="\033[35m2.\033[0m Manage events\n";
  main_menu += "\033[35m3.\033[0m \033[36mExit\033[0m\n\n";
  return main_menu;
}

EventTracker* assign_Tracker(EventTracker* calendar_t) {
  std::string assign_TrackerDisplay = ""; 
  int choice=0;
  // Clear the screen and move the cursor to the top-left corner
  assign_TrackerDisplay += "\033[2J\033[1;1H";

  // Menu selection for loading event tracker
  assign_TrackerDisplay += "\033[35mNo event tracker loaded.\033[0m\n\n";
  assign_TrackerDisplay += "\033[35m1.\033[0m Create a new Event Tracker\n";
  assign_TrackerDisplay += "\033[35m2.\033[0m Upload an existing Event Tracker\n\n";

  // Handle menu choice
  choice = getUserInput(assign_TrackerDisplay, 1, 3, "Enter tracker option: ");

  // Initialize new EventTracker
  if (choice == 1) calendar_t = new EventTracker();

  // Select EventTracker file locally
  if (choice == 2) {
    // std::string filename;
    // std::cout << "Enter filename to load: ";
    // std::cin >> filename;
    // calendar_t->loadEventTracker(calendar_t, filename);
    calendar_t = new EventTracker();
  } 
  
  return calendar_t;
}

// Main, this is for initially loading EventTracker, 
// drawing calendars and managing events
int main () {
  int main_choice=0;
  int error=0;
  EventTracker* calendar_1 = nullptr;

  while(true) {
    // // If Event Tracker is null, set tracker
    if (calendar_1 == nullptr) calendar_1 = assign_Tracker(calendar_1);

    // Handle menu choice
    main_choice = getUserInput(menu_Display(), 1, 3, "Choose menu option: ");
    if (main_choice == 3) { 
      // Exit application 
      break;

    } else {
      // View Month Calender
      if (main_choice == 1) calendar_1 = calendar_Main(calendar_1);

      // View this weeks event
      if (main_choice == 2) calendar_1 = event_Main(calendar_1);
    }
  }

  // Clean exit application 
  std::cout << "Exiting application.\n\n";
  return 0;
}
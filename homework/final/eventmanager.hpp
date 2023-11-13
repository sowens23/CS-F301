/* 	
Name: Spencer Owens
Class: F23 CS F301
Assignment: Final
Date Created: 2023-11-12
Date Updated: 2023-11-12
File Name: eventmanager.hpp
File Function: 
*/

#ifndef FILE_EVENTMANAGER_HPP_INCLUDED
#define FILE_EVENTMANAGER_HPP_INCLUDED
//#endif // #ifndef FILE_EVENTMANAGER_HPP_INCLUDED

#include <iostream>
// For std::cin, std::cout
using std::cout; using std::cin;

struct Event {
  std::string name;
  std::string time;
  std::string location;

  Event(const std::string& n, const std::string & t, const std::string & l)
    : name(n), time(t), location(l) {}
};

void event_Choice(int event_choice) {
  // Displaying events of a given time fram
  switch(event_choice) {
    // Display today's event
    case 1:
      cout << "Display today's events\n";
      break;
    // Display this weeks events
    case 2:
      cout << "Display this week's events\n";
      break;
    // Display this months events
    case 3:
      cout << "Display this month's events\n";
      break;
    // Display specific date events
    case 4:
      cout << "Display this a day's events\n";
      break;
    // Display all events
    case 5:
      cout << "Display this all events\n";
      break;
    default:
      break;
  }

  // Pause before returning to menu
  cout << "\n";
  pauseConsole();
}

void event_Display() {
  // Clear the screen and move the cursor to the top-left corner
  cout << "\033[2J\033[1;1H";

  // Enter event_manager
  cout << "Welcome to the Event manager!\n\n";
  cout << "\033[35m1.\033[0m View events of today.\n";
  cout << "\033[35m2.\033[0m View events of this week.\n";
  cout << "\033[35m3.\033[0m View events of this month.\n";
  cout << "\033[35m4.\033[0m View events of specific date.\n";
  cout << "\033[35m5.\033[0m View *all* events.\n";
  cout << "\033[35m6.\033[0m \033[36mReturn\033[0m to main menu.\n";
  cout << "\n";
  cout << "Please enter your choice: ";
}

void event_Main() {
  int event_choice;
  while(true) {
    event_Display();
    cin >> event_choice;
    event_Choice(event_choice);
  }
}

#endif // #ifndef FILE_EVENTMANAGER_HPP_INCLUDED
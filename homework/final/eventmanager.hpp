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

#include <iostream>
using std::cout; 
using std::cin;
#include "drawcalendar.hpp"

struct Event {
  std::string name;
  std::string time;
  std::string location;

  Event(const std::string& n, const std::string & t, const std::string & l)
    : name(n), time(t), location(l) {}
};

void event_Choice(int event_choice) {
  // Clear screen 
  cout << "\033[2J\033[1;1H";

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
}

void event_Display() {
  // Clear the screen
  cout << "\033[2J\033[1;1H";

  // Draw Event manager menu
  cout << "Welcome to the Event manager!\n\n";
  cout << "\033[35m1.\033[0m View events.\n";
  cout << "\033[35m2.\033[0m Add events.\n";
  cout << "\033[35m3.\033[0m Remove events.\n";
  cout << "\033[35m4.\033[0m Import events.\n";
  cout << "\033[35m5.\033[0m Export events.\n";
  cout << "\033[35m5.\033[0m \033[36mExit\033[0m\n\n";
  cout << "Please enter your choice: ";
}

void event_Main() {
  int event_choice;
  while(event_choice != 6) {
    event_Display();
    cin >> event_choice;
    event_Choice(event_choice);
  }
}

#endif // #ifndef FILE_EVENTMANAGER_HPP_INCLUDED
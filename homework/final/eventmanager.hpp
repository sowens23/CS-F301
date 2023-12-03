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

#include "drawcalendar.hpp"

#include <iostream>
#include <vector>


struct Event {
  std::string name;
  std::string time;
  std::string location;

  Event(const std::string& n, const std::string & t, const std::string & l)
    : name(n), time(t), location(l) {}
};

struct EventTracker {
  // Initialize Event Tracker bucket
  std::map<int, std::vector<Event>> eventMap;

  // Add Event
  void addEvent(const int& date, const Event& event) {
    eventMap[date].push_back(event);
  }

  // Check for event
  bool hasEvents(const int& date) {
    return eventMap.find(date) != eventMap.end() && !eventMap[date].empty();
  }

};

void event_Draw(int event_choice) {
  // Clear screen 
  std::cout << "\033[2J\033[1;1H";

  // Display today's event
  if (event_choice == 1) {
    std::cout << "View events\n";
  }
  // Display this weeks events
  if (event_choice == 2) {
    std::cout << "Add events\n";
  }
  // Display this months events
  if (event_choice == 3) {
    std::cout << "Remove events\n";
  }
  // Display specific date events
  if (event_choice == 4) {
    std::cout << "Import events\n";
  }
  // Display all events
  if (event_choice == 5) {
    std::cout << "Export events\n";
  }

  // Pause before returning to menu
  std::cout << "\n";
  pauseConsole();
}

void event_Display() {
  // Clear the screen
  std::cout << "\033[2J\033[1;1H";

  // Draw Event manager menu
  std::cout << "Welcome to the Event manager!\n\n";
  std::cout << "\033[35m1.\033[0m View events.\n";
  std::cout << "\033[35m2.\033[0m Add events.\n";
  std::cout << "\033[35m3.\033[0m Remove events.\n";
  std::cout << "\033[35m4.\033[0m Import events.\n";
  std::cout << "\033[35m5.\033[0m Export events.\n";
  std::cout << "\033[35m6.\033[0m \033[36mExit\033[0m\n\n";
  std::cout << "Please enter your choice: ";
}

void event_Main() {
  int event_choice=0;
  while(event_choice != 6) {
    event_Display();
    std::cin >> event_choice;
    if (event_choice != 6) event_Draw(event_choice);
  }
}

#endif // #ifndef FILE_EVENTMANAGER_HPP_INCLUDED
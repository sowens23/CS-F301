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
#include <string>
#include <vector>
#include <chrono>
#include <map>


struct Event {
  std::string name;
  std::string time;
  std::string location;

  Event(const std::string& n, const std::string & t, const std::string & l)
    : name(n), time(t), location(l) {}
};

class EventTracker {
// Big 5
public:
    // Default Constructor
    EventTracker() = default;
    // Copy constructor
    EventTracker(const EventTracker& other) : eventMap(other.eventMap) {}
    // Copy assignment operator
    EventTracker& operator=(const EventTracker& other) {
      if (this != &other) {
        eventMap = other.eventMap;
      }
      return *this;
    }
    // Move constructor
    EventTracker(EventTracker&& other) noexcept : eventMap(std::move(other.eventMap)) {}
    // Move assignment operator
    EventTracker& operator=(EventTracker&& other) noexcept {
      if (this != &other) {
        eventMap = std::move(other.eventMap);
      }
      return *this;
    }
    // Destructor
    ~EventTracker() = default;

// Class functions
public:
  // View Event
  void viewEvent(const int& date) {
    if (hasEvent(date)) {
        std::cout << std::endl << "Events found on " << date << "." << std::endl;
        for (const auto& event : eventMap.at(date)) {
            std::cout << "Name: " << event.name << ", "
                      << "Time: " << event.time << ", "
                      << "Location: " << event.location << "" << std::endl;
        }
    } else {
        std::cout << "No events found for " << date << "." << std::endl;
    }
  }

  // Add Event
  void addEvent(const int& date) {
    std::string name;
    std::string time;
    std::string location;

    // Get Event Info
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter event name: ";
    std::getline(std::cin, name);
    std::cout << "Enter event time: ";
    std::getline(std::cin, time);
    std::cout << "Enter event location: ";
    std::getline(std::cin, location);

    // Create event
    Event event_t(name, time, location);
    eventMap[date].push_back(event_t);
  }

  // Check for event
  bool hasEvent(const int& date) {
    return eventMap.find(date) != eventMap.end() && !eventMap[date].empty();
  }

  // Load local event tracker
  void loadEventTracker(EventTracker* calendar_t, std::string filename_t) {
    // What to do

      std::cout << "Failed to load Event Tracker." << std::endl;
      delete calendar_t;
      calendar_t = nullptr;
  }

private:
  std::map<int, std::vector<Event>> eventMap;
};

EventTracker* event_Draw(int event_choice, EventTracker* calendar_t) {
  int manage_date=0;
  std::string event_text="";
  // Clear screen 
  std::cout << "\033[2J\033[1;1H";

  // Display today's event
  if (event_choice == 1) {
    std::cout << "Event Manager: View events" << std::endl << std::endl;
    manage_date = getUserInput(event_text, 19950101, 20501231, "Enter date (YYYYMMDD): ");
    calendar_t->viewEvent(manage_date);
    std::cout << std::endl << "Event viewed" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    pauseConsole();
  }
  // Add an event
  else if (event_choice == 2) {
    std::cout << "Event Manager: Add an event" << std::endl << std::endl;
    manage_date = getUserInput(event_text, 19950101, 20501231, "Enter date (YYYYMMDD): ");
    calendar_t->addEvent(manage_date);
    std::cout << std::endl << "Event added" << std::endl;
    pauseConsole();
  }
  // Remove an event
  else if (event_choice == 3) {
    std::cout << "Remove event" << std::endl;
    std::cout << std::endl; pauseConsole();
  }
  // Import events
  else if (event_choice == 4) {
    std::cout << "Import events" << std::endl;
    std::cout << std::endl; pauseConsole();
  }
  // Export events
  else if (event_choice == 5) {
    std::cout << "Export events" << std::endl;
    std::cout << std::endl; pauseConsole();
  }

  return calendar_t;
}

std::string event_DisplayMenu() {
  std::string event_menu="";
  // Clear the screen
  event_menu += "\033[2J\033[1;1H";

  // Draw Event manager menu
  event_menu += "Welcome to the Event manager!\n\n";
  event_menu += "\033[35m1.\033[0m View events.\n";
  event_menu += "\033[35m2.\033[0m Add events.\n";
  event_menu += "\033[35m3.\033[0m Remove events.\n";
  event_menu += "\033[35m4.\033[0m Import events.\n";
  event_menu += "\033[35m5.\033[0m Export events.\n";
  event_menu += "\033[35m6.\033[0m \033[36mExit\033[0m\n\n";
  return event_menu;
}

EventTracker* event_Main(EventTracker* calendar_t) {
  int event_choice=0;
  int error=0;

  while(true) {
    // Display menu, to allow user to select menu options, loop selection fail
    event_choice = getUserInput(event_DisplayMenu(), 1, 6, "Choose menu option: ");

    // Handle menu choice
    if (event_choice == 6) { 
      // Exit application 
      break;
    } else {
      // Enter menu selection
      calendar_t = event_Draw(event_choice, calendar_t);
    }
  }

  // Return to main
  return calendar_t;
}

#endif // #ifndef FILE_EVENTMANAGER_HPP_INCLUDED
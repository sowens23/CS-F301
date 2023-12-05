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
#include <algorithm>
#include <fstream>

// Event struct for EventTracker map data member
struct Event {
  std::string name;
  std::string time;
  std::string location;

  Event(const std::string& n, const std::string & t, const std::string & l)
    : name(n), time(t), location(l) {}
};

// EventTracker class
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
  // Check for event
  bool hasEvent(const int& date) {
    return eventMap.find(date) != eventMap.end() && !eventMap[date].empty();
  }

  // View Event
  void viewEvent(const int& date) {
    if (hasEvent(date)) {
        std::cout << std::endl << "Events found on " << date << "." << std::endl;
        for (const auto& event : eventMap.at(date)) {
            std::cout << "Name: " << event.name << ", "
                      << "Time: " << event.time << ", "
                      << "Location: " << event.location << "" << std::endl;

        }
        std::cout << "\nEvent(s) viewed.";
    } else {
        std::cout << "No events found for " << date << ".";
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
    std::cout << "\nEvent added.";
  }

  // Remove Event
  void removeEvent (const int& date) {
    // Iterate through events of that date to find the specified event name
    auto dateEntry = eventMap.find(date);

    if (dateEntry != eventMap.end()) {
      // Events for date found, print events
      viewEvent(date);
      std::string name_t="";

      // Get event name
      std::cout << "\nWhat is the event name: ";
        // Clear any error flags in cin
        std::cin.clear();
        // Consume any remaining input, including the newline character
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, name_t);

      // Look for event with specific name
      auto& events = dateEntry->second;
      auto eventToRemove = std::remove_if(events.begin(), events.end(),
        [&name_t](const Event& event) {
          return event.name == name_t;
        });
      
      //
      if (eventToRemove != events.end()) {
        events.erase(eventToRemove, events.end());
        std::cout << "Event found and removed.\n";
      } else {
        std::cout << "Event with name '" << name_t << "' not found.\n";
      }
    } else {
      std::cout << "No events found for specified date.\n";
    }
  }

  // Import Events
  void importEvents() {
    // Update me!
  }

  // Export Events
  void exportEvents() {
    // Set filename
    std::string filename="";
    std::cout << "What would you like to name the file: ";
    // Clear any error flags in cin
    std::cin.clear();
    // Consume any remaining input, including the newline character
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // Read user input
    std::getline(std::cin, filename);

    // Attempt to open file
    std::ofstream outputFile(filename);

    // If file is not found/opened
    if (!outputFile.is_open()) {
      std::cout << "Failed to open/find filename.";
      return;
    } 

    // If file is found
    for (const auto& entry: eventMap) {
      const int& date = entry.first;
      const std::vector<Event>& events = entry.second;

      // Write to file
      for (const Event& event: events) {
        outputFile << date << ": " << event.name << ", " << event.time <<  ", " << event.location << ".\n";
      }
    }

    // Finished writing, close file.
    outputFile.close();
    std::cout << "File succesfully exported.\n";
  }

private:
  std::map<int, std::vector<Event>> eventMap;
};

// Draw Event Lists
EventTracker* event_Draw(int event_choice, EventTracker* calendar_t) {
  int manage_date=0;
  std::string event_text="";
  // Clear screen 
  std::cout << "\033[2J\033[1;1H";

  // Display today's event
  if (event_choice == 1) {
    std::cout << "Event Manager: View events\n\n";
    manage_date = getUserInput(event_text, 19950101, 20501231, "Enter date (YYYYMMDD): ");
    calendar_t->viewEvent(manage_date);
    pauseConsole();
  }
  // Add an event
  else if (event_choice == 2) {
    std::cout << "Event Manager: Add an event\n\n";
    manage_date = getUserInput(event_text, 19950101, 20501231, "Enter date (YYYYMMDD): ");
    calendar_t->addEvent(manage_date);
    pauseConsole();
  }
  // Remove an event
  else if (event_choice == 3) {
    std::cout << "Event Manager: Remove event\n\n";
    manage_date = getUserInput(event_text, 19950101, 20501231, "Enter date (YYYYMMDD): ");
    calendar_t->removeEvent(manage_date);
    pauseConsole();
  }
  // Import events
  else if (event_choice == 4) {
    std::cout << "Event Manager: Import events\n\n";
    calendar_t->importEvents();
    pauseConsole();
  }
  // Export events
  else if (event_choice == 5) {
    std::cout << "Event Manager: Export events\n\n";
    calendar_t->exportEvents();
    pauseConsole();
  }

  return calendar_t;
}

// Build Event Menu
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

// Display Event Menu
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
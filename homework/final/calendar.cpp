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

#include <iostream>
// For std::cin, std::cout
using std::cout; using std::cin;
#include <chrono>
// For std::time_t, std::tm, std::local_time, std::chrono
#include <iomanip>
#include <ctime>
#include <map>
// For std::map
#include <string>
// For std::string

//void display_menu(); void select_Choice(int choice_t); void view_Monthcalendar(); void view_Weekcalendar(); void view_Daycalendar(); void event_Manager(); void drawCalendar(int calendar_type);

void pauseConsole() {
  cout << "Please press 'Enter' to continue...";
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin.get();
}

void menu_Display(){
  // Clear the screen and move the cursor to the top-left corner
  cout << "\033[2J\033[1;1H";

  // Display Welcome Screen with options
  cout << "Welcome to the Calendar App!\n\n";

  // Using ANSI escape code for light red/magenta color
  cout << "\033[35m1.\033[0m View this month's calendar\n";
  cout << "\033[35m2.\033[0m View this week's events\n";
  cout << "\033[35m3.\033[0m View specific events of a day\n";
  cout << "\033[35m4.\033[0m View today's events\n";
  cout << "\033[35m5.\033[0m Manage events\n";
  cout << "\033[35m6.\033[0m \033[36mExit\033[0m\n\n";
  cout << "\033[0mPlease enter your choice: ";
}

void menu_Choice(int main_choice) {
  switch (main_choice) {
    case 1:
      // View Month Calender
      calendar_Draw(main_choice);
      break;
    case 2:
      // View this weeks event
      calendar_Draw(main_choice);
      break;
    case 3:
      // View Specific Day Calender
      calendar_Draw(main_choice);
      break;
    case 4:
      // View today's day Calender
      calendar_Draw(main_choice);
      break;
    case 5:
      // Add Event
      event_Main();
      break;
    case 6:
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
  while(true) {
    menu_Display();
    cin >> main_choice;
    menu_Choice(main_choice);
  }

  return 0;
}
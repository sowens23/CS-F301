/* 	
Name: Spencer Owens
Class: F23 CS F301
Assignment: Final
Date Created: 2023-11-12
Date Updated: 2023-11-12
File Name: drawcalendar.hpp
File Function: 
*/

#ifndef FILE_DRAWCALENDAR_HPP_INCLUDED
#define FILE_DRAWCALENDAR_HPP_INCLUDED
//#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED

#include "utility.hpp"
#include "eventmanager.hpp"

#include <iostream>
// For std::cout, std::cin, std::endl
#include <chrono>
// For std::time_t, std::local_time, std::chrono::system_clock, std::tm
#include <iomanip>
// For std::setw, std::put_time
#include <map>
// For std::map

EventTracker* calendar_Draw(int calendar_choice, EventTracker* calendar_t) {
  // Set todays date
    auto now = std::chrono::system_clock::now();
    time_t t_now = std::chrono::system_clock::to_time_t(now);
    std::tm tm_now = *std::localtime(&t_now);
    int year = tm_now.tm_year + 1900; // tm_year is years since 1900
    int month = tm_now.tm_mon + 1; // tm_mon is months since January (0-11)

  // Find what day of the week the first day of the month is
    int current_day = tm_now.tm_mday; // Days since sunday (0-6)
    tm_now.tm_mday = 1; // Set to first day of the month
    mktime(&tm_now); // Normalize the tm structure
    int first_weekday = tm_now.tm_wday; // Days since sunday (0-6)

  // Determine days in month
    int days_in_month = 31;
    switch (month) {
      case 4: case 6: case 9: case 11:
        days_in_month = 30;
        break;
      case 2:
        days_in_month = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    }
    int day = 1 - first_weekday;

  // Clear Screen
  std::cout << "\033[2J\033[1;1H"; 

  // Print Monthly Calendar
  if (calendar_choice == 1) {
    std::cout << "\033[36m" << std::setw(3)<< "  " << std::put_time(&tm_now, " %B %Y") << "\033[0m" << std::endl;
    std::cout << " Mo Tu We Th Fr Sa Su" << std::endl;
    for (int week = 0; week < 6; ++week) {
      for (int weekday = 0; weekday < 7; ++weekday, ++day) {
        if (day > 0 && day <= days_in_month) {
          if (day == current_day) std::cout << "\033[35m"; // Highlight today on calendar
          std::cout << std::setw(3)  << day;
          if (day == current_day) std::cout << "\033[0m"; // Reset highlight
        } else {
          std::cout << "   ";
        }
      }
      std::cout << "\n";
      if (day > days_in_month) break;
    }
    pauseConsole();
  }

  // Draw the weeks calendar
  if (calendar_choice == 2) {
    std::cout << "Drawing this week's calendar\n";
    pauseConsole();
  }


  // Draw a day's calendar
  if (calendar_choice == 3) {
    std::cout << "Drawing today's calendar\n";
    pauseConsole();
  }

  // Draw today's calendar
  if (calendar_choice == 4) {
    std::cout << "Drawing today's calendar\n";
    pauseConsole();
  }

  // Return calendar
  return calendar_t;
}

std::string calendar_DisplayMenu() {
  std::string display_menu="";
  // Clear screen 
  display_menu += "\033[2J\033[1;1H";

  // Draw calendar menu
  display_menu += "Welcome to the Calendar Viewer!\n\n";
  display_menu += "\033[35m1.\033[0m View month calendar\n";
  display_menu += "\033[35m2.\033[0m View week calendar\n";
  display_menu += "\033[35m3.\033[0m View a specific day calendar\n";
  display_menu += "\033[35m4.\033[0m View todays calendar\n";
  display_menu += "\033[35m5.\033[0m \033[36mExit\033[0m\n\n";
  return display_menu;
}

EventTracker* calendar_Main(EventTracker* calendar_t) {
  int calendar_choice=0;
  int error=0;

  while(true) {
    // Display menu, to allow user to select menu options, loop selection fail
    calendar_choice = getUserInput(calendar_DisplayMenu(), 1, 5, "Enter menu option: ");

    // Handle menu choice
    if (calendar_choice == 5) { 
      // Exit application 
      return calendar_t;
    } else {
      // Enter menu selection
      calendar_t = calendar_Draw(calendar_choice, calendar_t);
    }
  }

  // Return to main
  return calendar_t;
}

#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED
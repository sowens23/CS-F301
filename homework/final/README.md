# CS-F301 Final Project: Technical Writeup
### Project Title: Calendar/Event Application

## Introduction
- The Calendar Application is a versatile tool designed to manage events and display calendars. In this blog post, we will delve into the various aspects of this project, including its key features, architecture, division of labor, and more.

## Points of Interest

### Feature-Rich Event Management
- The application allows users to manage events efficiently. Users can view, add, and remove events for specific dates, making it a handy tool for organizing schedules.

### Calendar Visualization
- The application provides clear and visually appealing calendar displays, including monthly, weekly, and daily views. Users can easily navigate and view events within these calendars.

### User-Friendly Interface
- With a clean and intuitive user interface, the Calendar Application ensures a seamless user experience. It uses ANSI escape codes for color highlighting, enhancing readability and aesthetics.

### Modular Code Structure
- The project adopts a modular approach, with functionality divided into separate header files. This allows for easy maintenance, readability, and collaboration among developers.

## Project Description

### Architecture

The Calendar Application follows a multi-header file architecture, separating distinct functionalities into different modules:

#### 1. `calendar.cpp`
- This file serves as the main entry point of the application. It handles the initialization of the Event Tracker, displays menus, and directs user interactions.
#### 2. `utility.hpp`
- The utility header file contains common utility functions, including `pauseConsole()` for pausing the console and `getUserInput()` for retrieving user inputs with error handling.
#### 3. `drawcalendar.hpp`
- This module is responsible for drawing and displaying calendars. It offers features like viewing monthly, weekly, and daily calendars and handles calendar-related user interactions.
#### 4. `eventmanager.hpp`
- The event manager module deals with event-related operations. It defines the `Event` struct and the `EventTracker` class for managing events, including viewing, adding, and removing events. Using a map of int and vector pairs to create a bucket to contain a multitude of user defined events.

## Conclusion

- The Calendar Application project showcases effective collaboration and modular design principles. Its user-friendly interface and versatile event management make it a valuable tool for personal and professional scheduling. The division of labor ensured efficient development and allowed each team member to specialize in specific areas of expertise.

- For more details on the code and how to use the Calendar Application, please refer to the project repository on GitHub.

- Thank you for reading this blog post, and we hope you find the Calendar Application useful for your scheduling needs!

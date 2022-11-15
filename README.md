# Doxygen Testing

# Business Corp Employee Management System
Name: Vance Brender-A-Brandis
Date: 11.15.2022

## Required Files
* Employee.h
  - The headerfile for the Employee superclass, which all other files require to work.
* Employee.cpp
  - The implementation of the Employee superclass, which all other files require to work.
* Supervisor.h
  - The headerfile for the Supervisor child class - It is derived from the Employee superclass.
* Supervisor.cpp
  - The implmentation of the Supervisor child class. 
* Officer.h
  - The headerfile for the Officer child class - It is derived from the Employee superclass.
* Officer.cpp
  - The implementation of the Officer child class.
* HR.h
  - The headerfile for the HR (human relations) child class. It is derived from the Employee superclass.
* HR.cpp
  - The implementation of the HR child class.
* main.cpp
  - The main program file, which uses all files listed above to perform a series of tests to ensure the class files and implementation works correctly.

## Notes
Any extra notes, such as:
* What is working?
  - All of the *class files*, *main.cpp*, and *Makefile* included with the program work as intended.
* What are the limitations of your program?
  - As all of the tests have been hardcoded into the program, a user cannot insert their own Employee ID, hourly rates, etc. etc.
  - Essentially, there is no user functionality within the program.
* What design decisions did you make?
  - As dictated by the assignment, I created a superclass in the form of the Employee and a few derived classes in the form of the Supervisor, Officer, and HR classes.
  - I also included a couple hardcoded tests for the extra credit HR subclass following the format of the provided tests.
  - Besides the requirements of the assignment, I created another child class intended to display the attributes of Human Resources (from the viewpoint of someone who has never worked in a business). 
* Is there anything you wish to draw our attention to? (cool trick, extra credit, strange logic, problem area, etc)
  - Extra credit in the form of the HR derived class and its implementation within main.cpp and the HR.h/.cpp has been attempted.


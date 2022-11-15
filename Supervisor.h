/**
 * @file Supervisor.h
 * @author Vance Brenderabrandis
 * @date 2022-11-15
 * @brief Holds the definition of the Supervisor derived class
 * 
 * Defines Supervisor derived class methods/members
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Supervisor class, derived from the Employee superclass
 *
 * @class Supervisor Supervisor.h "Doxygen-Assignment/Supervisor.h"
 * @brief Supervisor class definition
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints info related to Supervisor
 *
 * @pre Object of Supervisor class has been created
 * @return void Nothing - Prints out basic Employee info and number of people supervised
 * 
 */
  void print();

/**
 * Calculates total pay of Supervisor
 *
 * @return double Pay of the Supervisor
 * 
 */
  double calculatePay();

/**
 * Constructor for objects of the Supervisor derived class
 *
 * @post Object of Supervisor subclass has been created
 * 
 */
  Supervisor();

/**
 * Parameterized constructor for Supervisor subclass
 *
 * @param int ID Supervisor ID
 * @param int years Years worked
 * @param double hourlyRate Hourly rate of the Supervisor
 * @param float hoursWorked Hours the Supervisor has worked
 * @param int numSupervised Number of people the Supervisor supervised
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H

/**
 * @file Officer.h
 * @author Vance Brenderabrandis
 * @date 2022-11-15
 * @brief Header file of Officer derived class
 * 
 * The definition of the Officer derived class' methods/members
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Officer subclass derived from the Employee superclass
 *
 * @class Officer Officer.h "Doxygen-Assignment/Officer.h"
 * @brief The Officer subclass, derived from the Employee superclass
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * The Officer class version of the print function, which makes use of the Employee virtual print function
 *
 * @return void Nothing - Prints all relevant information pertaining to the Officer subclass
 * 
 */
  void print();

/**
 * Calculates the pay of an Officer
 *
 * @return double Returns the calculated pay of an Officer
 * 
 */
  double calculatePay();

/**
 * Constructor for the Officer subclass
 *
 * 
 */
  Officer();

/**
 * Parameterized constructor for the Officer subclass
 *
 * @param int ID ID of the Officer / Employee
 * @param int years How many years the Officer has worked
 * @param double hourlyRate Hourly rate of the Officer
 * @param float hoursWorked How many hours the Officer has worked
 * @param double evilness The projected evilness of the Officer
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H

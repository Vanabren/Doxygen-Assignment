/**
 * @file Employee.h
 * @author Vance Brenderabrandis
 * @date 2022-11-15
 * @brief The header file for the Employee class which other subclasses are derived from
 * 
 * Defines the Employee superclass and its members / methods
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * The superclass from which the other subclasses within the file are derived from.
 *
 * @class Employee Employee.h "Doxygen-Assignment/Employee.h"
 * @brief Holds the main methods and members of the Employee superclass
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Virtual printing function for the base info of an employee : ID, years worked, hourly rate, hours worked
 *
 * @return Nothing - prints info on employees
 * 
 */
  virtual void print();

/**
 * Calculates total pay from hours worked and hourly rate
 *
 * @return virtual Returns total pay of an employee from the hourly rate and hours worked
 * 
 */
  virtual double calculatePay();

/**
 * Increments a pay raise (.2%) and increments a year worked before printing a congratulatory message
 *
 * @return Nothing - Prints out congratulatory message
 * 
 */
  void anniversary();

/**
 * Constructor for the Employee superclass - initializes everything to -1
 *
 * @post New Employee object is created with values initialized to -1
 * 
 */
  Employee();

/**
 * Parameterized constructor for the Employee superclass - Initializes to user-values
 *
 * @param int ID ID of employee
 * @param int years Years the Employee has worked
 * @param double hourlyRate Hourly pay for the Employee
 * @param float hoursWorked Hours the Employee has worked
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H

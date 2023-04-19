#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
  private:
    double value;
  
  public:
    // Constructor
    Calculator() {
      value = 0;
    }
    
    // Getter
    double getValue() {
      return value;
    }
    
    // Setter
    void setValue(double v) {
      value = v;
    }
    
    // Add
    void add(double v) {
      value += v;
    }
    
    // Subtract
    void subtract(double v) {
      value -= v;
    }
    
    // Multiply
    void multiply(double v) {
      value *= v;
    }
    
    // Divide
    void divide(double v) {
      if (v == 0) {
        cout << "Error: Division by zero." << endl;
      } else {
        value /= v;
      }
    }
    
    // Square root
    void squareRoot() {
      if (value < 0) {
        cout << "Error: Cannot take square root of negative number." << endl;
      } else {
        value = sqrt(value);
      }
    }
    
    // Power
    void power(double v) {
      value = pow(value, v);
    }
    
    // Clear
    void clear() {
      value = 0;
    }
};

int main() {
  // Create a calculator object
  Calculator calc;
  
  // Perform some operations
  calc.add(5);
  calc.multiply(2);
  calc.power(3);
  
  // Display the result
  cout << "Result: " << calc.getValue() << endl;
  
  return 0;
}

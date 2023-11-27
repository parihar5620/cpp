#include <iostream>
using namespace std;

int main() {

  // Get the height from the user
  float height;
  cout << "Enter the height of the rectangle: ";
  cin >> height;

  // Calculate the area and perimeter of the rectangle
  float area = height * height;
  float perimeter = 2 * height;

  // Print the area and perimeter of the rectangle
  cout << "The area of the rectangle is " << area << endl;
  cout << "The perimeter of the rectangle is " << perimeter << endl;

  return 0;
}
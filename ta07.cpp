#include <iostream>
using namespace std;

// Core requirements
float getValueFromPointer(float* speed)
{
   return *speed;
}

float* getMinValue(float* a, float* b);

// Stretch goals
void swapElements(float* theArray[], int a, int b);
void sortArray(float* theArray[]);

int main()
{  
    // Core Requirement 1
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;

   // Allocate your array(s) here

   float * speed = NULL;

   speed = new float[arraySize];
   
   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
          cout << "Enter a float value: ";
          cin >> speed[i];
   }

   // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(&speed[i]);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   

   /* // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(????, ????);
   cout << ?????
   */

   // Clean up your array(s) here
   delete [] speed;
   speed = NULL;
   return 0;
}


#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

/////////////////////// Funcitons ////////////////
void printArray(const int list[], int listSize);
int score(const char list[][5], int row);

int main() {

  int student;
  int grades[5];
  
  // creat array with the answeres
  char student_answers[6][5] = { {'T','F','T','T','T'},
                              {'T','T','T','T','T'},
                              {'T','T','F','F','T'},
                              {'F','T','F','F','F'},
                              {'F','F','F','F','F'},
                              {'T','T','F','T','F'} };
  
  // make function to coutn correct answers and output the number
  for (student = 0; student < 5; student++){
    grades[student] = score(student_answers, student);
  }
    
  

    
  // make function to put that into array 
  // display array
  
  
  }

/* This function coutns the number of currect answers in a given row*/
int score(const char list[][5], int row){

  int correct = 0;
  int score = 0;
  
  if (list[row][0] == 'T')
    correct = correct + 1;
  if (list[row][1] == 'T')
    correct = correct + 1;
  if (list[row][2] == 'F')
    correct = correct + 1;
  if (list[row][3] == 'F')
    correct = correct + 1;
  if (list[row][4] == 'T')
    correct = correct + 1;

  score = correct * 5;
  return score;
}


/* This function prints the elements of an integer array as a single row.
  Parameters: list[] is the array
              listSize is the size of the array */
void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << "    ";

  cout << endl;
  return;
}
#include "Student.hpp" // Includes the Student class definition so we can create Student objects and use its methods.
// The .hpp file defines what a Student is, while the main file defines what the program does with the Student objects
// For example, main says here is the data, and the class says I'll decide how to store it... This prevents accidental data corruption
/*******************************************************************************
 * Function prototypes
*******************************************************************************/

void getInput(Student[], const int);
int modify(int);
void display(const Student[], const int);

/*******************************************************************************
 * Description:
 * Starting point of the program. Creates an array of `Student` objects.
 * 
 * Input:
 * N/A
 *
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() { // Program executions starts in the main
    // variables
    const int SIZE = 5; // SIZE is a constant integer of 5 
    Student objArray[SIZE]; // Creates an array of 5 Student objects (constructor runs for each object)

    // get input from the user
    getInput(objArray, SIZE); // Calling getInput function fills each Student object with a name and age. 

    // modify the ages for certain students
    // uses a range-based for loop with a reference variable
    for (Student& s : objArray) { // Loop through each Student in objArray by referrence (so changes will affect the real objects)
        s.setAge(modify(s.getAge())); // Gets the students age, modifies it if necessary, then sets the updated age back into the object
    }

    // display the modified information back to the user
    display(objArray, SIZE); // The display func prints all Student info after that ages have been modified

    // terminate
    return 0;
}

/*******************************************************************************
 * Description:
 * Uses a `for` loop to prompt the user for the name/age of each student. Store
 * the information in the appropriate object.
 * 
 * Input:
 * objArray - an array of `Student` objects
 * SIZE     - a constant integer that represents the size of the array
 *
 * Output:
 * N/A
*******************************************************************************/
// getInput fills the student array with the User's Input 
// SIZE is constant so that cannot be changed 
void getInput(Student objArray[], const int SIZE) {
    // temporary variables
    int    t = 0; // is a temporary integer to hold the age input before storing it in an object.
    string s = ""; // temporary string to hold the name input before storing it in an object. 

    // The for loop runs for each student until it reaches the value of SIZE wich is 5 
    for (int i = 0; i < SIZE; i++) { // 
        // prompt and store the name of the current student
        cout << "Enter the name for student #" << i + 1 << ": "; // Prompts user; i+1 makes the program print student #'s starting at 1 
        getline(cin, s); // getline reads the full name including space and stores it into the temporary string s.

        // prompt and store for the age of the current student
        cout << "Enter the age for student #" << i + 1 << ": "; 
        cin >> t; // cin reads the age into the temporary integer t

        // need to ignore the newline for the next iteration
        cin.ignore(); // Clears leftover newline so the next getline doesn't get skipped. 

        // store the data from the user into the current object in the array
        objArray[i].setName(s); // Calls the Student setter to store the name into the object at index i
        objArray[i].setAge(t); // Calls the Student setter to store the age into the object at index i
    }
}

/*******************************************************************************
 * Description:
 * Modifies the age for students below 18 or above 50. Students younger than 18
 * should have their age bumped up to 18. Students older than 50 should have
 * their age bumped down to 50. Students that do not meet the criteria do not
 * have their age modified.
 * 
 * Input:
 * i - the actual age of the student
 *
 * Output:
 * The modified age of the student.
*******************************************************************************/
// This function takes an age and returns a modieifed age if it's outside the allowed range. 
int modify(int i) { 
    // younger students should bump their age up to 18
    if (i < 18) { // the if statement checks is the age is smaller than 18 
        i = 18; // and if so, the age is set to 18. 
    }

    // older students should bump their age down to 50
    else if (i > 50) { // otherwise, the else if statement checks if the age is bigger than 50 
        i = 50; // and if so, the it sets the age to 50. 
    }

    // return the modified age
    return i; // returns modified changes and puts it back into the array
}

/*******************************************************************************
 * Description:
 * Uses a `while` loop to display the information about the students stored in
 * the object array.
 * 
 * Input:
 * objArray - an array of `Student` objects
 * SIZE     - a constant integer that represents the size of the array
 *
 * Output:
 * N/A
*******************************************************************************/

// Function prints student names and their ages 
// objArray is constant so we dont accidentally change objects 
void display(const Student objArray[], const int SIZE) { 
    // counter variable
    int i = 0; // Initilaizes index counter for the while loop 

    // iterate through each student
    while (i < SIZE) { // while loop continues looping until i reaches SIZE. 
        // display the student's information
        cout << "Student #" << i + 1 << endl; // Prints the student number starting from 1
        cout << "\tName: " << objArray[i].getName() << endl; // Use getName() to print the student's stored name. 
        cout << "\tAge: " << objArray[i].getAge() << endl << endl; // Use getAge() to print the student's stored age
       
        // update the counter
        i++;
    }
}

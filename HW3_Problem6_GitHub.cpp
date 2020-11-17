#include <iostream>
#include <string>

//Going to test out this version tagging version 1.4?

int main()
{
    //Creating the standard namespace.
    using std::cout;  //cout for command line output text.
    using std::endl; //endl to end the line in command line.
    using std::cin; //cin for command line input text.
    using std::string;

        //Establish two arrays and enter lists of integers.    
        int array1[10], array2[10];
        cout << "Enter first list of 10 integers: ";
        for (int i = 0; i < 10; i++) 
        {
            cin >> array1[i];            
        }
        cout << "\n";
        cout << "Enter second list of 10 integers: ";
        for (int i = 0; i < 10; i++) 
        {
            cin >> array2[i];
        }
        cout << "\n";

        cout << "The common elements of both lists are";
        for (unsigned i = 0; i < 10; i++) 
        {
            bool common = false;
            // Comparing each element of array 1 to all elements of array 2 to find matches.
            for (unsigned j = 0; j < 10; j++) 
            {
                // If any element matches this returns bool to true.
                if (array1[i] == array2[j])
                    common = true;           
            }
            //Displaying element from array 1 that matched and returned true.
            if (common) 
            {
                cout << ", " << array1[i];
                
            }
        }
        cout << "\n";
        return 0;
    }

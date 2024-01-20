#include <iostream>

// This is a function declaration. It tells the compiler that the function exists, but does not define it.
// This is useful for declaring functions that are defined later in the file, or in another file.
// A function declaration is not necessary if the function is already defined before it is called.
// The int before the function name indicates that the function returns an integer.
// The ints after the function name indicates that the function takes two integer arguments.
int simpleAdd(int a, int b);


// This is the main function, the starting point of program execution.
int main()
{
    // Part 0: Hello World
    // Demonstrate program execution by running this program. "Hello World!" should be printed to the console.
    {
        std::cout << "Hello World!\n";
    }

    // Part 1: Basic Syntax
    // Review the syntax of the following statements. Change runBasicSyntax to true to run the code.
    bool runBasicSyntax = false;
    if (runBasicSyntax) {
        // Variable Declarations
        int x = 5;
        float y = -2;
        char z = 'a';
        bool w = true;

        // If Statement
        // If statements are useful for running code based on a condition.
        if (x > 0)
        {
			std::cout << "x is positive\n";
		}
        else if (x < 0)
        {
			std::cout << "x is negative\n";
		}
        else
        {
			std::cout << "x is zero\n";
		}

        // For Loop
        // For loops are useful for running code a specific number of times.
        for (int i = 0; i < x; i++)
        {
            std::cout << "This will run " << x << " times." << "\n";
        }

        // While Loop
        // While loops are useful for running code until a condition is no longer true.
        while (x > 0)
        {
			x--;
            std::cout << "After decrementing, x is " << x << ".\n";
		}

		// Switch Statement
        // These are useful for running code based on possible values of a variable.
        switch (x)
        {
			case 0:
				std::cout << "x is zero\n";
				break;
			case 1:
				std::cout << "x is one\n";
				break;
			default:
				std::cout << "x is not zero or one\n";
				break;
		}

		// Functions
        // Calling a function executes the code inside of it, returning a value if indicated.
        // abs() is a function that returns the absolute value of its argument.
		std::cout << "The absolute value of " << y << " is " << abs(y) << ".\n";
        // Review the function declaration for simpleAdd at the top of the file.
        // Review the function definition for simpleAdd at the bottom of the file.
        // simpleAdd is defined after main, so a function declaration is necessary before main() to allow this call.
        std::cout << "1 + 2 = " << simpleAdd(1, 2) << ".\n";

        // Arrays
        // Arrays are useful for storing multiple values of the same type.
        // In C/C++ array sizes are immutable, so they must be declared with a size, explicitly or implicitly.
        int arr[] = {1, 2, 3, 4, 5};    // Implicit size of 5, set by number of elements.
        int arr2[5];                    // Explicit size of 5, but no elements set, so all elements default to 0.
        int arr3[4] = {1, 2, 3};        // Explicit size of 4, but only sets 3 elements, so the last element defaults to 0.
        std::cout << "The first element of arr is " << arr[0] << ".\n";

        // Pointers
        // Pointers are useful for storing the memory address of a variable.
        // They are declared with a type and a *.
        int* ptr = &x;      // The & operator returns the memory address of a variable.
        std::cout << "The address of x is " << ptr << ".\n";
        int value = *ptr;   // The * operator returns the value at the memory address of a pointer.
        std::cout << "The value at the address of x is " << value << ".\n";

        // Strings
        // Strings are useful for storing text, but they are not a primitive type in C/C++.
        // Therefore, strings must be imported from the standard library, as std::string.
        std::string str = "Hello World!";
        std::cout << str << "\n";
        // Strings are fundamentally arrays of char, so individual chars can be accessed via array format.
        std::cout << "The first character of str is " << str[0] << ".\n";
        // As such, what can be done with strings can be done with char arrays.
        char str2[] = "Hello World!";
        std::cout << str2 << "\n";
        std::cout << "The first character of str2 is " << str2[0] << ".\n";
        // Char pointers can also be used to store strings.
        const char* strPtr = "Hello World!";
        std::cout << strPtr << "\n";
        std::cout << "The first character of strPtr is " << strPtr[0] << ".\n";
    }

    // Part 2: Header and Source Files
    // Review the .h and .c file for the Shape class.
    // Take note of the function declarations in the header file, and the function definitions in the source file.

    // Part 3: Classes
    // Review the public and private members of the Shape class.
    /*
    *   TASK:
    *       Add a private member variable "height" to the Shape class.
    *       Then add a public member function "getHeight" to retrieve it.
    */


    // Part 4: Constructors and Destructors
    // Learn about managing memory with constructors and destructors.
    /*
    *   TASK:
    *       Add a constructor to the Shape class that takes a width and height as arguments.    
    *       Then add a destructor to the Shape class that prints "Shape destroyed!" to the console.
    *       Create a Shape object down below using your constructor, store it in a pointer, and then destroy it.
    */

    
    // Part 5: Inheritance
    // Learn about inheritance, a useful feature of object-oriented programming.
    /*
    *   TASK:
    *       Create two new classes, Rectangle and Triangle, that inherit from Shape.
    *       Although you will need to create a constructor for each new class that takes width and height arguments,
    *       pass those values to the Shape constructor using Constructor Chaining.
    *       Add a public member function "getArea" to each class which calculates the area of the shape.
    *       Create a Rectangle and a Triangle object down below, store them in pointers, and print their areas.
    *       Store the Rectangle and Triangle objects in a Shape array. 
    *       What happens if you try to print the areas of the objects in the Shape array?
    */


    // Part 6: Abstraction
    // Learn about abstraction, a useful feature of object-oriented programming.
    /*
    *   As we saw in the previous part, we can store objects of different types in the same array based on abstraction.
    *   However, we cannot call functions specific to the derived classes on the objects in the array.
    *   This is because the objects in the array are treated as the base class, Shape.
    *   To call functions specific to the derived classes, we would have to cast the objects to their derived types.
    *   This is called downcasting, and it is not recommended.
    *   Instead, we can use virtual functions and abstraction to call functions specific to the derived classes on the objects in the array.
    *   
    *   TASK:
    *       Convert Shape into an abstract class by adding a pure virtual function "getArea" to it.
    *       Then override the function in Rectangle and Triangle to calculate the area of the shape.
    *       Create a Shape array and store a Rectangle and a Triangle object in it.
    *       Then call getArea on the objects in the array. What happens now?
    */
}


// This is a function definition. It tells the compiler what the function does.
int simpleAdd(int a, int b)
{
    return a + b;
}

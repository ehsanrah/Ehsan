These are mini projects of the course on c++ in:
https://www.youtube.com/watch?v=4lqY8wuZ-PU&list=PL6oj8ZA5xT3AHLqp9Xoq64xwV3IRs_TIP

File handling(File_handling.cpp):

- Creating a text file and writing a sentence into it.

Input/Output streams (Input_output_streams.cpp):

- Reading a text with a small letters from an input file
- Changing the text to capital letteres and write it to another file
- Difference between extraction operator(>>) and get()


getline(Getline_function.cpp):

- Taking user name from input
- the difference between cin and getline()

Reading from a file (File_reading.cpp):
 
- Reading input data from a file

Rock paper scissor game (Rock_paper_scissor.cpp):

- Implementing rock paper scissor game
- generating random numbers

Number guessing game (Number_guessing.cpp):

- Implementing number guessing game
- generating random numbers
- Using srand(time(NULL)) to control the random generator seed

Prize bond game (Prize_bond.cpp):

- Implementing Prize bond game

Structures (Structures.cpp):

- Implementing student information in a struct

Exception handling (Exception_handling.cpp):

- Division by zero error is catched and proper messeage is out on the console using try-catch-throw 

Formatting the output console(Formatting_output)

- changing the color of output cosole
- using setw and setfill to format the output.

Object oriented programming (OOP_class_object.cpp):

- implementing a class with its instantiation
- defining constructor and destructor
- defining setters and getters member functions to initialize the member variables

Reference (References.cpp):

- Implementing swap function with reference (pass by reference) 
- playing around with references. 
- lvalue error if you try to change the reference target

Pointeres (Pointers.cpp):

- Implementing pointers
- playing around with pointers
- the ability of pointer to change the target that they are pointing to (unlike refernces)

Using fstream (Filestream.cpp):

- Using fstream and ios::out create a file and write random numbers in it.

Random access(Random_access.cpp)

- Using seekg() and seekp() to change the location of input/output pointer to read/write from/to a file
- Using tellg() and tellp() to find the position of the file input/output pointer 

Using "this" pointer (This_pointer.cpp):

- Using "this" pointer to access the address of the class
- Using "this" pointer to evaluate a memebr variable using a member function

Friend function (Friend_function.cpp):

- Using friend function to modify a member variable of an object

Operator overloading (Operator_overloading.cpp):

- Using operator oveloading to define addition of two complex valued object instantiated from a complex class
- Defining default and parametrized constructors

Static member variable and static member function (Static_memVar_static_memFunc.cpp)
 
- Using static member variable to store the number of objects that are instatiated from a class
- Using static member function to display the number of objects that are instatiated from a class

Constructor and destructor (Ctor_dtor.cpp):

- Implementing different types of constructors
- Defining default constructor
- Defining parametrized constructor
- Defining copy constructors to initialize an object from another object
- Defining destructors

Function overloading (Function_overloading.cpp)

- Using function overloading to include different variable types as the function input
- Using function overloading to modify functionality of a function by chaning the number of inputs

Inheritane (Inheritance.cpp):

- Conceptual implementation of inheritance
- Using inheritance to define a "rectangle" class from a general "shape" class
- Adding a function to the inherited class to define the area of the rectangle

Virtual function in abstract class (Virtual_function_abstract_class.cpp):

- Using virtual function to define an abstract class
- Using virtual function to achieve run-time polymorphism


Function overriding (Function_overriding.cpp):

- Using function overridding in derived classes to change functionality of base class member functions

Pure virtual function (Pure_virtual_function.cpp):

- Using pure virtual function to declare a function in abstract class and define it in derived classes

Function template (Function_template.cpp) :

- Using function template to define  a generic type function with generic type inputs

Pass by value, reference and(Pass_by_value_reference_pointer.cpp)

- experimenting with different methods of passing input parameters of a function

Inline function (Inline_function.cpp):

- Using inline function to reduce compilation time by reducing overhead of control transfer

Default argument (Default_argument.cpp):

- Using default values for the input parameters of a function
- Noting the order of default arguments which should be from right most to the left

Forward declaration(Forward_declaration.cpp):

- Using forward declaration to introduce the function before its definition 

Friend class (Friend_class.cpp):

- Accessing all member functions and variables of the a class by make it a friend to other classes

String Stream (StringSream.cpp):

- Using string stream functionalities to change int to string and vice versa
 
Vectors:

- Vectors are dynamic arrays
- Their size can be increased or decreased during run time.
- Using size(), push_back() and pop_back() to get size of the vector
  adding an element and deleting to/from vectors, respectively.

Arrays declaration and initialization

- Arrays size are static
- Declaration and initialization should be at the same line or by using loop

Coin toss simulator (Coin_toss_simulator.cpp)

- Implementing coin toss simulation using vectors and writing the results in a file
- Using srand(time(NULL)) to control the random generator seed

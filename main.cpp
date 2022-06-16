#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks
 Create a branch named Part1
 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;
4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.
8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int distance = 3;
    int length = 4;
    int year = 2022;
    
    bool isNumber = false;
    bool hasFever = false;
    bool ateLunch = true;
    
    float timeLeft = 876.f;
    float bar = 2.5f;
    float num = 3.24343f;
    
    double timeInSeconds = 3.912348239293;
    double savings = 2.3321;
    double age = 3.5;
    
    char petName = 'M';
    char myGrade = 'B';
    char greetings = 'H';

	ignoreUnused(
		number,
		distance,
		length,
		year,
		isNumber,
		hasFever,
		ateLunch,
		age,
		timeLeft,
		bar,
		num,
		timeInSeconds,
		savings,
		age,
		petName,
		myGrade,
		greetings); // passing each variable declared to the 
    // function  
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool isNumber(int firstParam, int secondParam = 2)
{
    ignoreUnused(firstParam, secondParam);
    return {};
}
/*
 2)
 */
char currentTime(int hr = 2, int min = 3)
{
    ignoreUnused(hr, min);
    return {};
}
/*
 3)
 */
int daysLeft(int todayDate, int targetDate = 31)
{
    ignoreUnused(todayDate, targetDate);
    return {};
}
/*
 4)
 */
bool isCompleted(char task = 'm',
                 bool isDone = true)
{
    ignoreUnused(task, isDone);
    return {};
}
/*
 5)
 */
char sayHello(char greetings = 'h', 
              char userName = 'J')
{
    ignoreUnused(greetings, userName);
    return {};
}
/*
 6)
 */
float isInStock(bool yes, int quantity = 2)
{
    ignoreUnused(yes, quantity );
    return {};
}
/*
 7)
 */
float itemTotal(char item =  'a',
                int quantity = 0,
                float price  = 1.03f )
{
    ignoreUnused(item, quantity, price);
    return {};
}
/*
 8)
 */
float sumOfInt (int a = 2, int b = 3)
{
    ignoreUnused(a, b);
    return {};
}
/*
 9)
 */
char printName  (char userName = 'J')
{
    ignoreUnused(userName);
    return {};
}
/*
 10)
 */
bool isCat (char noise = 'm', bool isFluffy = true)
{
    ignoreUnused(noise, isFluffy);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.
 send me a DM to review your pull request when the project is ready for review.
 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto twoInputs = isNumber(true, 2);
    //2)
    auto getTime = currentTime(3, 30);
    //3)
    auto countdownToBirthday = daysLeft(2, 31);
    //4)
    auto toDo = isCompleted('a', false);
    //5)
    auto greetinsHeader = sayHello('H', 'J');
    //6)
    auto apples = isInStock(true, 2);
    //7)
    auto appleTotal = itemTotal('a', 1, 1.03f);
    //8)
    auto ageTotal = sumOfInt(5, 6);
    //9)
    auto getUserName = printName('J');
    //10)
    auto myPet = isCat('m', false);

    ignoreUnused(myPet, getUserName, ageTotal, appleTotal, apples, greetinsHeader, toDo, countdownToBirthday, countdownToBirthday, getTime, twoInputs, carRented);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
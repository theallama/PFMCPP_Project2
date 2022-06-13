#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {
}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.
 
 1) Write down the names of the 6 major primitive types available in C++  here:
int
float
bool
doubled int
 
2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
		- just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
		- 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. seen example
 
3) Declare 10 free functions
	each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
		takeDogForWalk(int distanceInYards);
	Name variables what they are.
		int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected
	
9) in the main function at the end:
	for each of those functions declared,
		a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as o  n
b   an for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() {
	// example:
	int number =
		2; // declaration of a variable named "number", that uses the primitive
		   // type 'int', and the variable's initial value is '2'
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

	char petName = 'Mittens';
	char myGrade = 'B';
	char greetings = 'Hello';

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
		greetings); // passing each variable declared to the ignoreUnused()
					// function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
	int rentalDuration,
	int carType = 0) // function declaration with random number of arguments,
					 // arbitrary number of arguments have default value
{
	ignoreUnused(rentalDuration, carType); // passing each function parameter to
										   // the ignoreUnused() function
	return {}; //f your fuisNum
bool isNumber(int firstParam, int secondParam = 2)
{
	ignoreUnused(firstParam, secondParam);
	return {};
}
ber(int frn {}

char currentTime(int hr = 2, int min = 3)
{
	ignoreUnused(hr, min);
	return {};
}
}
 */
/*
 
int daysLeft(int todayDate, int targetDate = 31)
{
	ignoreUnused(todayDate, targetDate);
	return {};
}3)
int dayeted(
bool isCompleted(char task = "makeDinner",
				 bool isDone = "not completed")
{
	ignoreUnused(task, isDone);
	return {};
}char task =ompletechar sayHello(char greetings = "Hi!", userName = "John")
{
	ignoreUnused(greetings, userName);
	return {};
});
	retud(gre
float isInStock(bool yes, int quantity = 2)
{
	ignoreUnused(yes, quantity );
	return {};
}etings);
	tal(c
float itemTotal(char item =  "apple",
				int quantity = 0,
				float price  = 1.03f )
{
	ignoreUnused(item, quantity, price);
	return {};
}har item = , qua
float sumOfInt (int a = 2, int b = 3)
{
	 ignoreUnused(a, b);
	 return {};
}ntity, pric
{
	
void printName  (char userName = "John")
{
	 ignoreUnused(userName);
	 return {};
} ignoreUnuseerNa/
book isCat (char noise = "meow", bool isFluffy =  "true")
{
	ignoreUnused(noise, isFluffy);
	return {};
}me);
	 return {};
}
 */

/*
 10)
book isCat (char noise = "meow", bool isFluffy =  "true")
{
	ignoreUnused(noise, isFluffy);
	return {};
}
 *

/*
 MAKE SURE YOU ARE NTEoSE RNH

 mmit your changes by clicking on the Source Control panel on the left,
entering a message, and click [Commit and push].
 
 If you didn't already:
	Make a pull request after you make your first commit
	pin the pull request link and this repl.it link to our DM thread in a single
message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() {
	//    auto validateAges = isNumber(1, 2); example o    auto lunchTime = currentTime(12, 30);f calling     auto birthdayCountdown = daysLeft(2, 31);that funct    auto toDoItem = isCompleted("feed cat", "not completed");ion, stori    auto heading = sayHello("Hi", "Jane");ng the val    auto apples = isInStock("yes", 5);ue, and pa    auto bananaTotal = itemTotal("banana", 3, 3.09f)ssing it t    auto bothSides = sumOfInt(1, 2);o
	// ign    auto userName = printName("Jane");oreUnused a    auto cow = isCat("moo", false);
    t the end of main()
	aut, validateAges, lunchTime, birthdayCountdown, toDoItem, heading, apples, bananaTotal, bothSides, userName, userName, cowo carRented = rentACar(6, 2);

	// 1)

	// 2)

	// 3)

	// 4)

	// 5)

	// 6)

	// 7)

	// 8)

	// 9)

	// 10)

	ignoreUnused(carRented);
	std::cout << "good to go!" << std::endl;
	return 0;
}

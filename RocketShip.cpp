/*
Rocket Ship
Pawelski
4/19/2021
This program uses functions to draw a rocket ship. Look over the code and
answer the questions within the assignment document. Afterwards, modify the
program according to the instructions.
*/
#include <iostream>
using namespace std;

/*
Draws a body section without text.
*/
void bodyWithoutText()
{
    cout << "+--------+\n";
    cout << "|        |\n";
    cout << "|        |\n";
    cout << "|        |\n";
    cout << "|        |\n";
    cout << "+--------+\n";
}

/*
Draws a body section with text.
*/
void bodyWithText()
{
    cout << "+--------+\n";
    cout << "|        |\n";
    cout << "| United |\n";
    cout << "| States |\n";
    cout << "|        |\n";
    cout << "+--------+\n";
}

/*
Draws a cone.
*/
void cone()
{
    cout << "    /\\\n";
    cout << "   /  \\\n";
    cout << "  /    \\\n";
    cout << " /      \\\n";
    cout << "/        \\\n";
}

int main()
{
    cone();
    bodyWithText();
    bodyWithoutText();
    cone();
    return 0;
}

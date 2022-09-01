#include <iostream>
#include <string>

using namespace std;

//Recursive algorithm that tells you the steps to solve Hanoi problem from a to c, b is an auxiliary peg
void solveHanoi(int depth, string from, string aux, string to);
//Helper function that displays us what to move and how
void move(string from, string to);
//Counter
int step = 0;

int main()
{
    int depth;
    cout << "Enter the number of disks: ";
    cin >> depth;
    solveHanoi(depth, "A", "B", "C");
    cout << step;
}

void solveHanoi(int depth, string from, string aux, string to)
{
    //Base case
    if (depth == 0)
        return;
    else
    {
        solveHanoi(depth - 1, from, to, aux);
        move(from, to);
        solveHanoi(depth - 1, aux, from, to);
    }
}

void move(string from, string to)
{
    cout << "Move " << from << " to " << to << endl;
    step++;
}

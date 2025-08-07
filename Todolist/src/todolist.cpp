#include <fstream>
#include "../include/TDL.hpp"

using namespace std;

int main()
{
    fstream list("D:/Todolist/List.txt", ios::out | ios::app);

    tdlist mytask;

    int c = 1;
    static int cntr = 1;

    char x;

    cout << "Hi! Welcome to the to do list app!" << endl;

    while (c == 1)
    {
        cout << "Please enter these letters for start:" << endl
             << "'D' to delete a task" << endl
             << "'C' to delete all of the tasks" << endl
             << "'E' to edit tasks" << endl
             << "'A' if a task is completed" << endl
             << "'N' to enter a new task" << endl
             << "'F' to find tasks" << endl
             << "'O' to close the app" << endl;

        cin >> x;

        switch (x)
        {
        case 'N':
            mytask.createtask();
            break;

        case 'n':
            mytask.createtask();
            break;

        case 'E':
            mytask.edittask();
            break;

        case 'e':
            mytask.edittask();
            break;

        case 'D':
            mytask.deletetask();
            break;

        case 'd':
            mytask.deletetask();
            break;

        case 'A':
            mytask.accomplishedtask();
            break;

        case 'a':
            mytask.accomplishedtask();
            break;

        case 'C':
            mytask.cleartask();
            break;

        case 'c':
            mytask.cleartask();
            break;

        case 'F':
            mytask.findtask();
            break;

        case 'f':
            mytask.findtask();
            break;

        case 'O':
            mytask.vecsize();
            for (auto a : mytask.dolist1)
            {
                list << "Task number " << cntr << ":" << endl;
                list << a << endl;
                cntr++;
            }
            cout << "We appreciate you trying out our app!" << endl
                 << "You can see your tasks in List.txt file!" << endl;
            c++;
            break;

        case 'o':
            mytask.vecsize();
            for (auto a : mytask.dolist1)
            {
                list << "Your task:" << endl;
                list << a << endl << endl;
            }
            cout << "We appreciate you trying out our app!" << endl
                 << "You can see your tasks in List.txt file!" << endl;
            c++;
            break;

        default:
            cerr << "Invalid letter! Try again!";
            break;
        }
    }

    list.close();
    return 0;
}
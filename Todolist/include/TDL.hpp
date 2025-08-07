#include <iostream>
#include <vector>
#include <string>
#include <limits>

#ifndef TDLIST_H
#define TDLIST_H

class tdlist
{
private:
    std::vector<std::string> dolist;

public:
    std::vector<std::string> dolist1;

    void vecsize()
    {
        for (auto t : dolist)
        {
            dolist1.push_back(t);
        }
    };

    void createtask()
    {
        std::string task;
        std::cout << "Enter a task:" << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(std::cin, task);
        dolist.push_back(task);
        std::cout << "The task has been added successfully!" << std::endl
                  << std::endl;
    }

    void deletetask()
    {
        static int counter = 1;
        if (dolist.size() != 0)
        {
            std::string str1;
            std::cout << "Enter a part of the task that you remember:" << std::endl;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(std::cin, str1);

            for (auto t : dolist)
            {
                if (t.find(str1) != std::string::npos)
                {
                    std::cout << "Task number is: " << counter << std::endl;
                    std::cout << "The task is:" << std::endl
                              << t << std::endl
                              << std::endl;
                }
                else
                {
                    counter++;
                }
            }

            int no;
            std::cout << "Now enter the task number:" << std::endl;
            std::cin >> no;
            dolist.erase((dolist.begin() + (no - 1)));
            std::cout << "Task number " << no << " deleted!" << std::endl
                      << std::endl;
        }
        else
        {
            std::cerr << "You haven't declared any task! Please add a task first!" << std::endl;
        }
    }

    void accomplishedtask()
    {
        static int counter = 1;
        if (dolist.size() != 0)
        {
            std::string str1;
            std::cout << "Enter a part of the task that you remember:" << std::endl;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(std::cin, str1);

            for (auto t : dolist)
            {
                if (t.find(str1) != std::string::npos)
                {
                    std::cout << "Task number is: " << counter << std::endl;
                    std::cout << "The task is:" << std::endl
                              << t << std::endl
                              << std::endl;
                }
                else
                {
                    counter++;
                }
            }

            int no;
            std::cout << "Now enter the task number:" << std::endl;
            std::cin >> no;
            std::cout << dolist.at(no - 1) << " compeleted!" << std::endl
                      << std::endl;
            dolist.erase((dolist.begin() + (no - 1)));
        }
    }

    void edittask()
    {
        static int counter = 1;
        if (dolist.size() != 0)
        {
            std::string str1;
            std::cout << "Enter a part of the task that you remember:" << std::endl;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(std::cin, str1);

            for (auto t : dolist)
            {
                if (t.find(str1) != std::string::npos)
                {
                    std::cout << "Task number is: " << counter << std::endl;
                    std::cout << "The task is:" << std::endl
                              << t << std::endl
                              << std::endl;
                }
                else
                {
                    counter++;
                }
            }

            static int no;
            std::string task1;
            std::cout << "Now enter the task number:" << std::endl;
            std::cin >> no;

            std::cout << "Task number " << no << ":" << std::endl;

            no--;

            std::cout << dolist.at(no) << std::endl
                      << "is deleted!" << std::endl;

            dolist.erase(dolist.begin() + no);

            std::cout << "Enter your new task:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            getline(std::cin, task1);
            dolist.push_back(task1);

            std::cout << "The task has been added successfully!" << std::endl
                      << std::endl;
        }

        else
        {
            std::cerr << "You haven't declared any task! Please add a task first!" << std::endl
                      << std::endl;
        }
    }

    void findtask()
    {
        if (dolist.size() != 0)
        {
            static int counter = 1;
            std::string str1;
            std::cout << "Enter a part of the task that you remember:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            getline(std::cin, str1);

            for (auto t : dolist)
            {
                if (t.find(str1) != std::string::npos)
                {
                    std::cout << "Task number is: " << counter << std::endl;
                    std::cout << "The task is:" << std::endl
                              << t << std::endl
                              << std::endl;
                }
                else
                {
                    counter++;
                }
            }
        }
    }

    void cleartask()
    {
        char a;
        std::cout << "Do you confirm?" << std::endl
                  << "'Y' for Yes and 'N' for No" << std::endl;
        std::cin >> a;
        switch (a)
        {
        case 'Y':

            dolist.clear();
            break;
        case 'y':

            dolist.clear();
            break;
        case 'N':
            std::cout << "Task deletion canceled!" << std::endl
                      << std::endl;
            break;

        case 'n':
            std::cout << "Task deletion canceled!" << std::endl
                      << std::endl;
            break;

        default:
            std::cerr << "Your answer is undefined! Please try again!" << std::endl
                      << std::endl;
            break;
        }
    }

    tdlist() {};
    ~tdlist() {}
};

#endif
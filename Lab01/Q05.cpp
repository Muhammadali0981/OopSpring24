/* Programmer:Muhammad Ali 23K-0052
* Date: 29/01/24
* Descrption:event managemnt system
*/

#include <iostream>

struct Event
{
    std::string name;
    std::string date;
    std::string venue;
    std::string organizer;
};

void GetEvent(int size, std::string DateCheck, Event *arr)
{
    
    int count = 0;  
    for (int i = 0; i < size; i++) {

        if (arr[i].date == DateCheck) {

            count++;

            std::cout << std::endl;
            std::cout << "Details of Event " << count << " on this date:" << std::endl;
            std::cout << "Event name: " << arr[i].name << std::endl;
            std::cout << "Event date: " << arr[i].date << std::endl;
            std::cout << "Event venue: " << arr[i].venue << std::endl;
            std::cout << "Event organizer: " << arr[i].organizer << std::endl;

        
        }

        else{

            std::cout << "no events on this date";

        }
    
    }
}

int main() 
{
    int n;

    std::cout << "Enter number of events:";
    std::cin >> n;
    Event *events = new Event[n];

    for (int i = 0; i < n ; i++) {

        std::cout << std::endl;
        std::cout << "For Event " << i+1 << std::endl;

        std::cout << "Event name:";
        std::cin >> events[i].name;

        std::cout << "Event date (in this format dd/mm/yy):";
        std::cin >> events[i].date;

        std::cout << "Event venue:";
        std::cin >> events[i].venue;

        std::cout << "Event organizer:";
        std::cin >> events[i].organizer;

        std::cout << std::endl;
    }


    std::string date;
    std::cout << "Enter date to search for an event (in this foramt dd/mm/yy):";
    std::cin >> date;
    GetEvent(n, date, events);

    return 0;
}
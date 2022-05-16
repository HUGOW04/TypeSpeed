#include <iostream>
#include <time.h>
#include <string>

int main()
{
    std::string sentence;
    time_t startTime;
    time_t endTime;
    std::cout << "I am going to calculate the number of words per minute you can accomplish\n";
    std::cout << " Please type: I ran over the river and through the woods ";
    std::cout << std::endl << std::endl << "Press enter and then start typing...";
    std::cin.get();
    time(&startTime);
    std::getline(std::cin, sentence);
    time(&endTime);
    std::cout << "I took you this many whole seconds:" << endTime - startTime << std::endl;
    std::cout<< "To type in the sentence: " << sentence;       
}

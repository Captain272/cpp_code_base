#include<iostream>
#include <fstream>
int main()
{

std::ifstream file("comentary.txt");
if (file.is_open()) {
    std::string line;
    while (getline(file, line)) {
        // using printf() in all tests for consistency
        printf("%s", line.c_str());
    }
    file.close();
}
}

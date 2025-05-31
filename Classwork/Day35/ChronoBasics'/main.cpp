#include <iostream>
#include <chrono>
using namespace std;
int main() {
    auto now = chrono::system_clock::now();
    time_t timeNow = chrono::system_clock::to_time_t(now);

    cout << "Current time: " << ctime(&timeNow);
}
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include <limits>
#include <numeric>
#include <ctime>
#include <cmath>
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

int getRandom(int max) {
    srand(time(NULL));
    return rand() % max;
}
void executeThread(int id) {
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);
    cout << "Thread " << id << " Sleep Time: " << ctime(&sleepTime) << endl;
    cout << "Month: " << myLocalTime.tm_mon << endl;
    cout << "Day: " << myLocalTime.tm_mday << endl;
    cout << "Year: " << myLocalTime.tm_year + 1900 << endl;
    cout << "Hours: " << myLocalTime.tm_hour << endl;
    cout << "Min: " << myLocalTime.tm_min << endl;
    cout << "Sec: " << myLocalTime.tm_sec << endl;
    this_thread::sleep_for(chrono::seconds(getRandom(3)));
    nowTime = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(nowTime);

    cout << "Thread " << id << " Awake Time: " << ctime(&sleepTime);
}
void awaitInput();

int main() {
    thread th1, th2;
    th1 = thread(executeThread, 1);
    th1.join();

    th2 = thread(executeThread, 1);
    th2.join();

    awaitInput();
}
void awaitInput() {
    string input;
    cin >> input;
}
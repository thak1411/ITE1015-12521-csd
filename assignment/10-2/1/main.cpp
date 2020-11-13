#include "clock.h"
#include <cstdio>
#include <vector>
int main() {
    std::vector < Clock* > v;
    int n;
    scanf("%d", &n);
    v.push_back(new SundialClock(0, 0, 0));
    v.push_back(new CuckooClock(0, 0, 0));
    v.push_back(new GrandFatherClock(0, 0, 0));
    v.push_back(new WristClock(0, 0, 0));
    v.push_back(new AtomicClock(0, 0, 0));
    for (int i = 0; i < v.size(); ++i) v[i]->reset();
    puts("Reported clock times after resetting:");
    for (int i = 0; i < v.size(); ++i) v[i]->displayTime();
    puts("\nRunning the clocks...\n");
    for (int i = 0; i < n; ++i) for (int j = 0; j < v.size(); ++j) v[j]->tick();
    puts("Reported clock times after running:");
    for (int i = 0; i < v.size(); ++i) v[i]->displayTime();
    for (int i = 0; i < v.size(); ++i) delete v[i];
    return 0;
}
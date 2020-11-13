#include "clock.h"

Clock::Clock(int hour, int minute, int second, double driftPerSecond) : clockTime(hour, minute, second, 1), driftPerSecond(driftPerSecond), totalDrift(0) { }
Clock::~Clock() { }
void Clock::reset() {
    clockTime.reset();
}
void Clock::tick() {
    clockTime.increment();
    totalDrift += driftPerSecond;
}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0.) { }
void SundialClock::displayTime() {
    std::cout << "SundialClock ";
    clockTime.display();
    std::cout << ", total drift: " << totalDrift << '\n';
}

CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.) { }
void CuckooClock::displayTime() {
    std::cout << "CuckooClock ";
    clockTime.display();
    std::cout << ", total drift: " << totalDrift << '\n';
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000694444) { }
void GrandFatherClock::displayTime() {
    std::cout << "GrandFatherClock ";
    clockTime.display();
    std::cout << ", total drift: " << totalDrift << '\n';
}

WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second, 0.000347222) { }
void WristClock::displayTime() {
    std::cout << "WristClock ";
    clockTime.display();
    std::cout << ", total drift: " << totalDrift << '\n';
}

AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second, 0.000034722) { }
void AtomicClock::displayTime() {
    std::cout << "AtomicClock ";
    clockTime.display();
    std::cout << ", total drift: " << totalDrift << '\n';
}
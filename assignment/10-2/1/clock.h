#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "clock_time.h"
#include <iostream>

class Clock {
private:
protected:
    ClockTime clockTime;
    double driftPerSecond, totalDrift;
public:
    Clock(int, int, int, double);
    virtual ~Clock();
    
    void reset();
    void tick();
    virtual void displayTime() = 0;
};

class NaturalClock : public Clock {
public:
    NaturalClock(int, int, int, double);
    virtual void displayTime() = 0;
};

class MechanicalClock : public Clock {
public:
    MechanicalClock(int, int, int, double);
    virtual void displayTime() = 0;
};

class DigitalClock : public Clock {
public:
    DigitalClock(int, int, int, double);
    virtual void displayTime() = 0;
};

class QuantumClock : public Clock {
public:
    QuantumClock(int, int, int, double);
    virtual void displayTime() = 0;
};

class SundialClock : public NaturalClock {
public:
    SundialClock(int, int, int);
    virtual void displayTime();
};

class CuckooClock : public MechanicalClock {
public:
    CuckooClock(int, int, int);
    virtual void displayTime();
};

class GrandFatherClock : public MechanicalClock {
public:
    GrandFatherClock(int, int, int);
    virtual void displayTime();
};

class WristClock : public DigitalClock {
public:
    WristClock(int, int, int);
    virtual void displayTime();
};

class AtomicClock : public QuantumClock {
public:
    AtomicClock(int, int, int);
    virtual void displayTime();
};

#endif
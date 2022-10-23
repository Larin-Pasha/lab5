#pragma once

class Fazzynumber
{
private:
    double A, ai, ar;

public:
    Fazzynumber();
    Fazzynumber(int X, int xi, int xr);
    Fazzynumber Init(int X, int xi, int xr);
    Fazzynumber Read();
    void Display();
    void Display_error1(Fazzynumber D);
    void Display_error2(Fazzynumber D);
    Fazzynumber toString();
    Fazzynumber operator+(const Fazzynumber& D);
    Fazzynumber sum(Fazzynumber M);
    Fazzynumber subtract(Fazzynumber M);
    Fazzynumber operator-(const Fazzynumber& D);
    Fazzynumber multiplication(Fazzynumber M);
    Fazzynumber operator*(const Fazzynumber& D);
    Fazzynumber inverse(Fazzynumber M);
    Fazzynumber operator^(const Fazzynumber);
    Fazzynumber division(Fazzynumber M);
    Fazzynumber operator/(const Fazzynumber& D);
    Fazzynumber result(Fazzynumber R);
};
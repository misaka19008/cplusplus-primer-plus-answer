#ifndef EXEC2_H_
#define EXEC2_H_

#include<iostream>
namespace VECTOR
{
    class Vect
    {
    public:
        enum Mode {RECT,POL};
    private:
        double x;
        double y;
        //double mag;
        //double ang;
        Mode mode;
        //void set_mag();
        //void set_ang();
        void set_x(double mag,double ang);
        void set_y(double mag,double ang);
    public:
        Vect();
        Vect(double n1,double n2,Mode form=RECT);
        ~Vect();
        void reset(double n1,double n2,Mode form=RECT);
        double xval() const { return x; }
        double yval() const { return y; }
        double magval() const;
        double angval() const;
        void polar_mode();
        void rect_mode();
        
        // Operator overloading.
        Vect operator+(const Vect & b) const;
        Vect operator-(const Vect & b) const;
        Vect operator-() const;
        Vect operator*(double n) const;

        // Friends.
        friend Vect operator*(double n,const Vect & v);
        friend std::ostream & operator<<(std::ostream & os,const Vect & v);
    };
} // namespace VECTOR

#endif
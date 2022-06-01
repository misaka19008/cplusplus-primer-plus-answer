#ifndef EXEC1_H_
#define EXEC1_H_

#include<fstream>
namespace VECTOR
{
    class Vect
    {
    public:
        enum Mode {RECT,POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vect();
        Vect(double n1,double n2,Mode form=RECT);
        ~Vect();
        void reset(double n1,double n2,Mode form=RECT);
        double xval() const { return x; }
        double yval() const { return y; }
        double magval() const { return mag; }
        double angval() const { return ang; }
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
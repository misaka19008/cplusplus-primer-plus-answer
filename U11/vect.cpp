#include<cmath>
#include "header_files/vect.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double RAD_TO_DEG=45.0/atan(1.0);

    // Private methods.
    void Vect::set_mag() { mag=sqrt(x*x+y*y); }
    void Vect::set_ang() {
        if (x == 0.0 && y == 0.0) ang=0.0;
        else ang=atan2(y,x);
    }
    void Vect::set_x() { x=mag*cos(ang); }
    void Vect::set_y() { y=mag*sin(ang); }

    // Public methods.
    Vect::Vect() {
        // Default constructor.
        x=y=mag=ang=0.0;
        mode=RECT;
    }
    Vect::Vect(double n1,double n2,Mode form) {
        mode=form;
        if (form == RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag=n1;
            ang=n2/RAD_TO_DEG;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vect() -- vector set to 0.\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }
    Vect::~Vect() {
        // Default destructor.
    }
    void Vect::reset(double n1,double n2,Mode form) {
        mode=form;
        if (form == RECT)
        {
            x=n1;
            y=n2;
            set_mag();
            set_ang();
        }
        else if (form == POL)
        {
            mag=n1;
            ang=n2/RAD_TO_DEG;
            set_x();
            set_y();
        }
        else
        {
            cout<<"Incorrect 3rd argument to Vect() -- vector set to 0.\n";
            x=y=mag=ang=0.0;
            mode=RECT;
        }
    }
    void Vect::polar_mode() { mode=POL; }
    void Vect::rect_mode() { mode=RECT; }

    // Operator overloading.
    Vect Vect::operator+(const Vect & b) const { return Vect(x+b.x,y+b.y); }
    Vect Vect::operator-(const Vect & b) const { return Vect(x-b.x,y-b.y); }
    Vect Vect::operator-() const { return Vect(-x,-y); }
    Vect Vect::operator*(double n) const { return Vect(n*x,n*y); }
    Vect operator*(double n,const Vect & a) { return a*n; }

    // Friend.
    std::ostream & operator<<(std::ostream & os,const Vect & v) {
        if (v.mode == Vect::RECT) os<<"(x,y) = ("<<v.x<<","<<v.y<<")\n";
        else if (v.mode == Vect::POL) os<<"(m,a) = ("<<v.mag<<","<<v.ang*RAD_TO_DEG<<")\n";
        else os<<"Vector object is invalid.\n";
        return os;
    }
} // namespace VECTOR
#ifndef EXEC6_H_
#define EXEC6_H_

class Move
{
private:
    double x;
    double y;
public:
    Move(double a=0,double b=0);
    ~Move();
    void showMove() const;
    Move add(const Move & m);
    void reset(double a=0,double b=0);
};

#endif
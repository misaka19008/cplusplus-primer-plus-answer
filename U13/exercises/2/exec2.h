#ifndef EXEC2_H_
#define EXEC2_H_

class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd();
    Cd(char * s1,char * s2,int n,double x);
    Cd(const Cd & d);
    virtual ~Cd();
    virtual void report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char * introduce;
public:
    Classic();
    Classic(char * intro,char * s1,char * s2,int n,double x);
    Classic(const Classic & cl);
    ~Classic() { if (introduce != nullptr) delete [] introduce; }
    virtual void report() const;
    Classic & operator=(const Classic & cl);
};

#endif
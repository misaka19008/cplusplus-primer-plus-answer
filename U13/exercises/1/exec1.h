#ifndef EXEC1_H_
#define EXEC1_H_

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd();
    Cd(char * s1,char * s2,int n,double x);
    Cd(const Cd & d);
    virtual ~Cd() {}
    virtual void report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char introduce[90];
public:
    Classic();
    Classic(char * intro,char * s1,char * s2,int n,double x);
    Classic(const Classic & cl);
    ~Classic() {}
    virtual void report() const;
    Classic & operator=(const Classic & cl);
};

#endif
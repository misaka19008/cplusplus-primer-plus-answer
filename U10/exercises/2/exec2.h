#ifndef EXEC2_H_
#define EXEC2_H_

class Person
{
private:
    static const int LIMIT=35;
    std::string lname;
    char fname[LIMIT];
public:
    Person();
    Person(const std::string & ln,const char * fn="Heyyou");
    void Show() const;
    void FormatShow() const;
};

#endif
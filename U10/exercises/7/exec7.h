#ifndef EXEC7_H_
#define EXEC7_H_

class Plorg
{
private:
    char plorg_name[90];
    int CI;
public:
    Plorg();
    Plorg(const char * name="Plorga",int newCI=50);
    ~Plorg();
    void setNewCI(int newCI);
    void showPlorg() const;
};

#endif
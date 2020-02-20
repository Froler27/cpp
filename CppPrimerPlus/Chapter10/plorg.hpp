#ifndef PLORG_HPP_
#define PLORG_HPP_

class Plorg
{
    enum {Max = 20};
    char m_name[Max];
    int m_CI;
public:
    Plorg(const char * name = "Plorga", int CI = 50);
    void setCI(int CI);
    void show();
};

#endif
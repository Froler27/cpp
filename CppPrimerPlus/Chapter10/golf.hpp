#ifndef GOLF_HPP_
#define GOLF_HPP_

const int Len = 40;
class Golf 
{
    static const int Len = 40;
    char fullname[Len];
    int handicap;
    bool setgolf();
public:
    void setgolf(const char * name, int hc);
    Golf();
    void setHandicap(int hc);
    void showgolf();
};

#endif
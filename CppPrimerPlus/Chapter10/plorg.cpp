#include "plorg.hpp"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char * name, int CI)
{
    strcpy(m_name, name);
    m_CI = CI;
}

void Plorg::setCI(int CI)
{
    m_CI = CI;
}

void Plorg::show()
{
    std::cout << "Name: " << m_name
        << "\nCI: " << m_CI << '\n';
}
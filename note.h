#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include <cstring>
#include <iostream>
using namespace std;
class Notebook {
private:
    string model;
    int memory;
    int cpu;
public:
    Notebook();
    Notebook(string model1, int memory1, int cpu1);
    Notebook(const Notebook&n);
Notebook operator= (Notebook &n);
Notebook operator++();
Notebook operator++(int);
Notebook operator--();
Notebook operator--(int);
bool const operator< (const Notebook &n);
bool const operator> (const Notebook &n);
bool const operator<= (const Notebook &n);
bool const operator>= (const Notebook &n);
bool const operator== (const Notebook &n);
bool const operator!= (const Notebook &n);
friend ostream& operator<< (ostream &h, const Notebook &n);
friend istream& operator>> (istream &h, Notebook &n);
void set_model(string model2);
string get_model();
void set_memory(int memory2);
int get_memory();
void set_cpu(int cpu2);
int get_cpu();
void print();};
#endif // NOTE_H_INCLUDED

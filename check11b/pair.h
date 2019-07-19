/*****************************************************
 * File: pair.h
 *
 * Purpose: Defines a Pair template class that can hold
 *   two items of arbitrary data types.
 ******************************************************/

#ifndef PAIR_H
#define PAIR_H

// TODO: Fill in this class
// Put all of your method bodies right in this file

template <class T1, class T2>
class Pair
{
public:
	void setFirst(T1 first) { this->first= first; }
	void setSecond(T2 last) { this->last= last; }
	T1 getFirst() { return first; }
	T2 getSecond() { return last; }
	void display() { cout << first << " - " << last; }
private:
	T1 first;
	T2 last;


};
#endif // PAIR_H

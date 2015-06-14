/**
* compile: g++ -c -Wall -pedantic *.cpp
* compile: g++ -o ueb07 *.o
* @file	LinList.h
* @author Andreas Schreiner & Simon Bastian
* @detail Basierend auf Folz Klasse
* @date 14.06.2015
*/
#ifndef LINLIST_H_
#define LINLIST_H_
#include "ListElement.h"

class LinListException : public ElementException {
public:
    LinListException(const string& msg = "") : ElementException(msg) {}
};
/**
 * Doppelt-verkettete Lineare Liste
 * 
 * @author	folz
 * @version 
 * @date	20.05.2012
 */
class LinList {
public:
	LinList();
	/**
	 * Kopierkonstruktor
	 * @param linlist Referenz auf zu kopierendes Objekt
	 */
	LinList(const LinList&);
	~LinList();
	LinList& operator=(const LinList& linList);
	void push_back (InhaltTyp t);
	void push_front(InhaltTyp t);
	void pop_back();
	void pop_front();
	void insert(int pos, InhaltTyp t);
	void erase(int pos);
	void clear();
	bool isEmpty();
	string toString() const;
	friend ostream& operator<< (ostream& o, const LinList& linList);
	friend istream& operator>> (istream& i, LinList& linList);
	static const char* MELDUNG_LISTE_LEER;
	static const char* MELDUNG_FALSCHE_POS;
	static const char* ADD_SPACE;
	static const char* CHAINED_LIST;
	static const char* ELEMENTS;

private:
	void copyElements(const LinList& linlist);
	size_t size;
	ListElement* first;
	ListElement* last;
};

#endif /* LINLIST_H_ */

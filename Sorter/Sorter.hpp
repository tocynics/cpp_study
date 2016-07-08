/*****************************************************************************
	order			: My make sort library
	compiler		: x86_64-w64-mingw32-gcc (cygwin x64)
	file name		: Sorter.cpp
					: 
	creation date	: 2016-07-05
*****************************************************************************/
/*
	History of revision
*/

#ifndef _SORTER_HPP_
#define _SORTER_HPP_
/*****************************************************************************
	include, namespace
*****************************************************************************/
#include <iostream>

/*****************************************************************************
	define
*****************************************************************************/

/*****************************************************************************
	class, structure
*****************************************************************************/

namespace alg
{

class Algorythm
{
	private:
	protected:
		int iSize;
		int* piData;
	public:
		Algorythm();
		Algorythm(int iSize);
		~Algorythm();
		int get(int iIdx);
		int set(int iIdx, int iData);
		int getSize();
		int setSize(int iSize);
		int show();
};

class Sorter : public Algorythm
{
	public:
		Sorter();
		~Sorter();
		int BubbleSort();
};

} //namespace alg

/*****************************************************************************
	external variables
*****************************************************************************/

/*****************************************************************************
	internal variables
*****************************************************************************/

/*****************************************************************************
	prototype declaration
*****************************************************************************/

#endif /* _SORTER_HPP_ */



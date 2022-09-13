#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
#include <windows.h>
#include "framework.h"
#include <utility>
#include <cmath>

#ifdef VECTORLIB_EXPORTS
#define VECTORLIB_API __declspec(dllexport)
#else
#define VECTORLIB_API __declspec(dllimport)
#endif

class VECTORLIB_API Vector {
	public:
		static Vector ZeroVec;

		static Vector OneVec;

		Vector();

		Vector(Number x, Number y);

		Vector(const Vector& v);

		std::pair<Number, Number> getValue() const;

		Number getX() const;

		Number getY() const;

		void Add(const Vector& v);

		friend const Vector operator+(const Vector& l, const Vector& r);

		void toPolar();

	private:
		std::pair<Number, Number> vec;
		
	}; 

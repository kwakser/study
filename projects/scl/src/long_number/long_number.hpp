#pragma once

#include <iostream>

namespace PSkorynin {
	class LongNumber {
		static const char STR_ZERO = '0';
		static const char MINUS = '-';
		
		int* numbers;
		int length;
		int isNegative;
		
		public:
			LongNumber();
			LongNumber(const char* const str);
			LongNumber(const LongNumber& x);
			LongNumber(LongNumber&& x);
			
			~LongNumber();
			
			LongNumber& operator = (const char* const str);
			LongNumber& operator = (const LongNumber& x);
			LongNumber& operator = (LongNumber&& x);
			
			bool operator == (const LongNumber& x) const;
			bool operator > (const LongNumber& x) const;
			bool operator < (const LongNumber& x) const;
			
			LongNumber operator + (const LongNumber& x) const;
			LongNumber operator - (const LongNumber& x) const;
			LongNumber operator * (const LongNumber& x) const;
			LongNumber operator / (const LongNumber& x) const;
			LongNumber operator % (const LongNumber& x) const;
			
			int get_digits_number() const;
			bool is_negative() const;
			
			friend std::ostream& operator << (std::ostream &os, const LongNumber& x);
			
		private:
			int get_lenght(const char* const str) const;
	};
}

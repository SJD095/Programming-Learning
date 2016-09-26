#include <iostream>
#include "myString.h"

using namespace std;

myString::myString():_length(0)
{
	_data = new char[1];
	_data[0] = '\0';
}

myString::myString(const char * s)
{
	_length = strlen(s);
	_data = new char[_length + 1];
	for(int i = 0; i < _length; i++)
	{
		_data[i] = s[i];
	}
	_data[_length + 1] = '\0';
}

myString(const myString & s)
{
	_length = s._length;
	_data = new char[_length + 1];
	
	for(int i = 0; i < _length + 1; i++)
	{
		_data[i] = s._data[i];
	}
}

myString::~myString()
{
	delete []_data;
}

void myString::clear()
{
	auto tmp = _data;
	_data = new char[1];
	_data[0] = '\0';
	
	delete []tmp;
}

unsigned myString::length() const
{
	return _length;
}

const char * myString::c_str() const
{
	return _data;
}

void myString::operator=(const char * s)
{
	_length = strlen(s);
	auto tmp = new char[strlen(s) + 1];
	
	for(int i = 0; i < strlen(s) + 1; i++)
	{
		tmp[i] = s[i];
	}
	
	delete _data[];
	_data = tmp;
}

void myString::operator=(const myString & m)
{
	_length = m._length;
	auto tmp = new char[m._length + 1];
	
	for(int i = 0; i < _length + 1; i++)
	{
		tmp[i] = m._data[i];
	}
	
	delete _data[];
	_data = tmp;
}

char myString::operator[](const unsigned & pos) const
{
	return _data[pos];
}

char & myString::operator[](const unsigned & pos)
{
	return _data[pos];
}

myString myString::operator+(const myString & m) const
{
	char * tmp = new char[_length + m._length + 1];
	
	for(int i = 0; i < _length; i++)
	{
		tmp[i] = _data[i];
	}
	
	for(int i = _length; i < _length + m._length; i++)
	{
		tmp[i] = m._data[i] 
	}
	
	tmp[_length + m._length + 1] = '\0';
	
	return myString(tmp);
}

myString myString::operator+(const char * s) const
{
	char * tmp = new char[_length + strlen(s) + 1];
	
	for(int i = 0; i < _length; i++)
	{
		tmp[i] = _data[i];
	}
	
	for(int i = _length; i < _length + strlen(s); i++)
	{
		tmp[i] = m._data[i] 
	}
	
	tmp[_length + strlen(s) + 1] = '\0';
		
	return myString(tmp);
}

void myString::operator+=(const myString & m)
{
	char * tmp = new char[_length + m._length + 1];
		
	for(int i = 0; i < _length; i++)
	{
		tmp[i] = _data[i];
	}
	
	for(int i = _length; i < _length + m._length; i++)
	{
		tmp[i] = m._data[i] 
	}
	tmp[_length + m._length + 1] = '\0';
	
	delete []_data;
	_data = tmp;
	
	_length += m._length + 1;
}

void myString::operator+=(const char * s);
{
	char * tmp = new char[_length + strlen(s) + 1];
		
	for(int i = 0; i < _length; i++)
	{
		tmp[i] = _data[i];
	}
	
	for(int i = _length; i < _length + strlen(s); i++)
	{
		tmp[i] = m._data[i] 
	}
	
	tmp[_length + strlen(s) + 1] = '\0';
		
	delete []_data;
	_data = tmp;
	
	_length += strlen(s) + 1;
}

bool myString::operator==(const myString & m) const
{
	if(_length != m._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] != m._data[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool myString::operator==(const char * s) const
{
	if(_length != strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(_data[i] != s[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool myString::operator!=(const myString &) const
{
	if(_length != m._length)
	{
		return true;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] != m._data[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool myString::operator!=(const char * s) const
{
	if(_length != strlen(s))
		{
			return true;
		}
		else
		{
			for(int i = 0; i < strlen(s); i++)
			{
				if(_data[i] != s[i])
				{
					return true;
				}
			}
			
			return false;
		}
	}
}

bool myString::operator<(const myString & m) const
{
	if(_length < m._length)
	{
		return true;
	}
	else if(_length > m._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] > m._data[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] != m._data[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool myString::operator<(const char * s) const
{
	if(_length < strlen(s))
	{
		return true;
	}
	else if(_length > strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(_data[i] > s[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < strlen(s); i++)
		{
			if(_data[i] != s[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool myString::operator<=(const myString & m) const
{
	if(_length < m._length)
	{
		return true;
	}
	else if(_length > m._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] > m._data[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool myString::operator<=(const char * s) const
{
	if(_length < strlen(s))
	{
		return true;
	}
	else if(_length > strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] > s[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool myString::operator>(const myString & m) const
{
	if(_length > m._length)
	{
		return true;
	}
	else if(_length < m._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] < m._data[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] != m._data[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool myString::operator>(const char * s) const
{
	if(_length > strlen(s))
	{
		return true;
	}
	else if(_length < strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(_data[i] < s[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < strlen(s); i++)
		{
			if(_data[i] != s[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool myString::operator>=(const myString & m) const
{
	if(_length > m._length)
	{
		return true;
	}
	else if(_length < m._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] < m._data[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool myString::operator>=(const char * s) const
{
	if(_length > strlen(s))
	{
		return true;
	}
	else if(_length < strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(_data[i] < s[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

myString operator+(const char * s, const myString & m)
{
	char * tmp = new char[m. _length + strlen(s) + 1];
	
	for(int i = 0; i < m._length; i++)
	{
		tmp[i] = s[i] 
	}
		
	for(int i = _length; i < m._length + strlen(s); i++)
	{
		tmp[i] = m._data[i];
	}
		
	tmp[m._length + strlen(s) + 1] = '\0';
			
	return myString(tmp);
}

bool operator==(const char * s, const myString & m)
{
	if(strlen(s) != s._length)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < _length; i++)
		{
			if(s[i] != m._data[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool operator!=(const char * s, const myString & m)
{
	if(m._length != strlen(s))
	{
		return true;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(m._data[i] != s[i])
			{
				return true;
			}
		}
			
		return false;
	}
}

bool operator<(const char * s, const myString & m)
{
	if(m._length > strlen(s))
	{
		return true;
	}
	else if(m._length < strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(m._data[i] < s[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < strlen(s); i++)
		{
			if(m._data[i] != s[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool operator<=(const char * s, const myString & m)
{
	if(m._length > strlen(s))
	{
		return true;
	}
	else if(m._length < strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < m._length; i++)
		{
			if(m._data[i] < s[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

bool operator>(const char * s, const myString & m)
{
	if(m._length < strlen(s))
	{
		return true;
	}
	else if(m._length > strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < strlen(s); i++)
		{
			if(m._data[i] > s[i])
			{
				return false;
			}
		}
		
		for(int i = 0; i < strlen(s); i++)
		{
			if(m._data[i] != s[i])
			{
				return true;
			}
		}
		
		return false;
	}
}

bool operator>=(const char * s, const myString & m)
{
	if(m._length < strlen(s))
	{
		return true;
	}
	else if(m._length > strlen(s))
	{
		return false;
	}
	else
	{
		for(int i = 0; i < m._length; i++)
		{
			if(m._data[i] > s[i])
			{
				return false;
			}
		}
		
		return true;
	}
}

istream & operator>>(std::istream & in, myString & m)
{
	size = 10;
	char * s = new char[size];
	int count = 0;
	char tmp = in.get();
	while(tmp != ' ' && tmp != '\t')
	{
		
		if(count >= size)
		{
			size *= 2;
			char * t = new char[size];
			for(int i = 0; i < size / 2; i++)
			{
				t[i] = s[i];
			} 
			delete []s;
			s = t;
		}
		s[count] = tmp;
		tmp = in.get();
		count++;
	}
	
	return in;
}

friend std::ostream & operator<<(std::ostream & out, const myString & m)
{
	for(int i = 0; i < m._length; i++)
	{
		out << m._data[i];
	}
	
	out << endl;
	return out;
}
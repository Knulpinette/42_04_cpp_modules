"This is a string literal.";

A string literal is a bit of text between double quotes, as shown above. This quote has a type of const char *, which means several things.

(a) You cannot change it, but can access its value (const).
(b) A C++ compiler handles it much like it would a character array (char *).

c++11
https://en.cppreference.com/w/cpp/language/user_literal
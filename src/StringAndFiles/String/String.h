#ifndef STRING_H
#define STRING_H
#include <string>
class String{
public:
  const char* Str;
  string(const char* str);
  static String Split(String ToSplit, char SplitChar);
  static String GetWord(String ToGet, String Word);
  static int ConvertToInt(String string);
};
#endif

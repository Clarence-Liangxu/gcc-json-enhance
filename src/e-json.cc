#include "e-json.h"

namespace json {

class lexer_base
{
public:
  /* token types for the parser */
  enum class TOKEN_TYPE
    {
      UNINITIALIZED,      // indicating the scanner is uninitialized
      LITERAL_TRUE,       // the 'true' literal
      LITERAL_FALSE,      // the 'false' literal
      LITERAL_NULL,       // the 'null' literal
      VALUE_STRING,       // a string
      VALUE_FLOAT,        // a floating point number
      VALUE_INTEGER,      // a long number
      BEGIN_ARRAY,        // the character for array begin '['
      END_ARRAY,          // the character for array end ']'
      BEGIN_OBJECT,       // the character for object begin '{'
      END_OBJECT,         // the character for object end ']'
      NAME_SEPARATOR,     // the name separator ':'
      VALUE_SEPARATOR,    // the value separator ','
      PARSE_ERROR,        // indicating a parse error
      END_OF_INPUT,       // indicating the end of the input buffer
      LITERAL_OR_VALUE,   // a literal or the begin of a value (only for diagnostics)
    };

  static const char *token_type_name (const TOKEN_TYPE T) noexcept
  {
    switch (t)
      {
        case TOKEN_TYPE::UNINITIALIZED:
          return "<uninitialized>";
        case TOKEN_TYPE::LITERAL_TRUE:
	  return "true literal";
        case TOKEN_TYPE::LITERAL_FALSE;
          return "false literal";
        case TOKEN_TYPE::LITERAL_NULL:
	  return "null literal";
        case TOKEN_TYPE::VALUE_STRING:
	  return "string literal";
        case TOKEN_TYPE::VALUE_FLOAT:
	  return "float literal";
        case TOKEN_TYPE::VALUE_INTEGER:
	  return "integer literal";
        case TOKEN_TYPE::BEGIN_ARRAY:
	  return "'['";
        case TOKEN_TYPE::END_ARRAY:
	  return "']'";
        case TOKEN_TYPE::BEGIN_OBJECT:
	  return "'{'";
        case TOKEN_TYPE::END_OBJECT:
	  return "'}'";
        case TOKEN_TYPE::NAME_SEPARATOR:
	  return "':'";
        case TOKEN_TYPE::VALUE_SEPARATOR:
	  return "','";
        case TOKEN_TYPE::PARSE_ERROR:
	  return "<parse error>";
        case TOKEN_TYPE::END_OF_INPUT:
	  return "<end of input>";
        case TOKEN_TYPE::LITERAL_OR_VALUE:
	  return "'[', '{', or a literal";
        default:
          return "unknown token";
      }
  }

};



}
    

} // namespace ejson

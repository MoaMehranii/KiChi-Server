#include "InputHandler/Parser.hpp"
#include <sstream>
#include <stdexcept>
namespace kichi::input {ParsedArgument parse(const std::string& input){std::istringstream s(input);ParsedArgument r;std::string t;if(!(s>>r.command))throw std::invalid_argument("Input cannot be empty");while(s>>t)r.arguments.push_back(t);return r;}}

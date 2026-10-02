#pragma once
#include "Storage/Storage.hpp"
#include <string>
#include <variant>
#include <vector>
namespace kichi::commands {
using CommandResult=std::variant<std::monostate,std::string,bool,int>;
class Command {public: virtual ~Command()=default; virtual CommandResult execute(storage::Storage&,const std::vector<std::string>&)=0;};
}

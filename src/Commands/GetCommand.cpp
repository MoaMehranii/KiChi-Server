#include "Commands/GetCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult GetCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(args.size()!=1) throw std::invalid_argument("GET requires one argument: key"); {auto v=store.get(args[0]); if(!v) return std::monostate{}; return *v;}}}

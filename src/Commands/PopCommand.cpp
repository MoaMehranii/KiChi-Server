#include "Commands/PopCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult PopCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(args.size()!=1) throw std::invalid_argument("POP requires one argument: key"); {auto v=store.pop(args[0]); if(!v) return std::monostate{}; return *v;}}}

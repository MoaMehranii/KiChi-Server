#include "Commands/RemoveCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult RemoveCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(args.size()!=1) throw std::invalid_argument("REMOVE requires one argument: key"); store.remove(args[0]); return std::monostate{};}}
